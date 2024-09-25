#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_provider_reg_t.start.hpp"
namespace win
{
    struct crypt_image_reg_t;

    // [struct _CRYPT_PROVIDER_REG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_provider_reg_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 uint32_t                       c_aliases;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cAliases
        _m01 wchar_t**                      rgpsz_aliases;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpszAliases
        _m02 struct win::crypt_image_reg_t* p_um;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pUM
        _m03 struct win::crypt_image_reg_t* p_km;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pKM
                                                          
        SDK_MAGIC_PROPERTIES( "_CRYPT_PROVIDER_REG.$", 0x20, true, 0x33e71708f52e2f62 );              
        SDK_FIXED_SIZE( crypt_provider_reg_t, 0x20 );              
    };                                                    
};
#include "magic/crypt_provider_reg_t.end.hpp"
SDK_VERIFY( struct win::crypt_provider_reg_t, 0x20 );
