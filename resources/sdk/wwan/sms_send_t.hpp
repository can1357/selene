#pragma once
#include <sdkgen/support_library.hpp>
#include "sms_format_t.hpp"
#include "sms_send_pdu_t.hpp"
#include "sms_send_cdma_t.hpp"

#include "magic/sms_send_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SMS_SEND]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sms_send_t                                
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 enum wwan::sms_format_t      sms_format;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SmsFormat
        _m01 struct wwan::sms_send_pdu_t  pdu;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Pdu
        _m02 struct wwan::sms_send_cdma_t cdma;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Cdma
                                                     
        SDK_MAGIC_PROPERTIES( "_WWAN_SMS_SEND.$", 0x174, true, 0x9c9f03753e258da5 );           
        SDK_FIXED_SIZE( sms_send_t, 0x174 );           
    };                                               
};
#include "magic/sms_send_t.end.hpp"
SDK_VERIFY( struct wwan::sms_send_t, 0x174 );
