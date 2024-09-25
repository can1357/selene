#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/sms_send_t.hpp"

#include "magic/wwan_sms_send_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SMS_SEND]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_sms_send_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct ndis::object_header_t header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::sms_send_t      sms_send;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SmsSend
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SMS_SEND.$", 0x178, true, 0xf7d41f5574c2226b );         
        SDK_FIXED_SIZE( wwan_sms_send_t, 0x178 );         
    };                                             
};
#include "magic/wwan_sms_send_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_sms_send_t, 0x178 );
