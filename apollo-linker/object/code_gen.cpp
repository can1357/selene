#include <algorithm>
#include <llvm-c/Core.h>
#include <llvm-c/BitWriter.h>
#include <llvm-c/BitReader.h>
#include "collection.hpp"

namespace linker
{
	// Generates code for the LTO sections.
	//
	void collection::code_gen( const std::vector<std::string>& required )
	{
		// Make a list of all LTO symbols referenced from an outside context.
		//
		std::unordered_set<ref::strong_ptr<symbol>> lto_symbols;
		std::unordered_set<ref::strong_ptr<object>> lto_objects;
		std::unordered_set<std::string> lto_exports;
		auto ltcg_include = [ & ] ( const ref::strong_ptr<symbol>& sym )
		{
			if ( sym->is_undefined() )
			{
				if ( auto it = public_symbols.find( sym->name ); it != public_symbols.end() && it->second.alive() )
				{
					if ( it->second->scn.alive() && it->second->scn->owner->lto )
						lto_symbols.emplace( it->second.lock() );
				}
			}
			else
			{
				lto_symbols.emplace( sym );
			}
		};
		for ( auto& sym : required )
			ltcg_include( require( sym ) );
		for ( auto& object : working_set )
		{
			for ( auto& f : object->force_includes )
			{
				if ( auto it = public_symbols.find( f ); it != public_symbols.end() && it->second.alive() )
					ltcg_include( it->second.lock() );
			}
			if ( object->lto )
			{
				if ( lto_objects.emplace( object ).second )
					lto_exports.insert( object->dllexported_symbols.begin(), object->dllexported_symbols.end() );
				continue;
			}
			for ( auto& scn : object->sections )
			{
				for ( auto& reloc : scn->relocs )
				{
					if ( reloc.ref_symbol->is_undefined() )
						ltcg_include( reloc.ref_symbol );
				}
			}
		}

		// If there are any:
		//
		if ( !lto_symbols.empty() )
		{
			// Create the code generator, append LTO objects to the code generator, set the symbols and compile.
			//
			lto::code_generator ltcg = {};
			for ( auto& obj : lto_objects ) ltcg.add_object( obj->lto );
			for ( auto& sym : required )    ltcg.preserve_symbol( sym.c_str() );
			for ( auto& sym : lto_symbols ) ltcg.mark_xref( sym->name.c_str() );
			lto_codegen_set_pic_model( ltcg, LTO_CODEGEN_PIC_MODEL_DYNAMIC );

			xstd::log( "Generating code...\n" );
			auto [raw_obj, ltcg_time] = xstd::profile( [ & ] () { return ltcg.compile(); } );
			fassert( !raw_obj.empty() );
			xstd::log( "Code generation complete, took: %s\n", ltcg_time );

			// Remove leftover fake objects.
			//
			std::erase_if( public_symbols, [ & ] ( auto& pair )
			{
				return pair.second.alive() && pair.second->is_defined() && pair.second->scn->owner->lto;
			} );
			std::erase_if( working_set, [ ] ( const ref::strong_ptr<object>& obj )
			{
				if ( !obj->lto ) return false;
				obj->discard_section_if( [ & ] ( auto&& ) { return true; } );
				return true;
			} );

			// Include the new object.
			//
			auto obj = load_object( raw_obj.data(), raw_obj.size(), "ld-temp.obj" );
			obj->dllexported_symbols.insert( std::make_move_iterator( lto_exports.begin() ), std::make_move_iterator( lto_exports.end() ) );
			lto_symbols.clear();
			lto_objects.clear();
			include( std::move( obj ) );

			// If flag to save LTO temporary is set, save the resulting object file.
			//
			if ( lto_save )
				xstd::file::write_raw( "ld-temp.obj", raw_obj );
		}
	}
}