#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CertKeyType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cert_key_type_t : uint32_t
    {                                    
        other =               0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        virtual_smart_card =  0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_smart_card = 0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        passport =            0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        passport_remote =     0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        passport_smart_card = 0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware =            0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        software =            0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        self_signed =         0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
