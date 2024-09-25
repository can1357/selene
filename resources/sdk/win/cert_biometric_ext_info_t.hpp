#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_biometric_ext_info_t.start.hpp"
namespace win
{
    struct cert_biometric_data_t;

    // [struct _CERT_BIOMETRIC_EXT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_biometric_ext_info_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 uint32_t                           c_biometric_data;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cBiometricData
        _m01 struct win::cert_biometric_data_t* rg_biometric_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgBiometricData
                                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_BIOMETRIC_EXT_INFO.$", 0x10, true, 0xcb0a948d7cbb008e );                  
        SDK_FIXED_SIZE( cert_biometric_ext_info_t, 0x10 );                  
    };                                                            
};
#include "magic/cert_biometric_ext_info_t.end.hpp"
SDK_VERIFY( struct win::cert_biometric_ext_info_t, 0x10 );
