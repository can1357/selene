#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGenericAsyncActionWithProgress]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_generic_async_action_with_progress_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "IGenericAsyncActionWithProgress.$", 0x8, true, 0x8e2eb4042a0db16d );
        SDK_FIXED_SIZE( i_generic_async_action_with_progress_t, 0x8 );
    };                                           
};
SDK_VERIFY( struct win::i_generic_async_action_with_progress_t, 0x8 );
