#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CProcessSecret]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_process_secret_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "CProcessSecret.$", 0x1, true, 0xb8d7bed43b8f3d9e );
        SDK_FIXED_SIZE( c_process_secret_t, 0x1 );
    };                      
};
SDK_VERIFY( class win::c_process_secret_t, 0x1 );
