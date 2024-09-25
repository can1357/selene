#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timed_operation_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_TIMED_OPERATION]
    // => WDK 10 (NV)
    //
    struct timed_operation_t            
    {                                   
        // WDK 10                       
        //                              
        _m00 uint16_t size;               //{ +0x0000    } | .Size
        _m01 uint64_t owner_tag;          //{ +0x0008    } | .OwnerTag
        _m02 uint8_t  os_handled;         //{ +0x0010    } | .OsHandled
        _m03 uint8_t  timeout_triggered;  //{ +0x0011    } | .TimeoutTriggered
        _m04 int64_t  timeout;            //{ +0x0018    } | .Timeout
        _m05 int64_t  start_tick;         //{ +0x0020    } | .StartTick
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_TIMED_OPERATION.$", 0x0, false, 0x8156b67b1c41175e );                  
        SDK_FIXED_SIZE( timed_operation_t, 0x28 );                  
    };                                  
};
#include "magic/timed_operation_t.end.hpp"
SDK_VERIFY( struct dxgk::timed_operation_t, 0x28 );
