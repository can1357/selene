#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_fortezza_data_prop_t.start.hpp"
namespace win
{
    // [struct _CERT_FORTEZZA_DATA_PROP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_fortezza_data_prop_t               
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 sdk::array<uint8_t, 8>  serial_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SerialNumber
        _m01 int32_t                 cert_index;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CertIndex
        _m02 sdk::array<uint8_t, 36> cert_label;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CertLabel
                                                   
        SDK_MAGIC_PROPERTIES( "_CERT_FORTEZZA_DATA_PROP.$", 0x30, true, 0xe1c3ea074ea7fd73 );              
        SDK_FIXED_SIZE( cert_fortezza_data_prop_t, 0x30 );              
    };                                             
};
#include "magic/cert_fortezza_data_prop_t.end.hpp"
SDK_VERIFY( struct win::cert_fortezza_data_prop_t, 0x30 );
