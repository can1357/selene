#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/atom_table_information_t.start.hpp"
namespace win
{
    // [struct _ATOM_TABLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct atom_table_information_t                  
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint32_t                number_of_atoms;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfAtoms
        _m01 sdk::array<uint16_t, 1> atoms;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Atoms
                                                     
        SDK_MAGIC_PROPERTIES( "_ATOM_TABLE_INFORMATION.$", 0x8, true, 0x811bcf2bc6d6e5d6 );                
        SDK_FIXED_SIZE( atom_table_information_t, 0x8 );                
    };                                               
};
#include "magic/atom_table_information_t.end.hpp"
SDK_VERIFY( struct win::atom_table_information_t, 0x8 );
