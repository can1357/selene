#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hview_map_pin_log_entry_t.start.hpp"
namespace nt
{
    struct kthread_t;

    // [struct _HVIEW_MAP_PIN_LOG_ENTRY]
    // => Windows 10 v1607
    //
    struct hview_map_pin_log_entry_t           
    {                                          
        // Windows 10 v1607                    
        //                                     
        _m00 uint32_t              view_offset;  //{ +0x0000    } | .ViewOffset
        _m01 uint8_t               pinned;       //{ +0x0004    } | .Pinned
        _m02 uint64_t              pin_mask;     //{ +0x0008    } | .PinMask
        _m03 struct nt::kthread_t* thread;       //{ +0x0010    } | .Thread
        _m04 sdk::array<void*, 6>  stack;        //{ +0x0018    } | .Stack
                                               
        SDK_MAGIC_PROPERTIES( "_HVIEW_MAP_PIN_LOG_ENTRY.$", 0x0, false, 0xf5862ccfb7cba993 );            
        SDK_FIXED_SIZE( hview_map_pin_log_entry_t, 0x48 );            
    };                                         
};
#include "magic/hview_map_pin_log_entry_t.end.hpp"
SDK_VERIFY( struct nt::hview_map_pin_log_entry_t, 0x48 );
