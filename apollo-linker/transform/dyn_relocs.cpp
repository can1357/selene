#include <unordered_set>
#include "dyn_relocs.hpp"
#include "../utility/llvm.hpp"

template<typename F>
static void for_each_call( LLVMModuleRef mod, const char* name, F&& enumerator )
{
	// Resolve the function.
	//
	LLVMValueRef fn = llvm::get_function( mod, name );
	if ( !fn ) return;

	// Resolve each call:
	//
	for ( auto [user, _] : llvm::get_primary_users( fn, { LLVMInstructionValueKind } ) )
	{
		if ( LLVMGetInstructionOpcode( user ) == LLVMCall )
		{
			// Get the first argument.
			//
			LLVMValueRef name_value = LLVMGetOperand( user, 0 );
			while ( LLVMGetValueKind( name_value ) == LLVMConstantExprValueKind )
			{
				switch ( LLVMGetConstOpcode( name_value ) )
				{
					case LLVMPtrToInt:
					case LLVMIntToPtr:
					case LLVMBitCast:
					case LLVMAddrSpaceCast:
					case LLVMGetElementPtr:
						name_value = LLVMGetOperand( name_value, 0 );
						continue;
					default: break;
				}
				break;
			}
			if ( !LLVMIsGlobalConstant( name_value ) )
				xstd::error( "Name operand to %s must be a constant C string.", name );
			name_value = LLVMGetInitializer( name_value );
			if ( !LLVMIsConstantString( name_value ) )
				xstd::error( "Name operand to %s must be a constant C string.", name );

			std::string_view reloc_name = llvm::get_as_string( name_value );
			if ( reloc_name.starts_with( "@." ) )
				reloc_name.remove_prefix( 2 );
			if ( reloc_name.back() == '\x0' )
				reloc_name.remove_suffix( 1 );
			enumerator( user, reloc_name );
		}
	}
}


// Handles invocations of builtins for fetching and resolving of dynamic relocations.
//
void linker::transform::lift_dynrelocs( collection& col )
{
	// Enumerate every LLVM object:
	//
	for ( auto& obj : col.working_set )
	{
		auto& mod = obj->llvm;
		if ( !mod ) continue;

		for_each_call( mod, "__builtin_fetch_dynamic", [ & ] ( LLVMValueRef user, std::string_view name )
		{
			// Create a dummy global representing it, reference it using movabs.
			//
			LLVMValueRef value = llvm::get_global<true>( mod, ( ".dynreloc.value." + std::string{ name } ).data(), LLVMInt8Type(), nullptr, obj.get() ).first;
			LLVMTypeRef  resolver_ty = llvm::make_func_type(LLVMTypeOf(value), { LLVMTypeOf(value) });
			LLVMValueRef resolver = llvm::inline_asm( resolver_ty, "movabs $1, $0", "=r,i" );

			// Create the builder.
			//
			LLVMBuilderRef bb = LLVMCreateBuilder();
			LLVMPositionBuilderBefore( bb, user );

			// Call the resolver.
			//
			value = LLVMBuildCall2( bb, resolver_ty, resolver, &value, 1, "" );

			// Dispose the builder, replace every user with the value.
			//
			LLVMDisposeBuilder( bb );
			llvm::replace_all_and_erase( user, value );
		} );
		for_each_call( mod, "__builtin_dynamic_users", [ & ] ( LLVMValueRef user, std::string_view name )
		{
			// Create a dummy global representing it, cast its pointer to match the return value.
			//
			LLVMValueRef value = llvm::get_global<true>( mod, ( ".dynreloc.users." + std::string{ name } ).data(), LLVMInt8Type(), nullptr, obj.get() ).first;
			value = LLVMConstPointerCast( value, LLVMTypeOf( user ) );

			// Replace every user with the value.
			//
			llvm::replace_all_and_erase( user, value );
		} );
	}
}

