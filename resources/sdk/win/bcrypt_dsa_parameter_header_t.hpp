#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_dsa_parameter_header_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_DSA_PARAMETER_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_dsa_parameter_header_t           
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint32_t                cb_length;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbLength
        _m01 uint32_t                dw_magic;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMagic
        _m02 uint32_t                cb_key_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbKeyLength
        _m03 sdk::array<uint8_t, 4>  count;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Count
        _m04 sdk::array<uint8_t, 20> seed;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Seed
        _m05 sdk::array<uint8_t, 20> q;              //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .q
                                                   
        SDK_MAGIC_PROPERTIES( "_BCRYPT_DSA_PARAMETER_HEADER.$", 0x38, true, 0x8326556aeb14d5d );              
        SDK_FIXED_SIZE( bcrypt_dsa_parameter_header_t, 0x38 );              
    };                                             
};
#include "magic/bcrypt_dsa_parameter_header_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_dsa_parameter_header_t, 0x38 );
