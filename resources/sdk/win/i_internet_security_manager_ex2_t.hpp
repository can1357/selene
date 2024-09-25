#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetSecurityManagerEx2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_security_manager_ex2_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IInternetSecurityManagerEx2.$", 0x8, true, 0xbd1454243b8d25c0 );
        SDK_FIXED_SIZE( i_internet_security_manager_ex2_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_internet_security_manager_ex2_t, 0x8 );
