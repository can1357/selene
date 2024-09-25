#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ValueUnmarshaler]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class value_unmarshaler_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "ValueUnmarshaler.$", 0x8, true, 0xade1169dc3f1e016 );
        SDK_FIXED_SIZE( value_unmarshaler_t, 0x8 );
    };                       
};
SDK_VERIFY( class win::value_unmarshaler_t, 0x8 );
