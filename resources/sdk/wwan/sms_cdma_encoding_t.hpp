#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_SMS_CDMA_ENCODING]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sms_cdma_encoding_t : int32_t
    {                                       
        encoding_octet =        0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_epm =          0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding7_bit_ascii =   0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_ia5 =          0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_unicode =      0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_shift_jis =    0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_korean =       0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_latin_hebrew = 0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_latin =        0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_gsm7_bit =     0x9,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encoding_max =          0xa,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
