#include "comdat.hpp"

namespace linker
{
	// Makes sure the duplicated public symbols are both valid COMDATs that and are legal 
	// to compare against each other and then picks the best option.
	// - Pick any will always pick the first symbol.
	//
	ref::strong_ptr<symbol> pick_comdat( const ref::strong_ptr<symbol>& a, const ref::strong_ptr<symbol>& b )
	{
		// If one is dynamic import, skip it.
		//
		if ( a->dyn_import && !b->dyn_import && !b->is_undefined() ) return b;
		if ( b->dyn_import && !a->dyn_import && !a->is_undefined() ) return a;

		// Make sure the comparison is valid.
		//
		xstd::assert_that( a->name == b->name, "Invalid COMDAT comparison." );
		if ( !a->is_comdat() || !b->is_comdat() )
			xstd::error( "Multiply defined symbol '%s' (%s and %s).", a->name.c_str(), a->scn->owner->file_name, b->scn->owner->file_name );

		section* a_scn = a->scn.get();
		section* b_scn = b->scn.get();
		xstd::assert_that( a_scn->comdat_select == b_scn->comdat_select, "Invalid COMDAT comparison." );

		// If not leader symbol, picked based on leader.
		//
		if ( a_scn->symbols.front() != a )
			return pick_comdat( a_scn->symbols.front(), b_scn->symbols.front() )->scn == a_scn ? a : b;

		// Switch based on COMDAT type.
		//
		switch ( a_scn->comdat_select )
		{
			// If associative COMDAT, pick based on root.
			//
			case coff::comdat_select_id::select_associative:
				return pick_comdat( a_scn->comdat_associative_root->symbols.front(), b_scn->comdat_associative_root->symbols.front() )->scn == a_scn ? a : b;

			// Fail if no duplicates is specified.
			//
			case coff::comdat_select_id::select_no_duplicates:
				xstd::error( "Multiply defined symbol '%s' [select_no_duplicates]", a->name.c_str() );

			// Fail if required property is not met.
			//
			case coff::comdat_select_id::select_exact_match:
				if ( a->value != b->value || a_scn->comdat_checksum != b_scn->comdat_checksum )
					xstd::error( "Multiply defined symbol '%s' [select_exact_match]", a->name.c_str() );
				return a;
			case coff::comdat_select_id::select_same_size:
				if ( a_scn->raw_data.size() != b_scn->raw_data.size() )
					xstd::error( "Multiply defined symbol '%s' [select_same_size]", a->name.c_str() );
				return a;

			// Pick any et al.
			//
			case coff::comdat_select_id::select_any:
				return a;
			case coff::comdat_select_id::select_largest:
				return b_scn->raw_data.size() > a_scn->raw_data.size() ? b : a;

			// Invalid type.
			//
			default:xstd::error( "Invalid COMDAT selection type." );
		}
	}
};