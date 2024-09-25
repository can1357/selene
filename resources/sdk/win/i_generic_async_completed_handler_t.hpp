#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGenericAsyncCompletedHandler]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_generic_async_completed_handler_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "IGenericAsyncCompletedHandler.$", 0x8, true, 0xc2005262a7da4d21 );
        SDK_FIXED_SIZE( i_generic_async_completed_handler_t, 0x8 );
    };                                        
};
SDK_VERIFY( struct win::i_generic_async_completed_handler_t, 0x8 );