// Handles linkage against dynamic relocations after codegen is complete.
//
void linker::transform::finalize_dynrelocs( collection& col )
{
	struct dynreloc_state
	{
		// Whether or not the table was directly referenced yet.
		//
		bool referenced = false;

		// Section for the dynreloc.users holding a table of pointers terminating with a null entry.
		//
		ref::strong_ptr<section> table = {};

		// Symbol for the table.
		//
		ref::strong_ptr<symbol>  table_begin = {};

		// Sentinel for dynrelocs in invalid state for debug builds.
		//
		ref::strong_ptr<symbol>  inv_sentinel = {};
	};
	std::unordered_map<std::string, dynreloc_state, xstd::ahash<>> dynreloc_use_list;

	// Create a unique object:
	//
	auto dr_object = col.working_set.emplace_back( ref::allocate<linker::object>() );
	dr_object->file_name = "dynreloc.tmp";
	auto reference_dynamic_reloc = [ & ] ( std::string name, bool for_resolution )
	{
		// If a section was not created yet:
		//
		auto& state = dynreloc_use_list[ name ];
		if ( !state.table )
		{
			bool is_debug_tbl = col.is_debug();

			// Create an empty section.
			//
			auto& dr_section = dr_object->sections.emplace_back( ref::allocate<section>() );
			dr_section->owner = dr_object;
			dr_section->name = ".dyn";
			dr_section->characteristics.cnt_init_data = true;
			dr_section->characteristics.mem_read = true;
			dr_section->raw_data.resize( is_debug_tbl ? 32 + 8 : 8, 0 ); // null terminator + sentinel.
			state.table = dr_section;

			// Add a symbol for the sentinel if relevant.
			//
			uint32_t offset = 0;
			if ( is_debug_tbl )
			{
				// "?" + name + "@dyn@@3QB_KB"

				auto& snt_symbol = dr_section->symbols.emplace_back( ref::allocate<symbol>() );
				snt_symbol->scn = dr_section;
				snt_symbol->storage_class = coff::storage_class_id::public_symbol;
				snt_symbol->name = "?" + name + "@dyn@@3_OB_KB";
				snt_symbol->derived_type = coff::derived_type_id::none;
				snt_symbol->value = 0;
				state.inv_sentinel = snt_symbol;
				offset = 32;
				fassert( col.public_symbols.emplace( snt_symbol->name, snt_symbol ).second );
			}

			// Add a symbol for the beginning of the table.
			//
			auto& tbl_symbol = dr_section->symbols.emplace_back( ref::allocate<symbol>() );
			tbl_symbol->scn = dr_section;
			tbl_symbol->storage_class = coff::storage_class_id::public_symbol;
			tbl_symbol->name = "?" + name + "@users@dyn@@3_OB_KB";
			tbl_symbol->derived_type = coff::derived_type_id::none;
			tbl_symbol->value = offset;
			state.table_begin = tbl_symbol;
		}

		// Update resolution flags, return a pointer.
		//
		state.referenced |= for_resolution;
		return &state;
	};

	// Enumerate each object skipping dynamic-relocations object:
	//
	for ( auto& obj : col.working_set )
	{
		if ( obj == dr_object )
			continue;

		// For each relocation:
		//
		for ( auto& scn : obj->sections )
		{
			for ( auto reloc = scn->relocs.begin(); reloc != scn->relocs.end(); )
			{
				if ( reloc->ref_symbol->is_undefined() )
				{
					if ( reloc->ref_symbol->name.starts_with( ".dynreloc.value." ) )
					{
						// Validate address.
						//
						fassert( reloc->type == coff::rel_amd64_addr64 );

						// Resolve the table.
						//
						auto* dr = reference_dynamic_reloc( reloc->ref_symbol->name.substr( xstd::strlen( ".dynreloc.value." ) ), false );

						// Create a symbol at the relocation point.
						//
						auto& reloc_sym = scn->symbols.emplace_back( ref::allocate<symbol>() );
						reloc_sym->scn = scn;
						reloc_sym->storage_class = coff::storage_class_id::label;
						reloc_sym->derived_type = coff::derived_type_id::none;
						reloc_sym->value = reloc->offset;

						// Append to the table.
						//
						auto& tbl_sec = dr->table;
						size_t pos = tbl_sec->raw_data.size();
						tbl_sec->raw_data.resize( pos + 8 );
						tbl_sec->relocs.emplace_back( relocation{ pos - 8, reloc_sym, coff::rel_amd64_addr64 } );

						// Remove the original relocation or replace it if debug.
						//
						if ( !dr->inv_sentinel )
						{
							reloc = scn->relocs.erase( reloc );
							continue;
						}
						reloc->ref_symbol = dr->inv_sentinel;
					}
					else if ( reloc->ref_symbol->name.starts_with( ".dynreloc.users." ) )
					{
						// Resolve the table.
						//
						auto* dr = reference_dynamic_reloc( reloc->ref_symbol->name.substr( xstd::strlen( ".dynreloc.value." ) ), true );

						// Replace the referenced symbol with the actual table.
						//
						reloc->ref_symbol = dr->table_begin;
					}
				}
				++reloc;
			}
		}
	}

	// Make sure every dynamic relocation has a resolver.
	//
	for ( auto& [name, dyn_reloc] : dynreloc_use_list )
	{
		if ( !dyn_reloc.referenced )
			xstd::warning( "Dynamic relocation '%s' is never resolved!\n", name );
	}
}
