#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGenericAsyncOperationWithProgress]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_generic_async_operation_with_progress_t
    {                                               
                                                    
        SDK_MAGIC_PROPERTIES( "IGenericAsyncOperationWithProgress.$", 0x8, true, 0xc4f0fd91ed5c2a95 );
        SDK_FIXED_SIZE( i_generic_async_operation_with_progress_t, 0x8 );
    };                                              
};
SDK_VERIFY( struct win::i_generic_async_operation_with_progress_t, 0x8 );
