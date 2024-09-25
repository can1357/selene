#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CExeServerRegistration]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_exe_server_registration_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "CExeServerRegistration.$", 0x78, true, 0x9c4665e1a651a58f );
        SDK_FIXED_SIZE( c_exe_server_registration_t, 0x78 );
    };                               
};
SDK_VERIFY( class win::c_exe_server_registration_t, 0x78 );
