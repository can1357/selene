#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refs_volume_counter_info_input_buffer_t.start.hpp"
namespace win
{
    // [struct _REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct refs_volume_counter_info_input_buffer_t
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint8_t reset_counters;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ResetCounters
                                                  
        SDK_NONVOL_PROPERTIES( "_REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER.$", 0x1, true, 0x90dd729939e8e99b );               
        SDK_FIXED_SIZE( refs_volume_counter_info_input_buffer_t, 0x1 );               
    };                                            
};
#include "magic/refs_volume_counter_info_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::refs_volume_counter_info_input_buffer_t, 0x1 );
