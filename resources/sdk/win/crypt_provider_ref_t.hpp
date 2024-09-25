#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_provider_ref_t.start.hpp"
namespace win
{
    struct crypt_image_ref_t;
    struct crypt_property_ref_t;

    // [struct _CRYPT_PROVIDER_REF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_provider_ref_t                                
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                     
        _m00 uint32_t                           dw_interface;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwInterface
        _m01 wchar_t*                           psz_function;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszFunction
        _m02 wchar_t*                           psz_provider;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pszProvider
        _m03 uint32_t                           c_properties;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cProperties
        _m04 struct win::crypt_property_ref_t** rgp_properties;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .rgpProperties
        _m05 struct win::crypt_image_ref_t*     p_um;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pUM
        _m06 struct win::crypt_image_ref_t*     p_km;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pKM
                                                               
        SDK_MAGIC_PROPERTIES( "_CRYPT_PROVIDER_REF.$", 0x38, true, 0x63487bf194f6ae23 );               
        SDK_FIXED_SIZE( crypt_provider_ref_t, 0x38 );               
    };                                                         
};
#include "magic/crypt_provider_ref_t.end.hpp"
SDK_VERIFY( struct win::crypt_provider_ref_t, 0x38 );
