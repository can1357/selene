#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyperiodicframenotification_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DESTROYPERIODICFRAMENOTIFICATION]
    // => WDK 10 (NV)
    //
    struct destroyperiodicframenotification_t
    {                                        
        // WDK 10                 
        //                        
        _m00 void* h_notification;             //{ +0x0000    } | .hNotification
        _m01 void* h_adapter;                  //{ +0x0008    } | .hAdapter
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DESTROYPERIODICFRAMENOTIFICATION.$", 0x0, false, 0x52eb87b62fc7f425 );               
        SDK_FIXED_SIZE( destroyperiodicframenotification_t, 0x10 );               
    };                                       
};
#include "magic/destroyperiodicframenotification_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::destroyperiodicframenotification_t, 0x10 );
