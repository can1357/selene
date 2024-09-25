#include <algorithm>
#include "collection.hpp"

namespace linker
{
	// Eliminates contents of the objects that are not referenced.
	//
	void collection::opt_ref( const std::vector<std::string>& required, bool builtin_use_known, bool ignore_forced_includes )
	{
		// Declare a referenced section set and a recursive helper.
		//
		std::unordered_set<ref::weak_ptr<object>> included_objects;
		std::unordered_set<ref::weak_ptr<section>> included_sections;
		auto reference = [ & ] ( const ref::weak_ptr<section>& scn, auto&& self ) -> void
		{
			if ( !included_sections.emplace( scn ).second )
				return;
			
			auto require = [ & ] ( const ref::strong_ptr<symbol>& sym )
			{
				if ( sym->scn.alive() )
				{
					self( sym->scn, self );
				}
				else if ( sym->is_undefined() && ( sym->is_public() || sym->is_weak() ) )
				{
					bool found = false;
					if ( auto it = public_symbols.find( sym->name ); it != public_symbols.end() )
						if ( it->second.alive() && it->second->scn.alive() )
							self( it->second->scn, self ), found = true;
					if ( !found )
					{
						if ( sym->is_weak() )
							self( sym->alias->scn, self );
					}
				}
			};

			// If LTO object, require every external symbol.
			//
			if ( scn->owner->lto )
			{
				for ( auto& sym : scn->owner->external_symbols )
					require( sym );
			}

			// Recurse into relocs.
			//
			for ( auto& reloc : scn->relocs )
				require( reloc.ref_symbol );

			// Continue if we've already included this object.
			//
			if ( !included_objects.emplace( scn->owner ).second )
				return;
			
			// If object file has any force includes, include.
			//
			if ( !ignore_forced_includes )
			{
				for ( auto* list : { &scn->owner->meta.initializers,
									 &scn->owner->meta.pre_initializers,
									 &scn->owner->meta.terminators,
									 &scn->owner->meta.pre_terminators, } )
				{
					for ( auto& sym : *list )
						self( sym->scn, self );
				}

				for ( auto& name : scn->owner->force_includes )
				{
					if ( auto it = public_symbols.find( name ); it != public_symbols.end() )
					{
						if ( it->second.alive() && it->second->scn.alive() )
							self( it->second->scn, self );
					}
					else
					{
						xstd::error( "Force included '%s' not found.", name );
					}
				}
			}
		};

		// Reference every symbol we require.
		//
		for ( auto& name : required )
		{
			auto sym = require( name );
			if ( !sym || !sym->is_defined() )
				xstd::error( "Image required '%s' not found.", name );
			reference( sym->scn, reference );
		}

		// Enumerate each object, remove every section that is not within our list,
		// if no sections left remove the object file.
		//
		std::erase_if( working_set, [ & ] ( const ref::strong_ptr<object>& obj )
		{
			// If builtin provider with builtin use state not known yet, skip.
			//
			if ( obj->is_builtin_provider && !builtin_use_known )
				return false;
			obj->discard_section_if( [ & ] ( const ref::strong_ptr<section>& scn )
			{
				return !included_sections.contains( scn ) || ( 
					scn->comdat_select == coff::comdat_select_id::select_associative && 
					scn->comdat_associative_root.dangling() 
				);
			} );
			return obj->sections.empty();
		} );
	}
}