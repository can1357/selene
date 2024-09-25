#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createperiodicframenotification_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION]
    // => WDK 10 (NV)
    //
    struct createperiodicframenotification_t
    {                                       
        // WDK 10                      
        //                             
        _m00 void*    h_adapter;              //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_target_id;       //{ +0x0008    } | .VidPnTargetId
        _m02 uint64_t time;                   //{ +0x0010    } | .Time
        _m03 uint32_t notification_id;        //{ +0x0018    } | .NotificationID
        _m04 void*    h_notification;         //{ +0x0020    } | .hNotification
                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEPERIODICFRAMENOTIFICATION.$", 0x0, false, 0x5a48dc70cc79ee2d );                 
        SDK_FIXED_SIZE( createperiodicframenotification_t, 0x28 );                 
    };                                      
};
#include "magic/createperiodicframenotification_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createperiodicframenotification_t, 0x28 );
