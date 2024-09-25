#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hview_map_directory_t.start.hpp"
namespace nt
{
    struct hview_map_table_t;

    // [struct _HVIEW_MAP_DIRECTORY]
    // => Windows 10 v1607
    //
    struct hview_map_directory_t                                   
    {                                                              
        // Windows 10 v1607                                        
        //                                                         
        _m00 sdk::array<struct nt::hview_map_table_t*, 128> tables;  //{ +0x0000    } | .Tables
                                                                   
        SDK_MAGIC_PROPERTIES( "_HVIEW_MAP_DIRECTORY.$", 0x0, false, 0xab67faec01d8955c );       
        SDK_FIXED_SIZE( hview_map_directory_t, 0x400 );            
    };                                                             
};
#include "magic/hview_map_directory_t.end.hpp"
SDK_VERIFY( struct nt::hview_map_directory_t, 0x400 );
