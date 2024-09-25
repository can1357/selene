#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CStaticWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_static_wrapper_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "CStaticWrapper.$", 0x8, true, 0xac32ecc8020ddd13 );
        SDK_FIXED_SIZE( c_static_wrapper_t, 0x8 );
    };                      
};
SDK_VERIFY( class win::c_static_wrapper_t, 0x8 );
