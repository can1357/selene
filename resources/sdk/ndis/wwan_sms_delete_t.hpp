#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/sms_filter_t.hpp"

#include "magic/wwan_sms_delete_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SMS_DELETE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_sms_delete_t                         
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 struct ndis::object_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::sms_filter_t    sms_filter;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SmsFilter
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SMS_DELETE.$", 0xc, true, 0xe57e4f301a9d14b9 );           
        SDK_FIXED_SIZE( wwan_sms_delete_t, 0xc );           
    };                                               
};
#include "magic/wwan_sms_delete_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_sms_delete_t, 0xc );
