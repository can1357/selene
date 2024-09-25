#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class _bstr_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class bstr_t
    {           
                
        SDK_MAGIC_PROPERTIES( "_bstr_t.$", 0x8, true, 0x425d37cf6b1274e4 );
        SDK_FIXED_SIZE( bstr_t, 0x8 );
    };          
};
SDK_VERIFY( class win::bstr_t, 0x8 );
