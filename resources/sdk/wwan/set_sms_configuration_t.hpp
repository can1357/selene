#pragma once
#include <sdkgen/support_library.hpp>
#include "sms_format_t.hpp"

#include "magic/set_sms_configuration_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SET_SMS_CONFIGURATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_sms_configuration_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 sdk::array<char, 16>    sc_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ScAddress
        _m01 enum wwan::sms_format_t sms_format;  //{ +0x0010    +0x0010    +0x0018    +0x0010    } | .SmsFormat
                                                
        SDK_MAGIC_PROPERTIES( "_WWAN_SET_SMS_CONFIGURATION.$", 0x14, true, 0x7f9abc1c0bcb09e0 );           
        SDK_DYNAMIC_SIZE( set_sms_configuration_t );           
    };                                          
};
#include "magic/set_sms_configuration_t.end.hpp"
