#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IThunkManager]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_thunk_manager_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IThunkManager.$", 0x8, true, 0x7d35e354d621369 );
        SDK_FIXED_SIZE( i_thunk_manager_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_thunk_manager_t, 0x8 );
