#pragma once
#include <sdkgen/support_library.hpp>
#include "sms_filter_t.hpp"
#include "sms_format_t.hpp"

#include "magic/sms_read_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SMS_READ]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sms_read_t                              
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 enum wwan::sms_format_t   sms_format;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SmsFormat
        _m01 struct wwan::sms_filter_t read_filter;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadFilter
                                                   
        SDK_MAGIC_PROPERTIES( "_WWAN_SMS_READ.$", 0xc, true, 0x550472a722e19542 );            
        SDK_FIXED_SIZE( sms_read_t, 0xc );            
    };                                             
};
#include "magic/sms_read_t.end.hpp"
SDK_VERIFY( struct wwan::sms_read_t, 0xc );
