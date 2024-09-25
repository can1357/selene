#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CAddrControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_addr_control_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "CAddrControl.$", 0x10, true, 0x73f5c57a8c9bdc8f );
        SDK_FIXED_SIZE( c_addr_control_t, 0x10 );
    };                    
};
SDK_VERIFY( class win::c_addr_control_t, 0x10 );
