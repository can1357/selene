#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/assembly_storage_map_resolution_callback_data_resolution_ending_t.start.hpp"
namespace win
{
    // [struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_ENDING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assembly_storage_map_resolution_callback_data_resolution_ending_t
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                            
        _m00 void* resolution_context;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResolutionContext
                                                                            
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_ENDING.$", 0x8, true, 0x6afbe0bd1d64bea5 );                   
        SDK_FIXED_SIZE( assembly_storage_map_resolution_callback_data_resolution_ending_t, 0x8 );                   
    };                                                                      
};
#include "magic/assembly_storage_map_resolution_callback_data_resolution_ending_t.end.hpp"
SDK_VERIFY( struct win::assembly_storage_map_resolution_callback_data_resolution_ending_t, 0x8 );
