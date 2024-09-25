#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_blocked_driver_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_BLOCKED_DRIVER_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_blocked_driver_data_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t flags;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t buffer_length;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BufferLength
        _m02 void*    buffer;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                                 
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_BLOCKED_DRIVER_DATA.$", 0x10, true, 0x315a4cc5c6a71b0e );              
        SDK_FIXED_SIZE( plugplay_control_blocked_driver_data_t, 0x10 );              
    };                                           
};
#include "magic/plugplay_control_blocked_driver_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_blocked_driver_data_t, 0x10 );
