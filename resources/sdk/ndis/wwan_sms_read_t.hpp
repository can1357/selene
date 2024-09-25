#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/sms_read_t.hpp"

#include "magic/wwan_sms_read_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SMS_READ]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_sms_read_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct ndis::object_header_t header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::sms_read_t      sms_read;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SmsRead
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SMS_READ.$", 0x10, true, 0x1037808278a9bc42 );         
        SDK_FIXED_SIZE( wwan_sms_read_t, 0x10 );         
    };                                             
};
#include "magic/wwan_sms_read_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_sms_read_t, 0x10 );
