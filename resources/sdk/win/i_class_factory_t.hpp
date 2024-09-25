#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClassFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_class_factory_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IClassFactory.$", 0x8, true, 0x9e5b32421dfface2 );
        SDK_FIXED_SIZE( i_class_factory_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_class_factory_t, 0x8 );
