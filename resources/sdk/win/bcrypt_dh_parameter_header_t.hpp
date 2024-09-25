#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_dh_parameter_header_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_DH_PARAMETER_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_dh_parameter_header_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t cb_length;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbLength
        _m01 uint32_t dw_magic;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMagic
        _m02 uint32_t cb_key_length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbKeyLength
                                       
        SDK_MAGIC_PROPERTIES( "_BCRYPT_DH_PARAMETER_HEADER.$", 0xc, true, 0xb71e1a031671427e );              
        SDK_FIXED_SIZE( bcrypt_dh_parameter_header_t, 0xc );              
    };                                 
};
#include "magic/bcrypt_dh_parameter_header_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_dh_parameter_header_t, 0xc );
