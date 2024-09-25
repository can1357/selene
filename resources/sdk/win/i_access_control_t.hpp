#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAccessControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_access_control_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IAccessControl.$", 0x8, true, 0x420c500486f88d9f );
        SDK_FIXED_SIZE( i_access_control_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_access_control_t, 0x8 );
