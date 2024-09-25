#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetSecurityManager]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_security_manager_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IInternetSecurityManager.$", 0x8, true, 0x4c85a64c8fc61543 );
        SDK_FIXED_SIZE( i_internet_security_manager_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_internet_security_manager_t, 0x8 );
