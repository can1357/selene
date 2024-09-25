#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sms_send_pdu_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SMS_SEND_PDU]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sms_send_pdu_t                   
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                  
        _m00 uint8_t               size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::array<char, 366> pdu_data;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .PduData
                                            
        SDK_MAGIC_PROPERTIES( "_WWAN_SMS_SEND_PDU.$", 0x16f, true, 0xdec28d0d3b5f2583 );         
        SDK_FIXED_SIZE( sms_send_pdu_t, 0x16f );         
    };                                      
};
#include "magic/sms_send_pdu_t.end.hpp"
SDK_VERIFY( struct wwan::sms_send_pdu_t, 0x16f );
