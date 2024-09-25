#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_ecc_curve_names_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_ECC_CURVE_NAMES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_ecc_curve_names_t       
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                
        _m00 uint32_t  dw_ecc_curve_names;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwEccCurveNames
        _m01 wchar_t** p_ecc_curve_names;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pEccCurveNames
                                          
        SDK_MAGIC_PROPERTIES( "_BCRYPT_ECC_CURVE_NAMES.$", 0x10, true, 0x6d22614a6f519bba );                   
        SDK_FIXED_SIZE( bcrypt_ecc_curve_names_t, 0x10 );                   
    };                                    
};
#include "magic/bcrypt_ecc_curve_names_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_ecc_curve_names_t, 0x10 );
