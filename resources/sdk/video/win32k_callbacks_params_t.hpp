#pragma once
#include <sdkgen/support_library.hpp>
#include "win32k_callbacks_params_type_t.hpp"

#include "magic/win32k_callbacks_params_t.start.hpp"
namespace video
{
    // [struct _VIDEO_WIN32K_CALLBACKS_PARAMS]
    // => WDK 10 (NV)
    //
    struct win32k_callbacks_params_t                                         
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 enum video::win32k_callbacks_params_type_t callout_type;          //{ +0x0000    } | .CalloutType
        _m01 void*                                      phys_disp;             //{ +0x0008    } | .PhysDisp
        _m02 uint64_t                                   param;                 //{ +0x0010    } | .Param
        _m03 int32_t                                    status;                //{ +0x0018    } | .Status
        _m04 uint8_t                                    lock_user_session;     //{ +0x001c    } | .LockUserSession
        _m05 uint8_t                                    is_post_device;        //{ +0x001d    } | .IsPostDevice
        _m06 uint8_t                                    surprise_removal;      //{ +0x001e    } | .SurpriseRemoval
        _m07 uint8_t                                    wait_for_queue_ready;  //{ +0x001f    } | .WaitForQueueReady
                                                                             
        SDK_NONVOL_PROPERTIES( "_VIDEO_WIN32K_CALLBACKS_PARAMS.$", 0x0, false, 0x9140acb61bf25c94 );                     
        SDK_FIXED_SIZE( win32k_callbacks_params_t, 0x20 );                     
    };                                                                       
};
#include "magic/win32k_callbacks_params_t.end.hpp"
SDK_VERIFY( struct video::win32k_callbacks_params_t, 0x20 );
