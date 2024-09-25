#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CStaticMarshaler]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_static_marshaler_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "CStaticMarshaler.$", 0x10, true, 0xc743be2d15ac319a );
        SDK_FIXED_SIZE( c_static_marshaler_t, 0x10 );
    };                        
};
SDK_VERIFY( class win::c_static_marshaler_t, 0x10 );
