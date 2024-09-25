#include <flash/engine.hpp>
#include <flash/format.hpp>

std::vector<uint8_t> flash::results::serialize() const
{
	// Count the number of complete entries and calculate header size.
	//
	uint16_t num_imports = 0;
	for ( auto& x : entries )
		if ( x.state == results::complete && x.type != results::none )
			num_imports++;
	size_t header_size = sizeof( import_information ) + num_imports * sizeof( import_entry );

	// Allocate the result vector and define some helpers.
	//
	std::vector<uint8_t> raw_data( header_size );
	auto get_hdr = [ & ] { return ( import_information* ) raw_data.data(); };
	auto append = [ & ] ( const void* data, size_t length )
	{
		int32_t pos = ( int32_t ) raw_data.size();
		raw_data.insert(
			raw_data.end(),
			( const uint8_t* ) data,
			( ( const uint8_t* ) data ) + length
		);
		return pos;
	};
	get_hdr()->num_imports = num_imports;

	// Write each entry.
	//
	size_t entry_it = 0;
	for ( auto& x : entries )
	{
		if ( x.state == results::complete && x.type != results::none )
		{
			// Determine the written entry.
			//
			import_entry i;
			i.hash = hash_import( x.name );
			i.rva =  0;
			switch ( x.type )
			{
				case results::imm:
					i.type = import_type::imm;
					i.imm =  x.value_imm;
					break;
				case results::data:
				case results::func:
					i.type = import_type::ref_img;
					i.imm =  x.value_imm;
					break;
				case results::code:
				case results::arr:
					i.type = import_type::ref_info;
					i.imm = append( x.value_raw.data(), x.value_raw.size() );
					break;
				default:
					break;
			}

			// Write it and increment the iterator.
			//
			get_hdr()->imports[ entry_it++ ] = i;
		}
	}

	// Write the log information.
	//
	uint32_t offset = append( log.data(), log.size() );
	append( "\n", 1 );
	append( error_log.data(), error_log.size() );
	get_hdr()->log_offset = offset;
	get_hdr()->is_error =   !success();
	return raw_data;

}