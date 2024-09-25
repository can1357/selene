#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetSecurityManagerEx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_security_manager_ex_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IInternetSecurityManagerEx.$", 0x8, true, 0x705d2f9c180fdaf0 );
        SDK_FIXED_SIZE( i_internet_security_manager_ex_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_internet_security_manager_ex_t, 0x8 );
