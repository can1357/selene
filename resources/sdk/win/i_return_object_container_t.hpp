#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IReturnObjectContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_return_object_container_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IReturnObjectContainer.$", 0x8, true, 0x8f6fe12c779ccf40 );
        SDK_FIXED_SIZE( i_return_object_container_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_return_object_container_t, 0x8 );
