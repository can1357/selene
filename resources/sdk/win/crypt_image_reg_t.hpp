#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_image_reg_t.start.hpp"
namespace win
{
    struct crypt_interface_reg_t;

    // [struct _CRYPT_IMAGE_REG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_image_reg_t                                    
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                      
        _m00 wchar_t*                            psz_image;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszImage
        _m01 uint32_t                            c_interfaces;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cInterfaces
        _m02 struct win::crypt_interface_reg_t** rgp_interfaces;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgpInterfaces
                                                                
        SDK_MAGIC_PROPERTIES( "_CRYPT_IMAGE_REG.$", 0x18, true, 0x91b2031618cb48a6 );               
        SDK_FIXED_SIZE( crypt_image_reg_t, 0x18 );               
    };                                                          
};
#include "magic/crypt_image_reg_t.end.hpp"
SDK_VERIFY( struct win::crypt_image_reg_t, 0x18 );
