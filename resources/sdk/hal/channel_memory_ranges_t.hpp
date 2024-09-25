#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/channel_memory_ranges_t.start.hpp"
namespace hal
{
    // [struct _HAL_CHANNEL_MEMORY_RANGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct channel_memory_ranges_t        
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t page_frame_index;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageFrameIndex
        _m01 uint16_t mpn_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MpnId
        _m02 uint16_t node;                 //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Node
        _m03 uint16_t channel;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Channel
        _m04 uint8_t  is_power_manageable;  //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .IsPowerManageable
        _m05 uint8_t  deep_power_state;     //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .DeepPowerState
                                          
        SDK_MAGIC_PROPERTIES( "_HAL_CHANNEL_MEMORY_RANGES.$", 0x10, true, 0xde4052a5331d0853 );                    
        SDK_FIXED_SIZE( channel_memory_ranges_t, 0x10 );                    
    };                                    
};
#include "magic/channel_memory_ranges_t.end.hpp"
SDK_VERIFY( struct hal::channel_memory_ranges_t, 0x10 );
