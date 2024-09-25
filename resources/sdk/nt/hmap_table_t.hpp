#pragma once
#include <sdkgen/support_library.hpp>
#include "hmap_entry_t.hpp"

#include "magic/hmap_table_t.start.hpp"
namespace nt
{
    // [struct _HMAP_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hmap_table_t                                     
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                  
        _m00 sdk::array<struct nt::hmap_entry_t, 512> table;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Table
                                                            
        SDK_MAGIC_PROPERTIES( "_HMAP_TABLE.$", 0x3000, true, 0xc5314ec4a3c99efb );      
        SDK_DYNAMIC_SIZE( hmap_table_t );                   
    };                                                      
};
#include "magic/hmap_table_t.end.hpp"
