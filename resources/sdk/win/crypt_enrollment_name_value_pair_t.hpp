#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_enrollment_name_value_pair_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ENROLLMENT_NAME_VALUE_PAIR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_enrollment_name_value_pair_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 wchar_t* pwsz_name;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pwszName
        _m01 wchar_t* pwsz_value;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszValue
                                             
        SDK_MAGIC_PROPERTIES( "_CRYPT_ENROLLMENT_NAME_VALUE_PAIR.$", 0x10, true, 0x6cd20dcf0f9ecb57 );           
        SDK_FIXED_SIZE( crypt_enrollment_name_value_pair_t, 0x10 );           
    };                                       
};
#include "magic/crypt_enrollment_name_value_pair_t.end.hpp"
SDK_VERIFY( struct win::crypt_enrollment_name_value_pair_t, 0x10 );
