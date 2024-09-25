#pragma once
#include <sdkgen/support_library.hpp>
#include "assembly_storage_map_resolution_callback_data_get_root_t.hpp"
#include "assembly_storage_map_resolution_callback_data_resolution_ending_t.hpp"
#include "assembly_storage_map_resolution_callback_data_resolution_beginning_t.hpp"
#include "assembly_storage_map_resolution_callback_data_resolution_successful_t.hpp"

#include "magic/assembly_storage_map_resolution_callback_data_t.start.hpp"
namespace win
{
    // [union _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union assembly_storage_map_resolution_callback_data_t   
    {                                                       
        using assembly_storage_map_resolution_callback_data_resolution_beginning_t =  struct win::assembly_storage_map_resolution_callback_data_resolution_beginning_t;                      
        using resolution_beginning_t =                                                assembly_storage_map_resolution_callback_data_resolution_beginning_t ;                      
        using assembly_storage_map_resolution_callback_data_get_root_t =              struct win::assembly_storage_map_resolution_callback_data_get_root_t;                      
        using get_root_t =                                                            assembly_storage_map_resolution_callback_data_get_root_t ;                      
        using assembly_storage_map_resolution_callback_data_resolution_successful_t = struct win::assembly_storage_map_resolution_callback_data_resolution_successful_t;                      
        using resolution_successful_t =                                               assembly_storage_map_resolution_callback_data_resolution_successful_t ;                      
        using assembly_storage_map_resolution_callback_data_resolution_ending_t =     struct win::assembly_storage_map_resolution_callback_data_resolution_ending_t;                      
        using resolution_ending_t =                                                   assembly_storage_map_resolution_callback_data_resolution_ending_t ;                      
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 resolution_beginning_t   resolution_beginning;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResolutionBeginning
        _m01 get_root_t               get_root;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GetRoot
        _m02 resolution_successful_t  resolution_successful;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResolutionSuccessful
        _m03 resolution_ending_t      resolution_ending;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResolutionEnding
                                                            
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA.$", 0x40, true, 0xc7f946f2d28f6f35 );                      
        SDK_FIXED_SIZE( assembly_storage_map_resolution_callback_data_t, 0x40 );                      
    };                                                      
};
#include "magic/assembly_storage_map_resolution_callback_data_t.end.hpp"
SDK_VERIFY( union win::assembly_storage_map_resolution_callback_data_t, 0x40 );
