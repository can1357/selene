#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/assembly_storage_map_resolution_callback_data_resolution_successful_t.start.hpp"
namespace win
{
    // [struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_SUCCESSFUL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assembly_storage_map_resolution_callback_data_resolution_successful_t
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 void*    resolution_context;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResolutionContext
        _m01 uint32_t root_index_used;                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RootIndexUsed
                                                                                
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_SUCCESSFUL.$", 0x10, true, 0xc6de6f47897b2f06 );                   
        SDK_FIXED_SIZE( assembly_storage_map_resolution_callback_data_resolution_successful_t, 0x10 );                   
    };                                                                          
};
#include "magic/assembly_storage_map_resolution_callback_data_resolution_successful_t.end.hpp"
SDK_VERIFY( struct win::assembly_storage_map_resolution_callback_data_resolution_successful_t, 0x10 );
