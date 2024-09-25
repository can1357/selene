#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_rc2_cbc_parameters_t.start.hpp"
namespace win
{
    // [struct _CRYPT_RC2_CBC_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_rc2_cbc_parameters_t          
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 uint32_t               dw_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 int32_t                f_iv;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fIV
        _m02 sdk::array<uint8_t, 8> rgb_iv;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgbIV
                                               
        SDK_MAGIC_PROPERTIES( "_CRYPT_RC2_CBC_PARAMETERS.$", 0x10, true, 0x2d71d42d66fef4be );           
        SDK_FIXED_SIZE( crypt_rc2_cbc_parameters_t, 0x10 );           
    };                                         
};
#include "magic/crypt_rc2_cbc_parameters_t.end.hpp"
SDK_VERIFY( struct win::crypt_rc2_cbc_parameters_t, 0x10 );
