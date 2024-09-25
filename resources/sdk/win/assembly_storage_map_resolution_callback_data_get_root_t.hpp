#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/assembly_storage_map_resolution_callback_data_get_root_t.start.hpp"
namespace win
{
    // [struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assembly_storage_map_resolution_callback_data_get_root_t
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 void*            resolution_context;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResolutionContext
        _m01 uint64_t         root_index;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RootIndex
        _m02 uint8_t          cancel_resolution;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CancelResolution
        _m03 uint8_t          no_more_entries;                       //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .NoMoreEntries
        _m04 nt::unicode_view root;                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Root
                                                                   
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT.$", 0x28, true, 0xab0498e204408bed );                   
        SDK_FIXED_SIZE( assembly_storage_map_resolution_callback_data_get_root_t, 0x28 );                   
    };                                                             
};
#include "magic/assembly_storage_map_resolution_callback_data_get_root_t.end.hpp"
SDK_VERIFY( struct win::assembly_storage_map_resolution_callback_data_get_root_t, 0x28 );
