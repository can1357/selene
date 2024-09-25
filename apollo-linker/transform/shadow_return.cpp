#include "shadow_return.hpp"
#include <span>

// Makes sure all return instructions clear the return pointer before returning.
//
void linker::transform::shadow_return( collection& col )
{
	// For each section in the object:
	//
	auto& e1 = col.attributes.find( "no_split" );
	for ( auto& obj : col.working_set )
	{
		for ( auto& scn : obj->sections )
		{
			// If code section:
			//
			if ( scn->characteristics.cnt_code )
			{
				// If no-split / preserve-ret is set, skip.
				//
				auto should_skip = [ & ] ()
				{
					bool preserve_ret = false;
					for ( auto& sym : scn->symbols )
						preserve_ret |= e1.contains( sym->name );
					return preserve_ret;
				};

				// Pick a random register.
				//
				static const std::tuple<std::vector<uint8_t>, std::vector<uint8_t>, std::vector<uint8_t>> stubs[] = {
						{ { 0x41, 0x58 }, { 0x4C, 0x31, 0x44, 0x24 }, { 0x41, 0xFF, 0xE0 } }, // r8
						{ { 0x41, 0x59 }, { 0x4C, 0x31, 0x4C, 0x24 }, { 0x41, 0xFF, 0xE1 } }, // r9
						{ { 0x41, 0x5A }, { 0x4C, 0x31, 0x54, 0x24 }, { 0x41, 0xFF, 0xE2 } }, // r10
						{ { 0x41, 0x5B }, { 0x4C, 0x31, 0x5C, 0x24 }, { 0x41, 0xFF, 0xE3 } }, // r11
				};
				auto& [pop, clz, jmp] = xstd::pick_randomi( stubs );

				// Declare the helper to trash the stack after popping.
				//
				auto trash = [ &, &clz = clz ] ()
				{
					// Trash the stack.
					//
					uint32_t rng;
					size_t k;
					if ( col.build_type == satella::build_type::development )
					{
							k = 7;
							rng = 0;
					}
					else
					{
							rng = xstd::make_random<uint32_t>();
							k = xstd::make_random( 0, 8 );
					}
			
					switch ( k )
					{
						// MOV DWORD [rsp-{6-4}]
						case 0:
							scn->raw_data.insert( scn->raw_data.end(), { 0xC7, 0x44, 0x24 } );
							scn->raw_data.insert( scn->raw_data.end(), { ( uint8_t ) xstd::make_random<int8_t>( -0x6, -0x4 ) } );
							scn->raw_data.insert( scn->raw_data.end(), ( uint8_t* ) &rng, ( uint8_t* ) std::next( &rng ) );
							break;
						// XOR DWORD [rsp-{6-4}]
						case 1: 
							scn->raw_data.insert( scn->raw_data.end(), { 0x81, 0x74, 0x24 } );
							scn->raw_data.insert( scn->raw_data.end(), { ( uint8_t ) xstd::make_random<int8_t>( -0x6, -0x4 ) } );
							scn->raw_data.insert( scn->raw_data.end(), ( uint8_t* ) &rng, ( uint8_t* ) std::next( &rng ) );
							break;
						// AND DWORD [rsp-{6-4}]
						case 2: 
							scn->raw_data.insert( scn->raw_data.end(), { 0x81, 0x64, 0x24 } );
							scn->raw_data.insert( scn->raw_data.end(), { ( uint8_t ) xstd::make_random<int8_t>( -0x6, -0x4 ) } );
							scn->raw_data.insert( scn->raw_data.end(), ( uint8_t* ) &rng, ( uint8_t* ) std::next( &rng ) );
							break;
						// OR DWORD  [rsp-{6-4}]
						case 3: 
							scn->raw_data.insert( scn->raw_data.end(), { 0x81, 0x4C, 0x24 } );
							scn->raw_data.insert( scn->raw_data.end(), { ( uint8_t ) xstd::make_random<int8_t>( -0x6, -0x4 ) } );
							scn->raw_data.insert( scn->raw_data.end(), ( uint8_t* ) &rng, ( uint8_t* ) std::next( &rng ) );
							break;
						// XOR QWORD [rsp-{8, 7}], <reg>
						case 4:
							scn->raw_data.insert( scn->raw_data.end(), clz.begin(), clz.end() );
							scn->raw_data.insert( scn->raw_data.end(), { ( uint8_t ) xstd::make_random<int8_t>( -0x8, -0x7 ) } );
							break;
						// AND QWORD [rsp-{8, 9}], {0x00, 0x7F}
						case 5:
							scn->raw_data.insert( scn->raw_data.end(), { 0x48, 0x83, 0x64, 0x24 } );
							scn->raw_data.insert( scn->raw_data.end(), { ( uint8_t ) xstd::make_random<int8_t>( -0x9, -0x8 ), ( uint8_t ) xstd::make_random<int8_t>( 0, INT8_MAX ) } );
							break;
						// AND QWORD [rsp-8], 0
						default:
							scn->raw_data.insert( scn->raw_data.end(), { 0x48, 0x83, 0x64, 0x24, 0xF8, 0x00 } );
							break;
					}
				};

				// If terminated by a RETN
				// - No need to disassemble as basic blocks are split.
				//
				if ( scn->raw_data.size() && scn->raw_data.back() == 0xC3 )
				{
					if ( should_skip() ) continue;

					// Pop the RETN.
					//
					scn->raw_data.pop_back();
					
					// Pop the retptr into a volatile register.
					//
					scn->raw_data.insert( scn->raw_data.end(), pop.begin(), pop.end() );
			
					// Trash the stack.
					//
					trash();

					// Jump to the register.
					//
					scn->raw_data.insert( scn->raw_data.end(), jmp.begin(), jmp.end() );
				}
				// If terminated by a RETN (imm):
				//
				else if ( scn->raw_data.size() > 3 && scn->raw_data[ scn->raw_data.size() - 3 ] == 0xC2 )
				{
					if ( should_skip() ) continue;

					// Pop the RETN.
					//
					uint16_t immw = *(uint16_t*)&scn->raw_data[ scn->raw_data.size() - 2 ];
					if ( ( immw & 7 ) || immw > 0x100 ) continue; // False positive?
					scn->raw_data.resize( scn->raw_data.size() - 3 );

					// Pop the retptr into a volatile register.
					//
					scn->raw_data.insert( scn->raw_data.end(), pop.begin(), pop.end() );

					// Trash the stack.
					//
					trash();

					// Increment the stack pointer accordingly.
					//
					if ( immw <= 0x7F )
					{
						scn->raw_data.insert( scn->raw_data.end(), { 0x48, 0x83, 0xC4, ( uint8_t ) immw } );
					}
					else
					{
						uint32_t imm = immw;
						scn->raw_data.insert( scn->raw_data.end(), { 0x48, 0x81, 0xC4 } );
						scn->raw_data.insert( scn->raw_data.end(), ( uint8_t* ) &imm, ( uint8_t* ) std::next( &imm ) );
					}

					// Jump to the register.
					//
					scn->raw_data.insert( scn->raw_data.end(), jmp.begin(), jmp.end() );
				}
			}
		}
	}
}