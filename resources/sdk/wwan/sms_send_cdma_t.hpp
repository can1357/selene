#pragma once
#include <sdkgen/support_library.hpp>
#include "sms_cdma_lang_t.hpp"
#include "sms_cdma_encoding_t.hpp"

#include "magic/sms_send_cdma_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SMS_SEND_CDMA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sms_send_cdma_t                                     
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 enum wwan::sms_cdma_encoding_t encoding_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EncodingId
        _m01 enum wwan::sms_cdma_lang_t     language_id;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LanguageId
        _m02 sdk::array<char, 50>           address;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Address
        _m03 uint16_t                       size_in_bytes;       //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .SizeInBytes
        _m04 uint8_t                        size_in_characters;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SizeInCharacters
        _m05 sdk::array<uint8_t, 160>       encoded_msg;         //{ +0x003d    +0x003d    +0x003d    +0x003d    } | .EncodedMsg
                                                               
        SDK_MAGIC_PROPERTIES( "_WWAN_SMS_SEND_CDMA.$", 0xe0, true, 0x16cf420618ebaa );                   
        SDK_FIXED_SIZE( sms_send_cdma_t, 0xe0 );                   
    };                                                         
};
#include "magic/sms_send_cdma_t.end.hpp"
SDK_VERIFY( struct wwan::sms_send_cdma_t, 0xe0 );
