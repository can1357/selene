#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinrtAsyncPatternFacade]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_winrt_async_pattern_facade_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "IWinrtAsyncPatternFacade.$", 0x8, true, 0x48f4854e8b7669fb );
        SDK_FIXED_SIZE( i_winrt_async_pattern_facade_t, 0x8 );
    };                                   
};
SDK_VERIFY( struct win::i_winrt_async_pattern_facade_t, 0x8 );
