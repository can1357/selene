#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/wnf_event_callback_t.start.hpp"
namespace etw
{
    // [struct _ETW_WNF_EVENT_CALLBACK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnf_event_callback_t                               
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 struct win::system_trace_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 int64_t                           state_name;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StateName
        _m02 void*                             subscription;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Subscription
        _m03 void*                             name_sub;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NameSub
        _m04 void*                             callback;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Callback
        _m05 uint32_t                          change_stamp;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ChangeStamp
        _m06 uint32_t                          delivery_flags;  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .DeliveryFlags
        _m07 uint32_t                          _return;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Return
                                                              
        SDK_MAGIC_PROPERTIES( "_ETW_WNF_EVENT_CALLBACK.$", 0x50, true, 0x17be655f9aacfa58 );               
        SDK_FIXED_SIZE( wnf_event_callback_t, 0x50 );               
    };                                                        
};
#include "magic/wnf_event_callback_t.end.hpp"
SDK_VERIFY( struct etw::wnf_event_callback_t, 0x50 );
