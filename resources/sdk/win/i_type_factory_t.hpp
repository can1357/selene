#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_factory_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "ITypeFactory.$", 0x8, true, 0xb82ee4f4f7c87436 );
        SDK_FIXED_SIZE( i_type_factory_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_type_factory_t, 0x8 );
