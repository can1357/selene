#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CAuthInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_auth_info_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "CAuthInfo.$", 0x1, true, 0xd517fd9e1b300b9c );
        SDK_FIXED_SIZE( c_auth_info_t, 0x1 );
    };                 
};
SDK_VERIFY( class win::c_auth_info_t, 0x1 );
