#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRunnableObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_runnable_object_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IRunnableObject.$", 0x8, true, 0xdf0ed4d9b6922ba8 );
        SDK_FIXED_SIZE( i_runnable_object_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_runnable_object_t, 0x8 );
