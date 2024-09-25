#pragma once
#include <xstd/formatting.hpp>
#include "common.hpp"
#include "enums.hpp"
#include "descriptors.hpp"
#include "llvm.hpp"

namespace wasm
{
   // Magic numbers.
   //
   static constexpr uint32_t magic_number = 'msa\x0';
   static constexpr uint32_t current_version = 1;

   // Image descriptor.
   //
   struct image
   {
      // Magic value and the version.
      //
      uint32_t                                         magic;
      uint32_t                                         version;

      // Sections we're parsing:
      //
      var_container<func_type_t>                       types;
      var_container<import_entry>                      imports;
      var_container<export_entry>                      exports;
      var_container<var_size_t>                        functions;
      var_container<table_type_t>                      tables;
      var_container<memory_type_t>                     memory;
      var_container<function_body_t>                   code;
      linking_section                                  linking;
      std::vector<relocations_section>                 relocs;

      // Manually serialized according to the RFC.
      //
      static image deserialize( xstd::serialization& stream )
      {
         // Read the header and validate.
         //
         image img;
			stream.read( &img.magic,   sizeof( img.magic ) );
			stream.read( &img.version, sizeof( img.version ) );
         fassert( img.magic == magic_number && img.version == current_version );

         // Until stream is finished, read sections.
         //
         while ( !stream.empty() )
         {
            // Read the type and the length of the section.
            //
            section_type type = stream.read<var_enum_t<section_type>>();

            // Read the payload.
            //
            size_t length = stream.read<var_size_t>();
            xstd::serialization payload_stream = { stream.input_stream.subspan( 0, length ), true };
            stream.skip( length );

            // Switch based on section type:
            //
            switch ( type )
            {
               // If custom section, read the name.
               //
               case section_type::custom:
               {
                  std::string name = payload_stream.read<var_string>();

                  if ( name == "linking" )
                     payload_stream >> img.linking;
                  else if ( name.starts_with( "reloc." ) )
                     payload_stream >> img.relocs.emplace_back();
                  else if ( name != "producers" && name != "target_features" )
                     xstd::warning( "Skipping unknown custom section: %s.", name );
                  break;
               }

               // If default section, pass to handler if we handle it, otherwise display a warning.
               //
               case section_type::type:     payload_stream >> img.types;     break;
               case section_type::imports:  payload_stream >> img.imports;   break;
               case section_type::function: payload_stream >> img.functions; break;
               case section_type::table:    payload_stream >> img.tables;    break;
               case section_type::memory:   payload_stream >> img.memory;    break;
               case section_type::exports:  payload_stream >> img.exports;   break;
               case section_type::code:     payload_stream >> img.code;      break;
               default:
               {
                  xstd::warning( "Skipping unhandled section id: %d.", type );
                  break;
               }
            }
         }
         return img;
      }
   };
};