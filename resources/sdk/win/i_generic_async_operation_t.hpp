#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGenericAsyncOperation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_generic_async_operation_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IGenericAsyncOperation.$", 0x8, true, 0x905555f50cbae995 );
        SDK_FIXED_SIZE( i_generic_async_operation_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_generic_async_operation_t, 0x8 );
