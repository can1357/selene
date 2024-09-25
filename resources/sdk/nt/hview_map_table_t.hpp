#pragma once
#include <sdkgen/support_library.hpp>
#include "hview_map_entry_t.hpp"

#include "magic/hview_map_table_t.start.hpp"
namespace nt
{
    // [struct _HVIEW_MAP_TABLE]
    // => Windows 10 v1607
    //
    struct hview_map_table_t                                      
    {                                                             
        // Windows 10 v1607                                       
        //                                                        
        _m00 sdk::array<struct nt::hview_map_entry_t, 64> entries;  //{ +0x0000    } | .Entries
                                                                  
        SDK_MAGIC_PROPERTIES( "_HVIEW_MAP_TABLE.$", 0x0, false, 0x8edcdba611790971 );        
        SDK_FIXED_SIZE( hview_map_table_t, 0x800 );               
    };                                                            
};
#include "magic/hview_map_table_t.end.hpp"
SDK_VERIFY( struct nt::hview_map_table_t, 0x800 );
