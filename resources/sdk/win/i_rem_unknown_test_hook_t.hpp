#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRemUnknownTestHook]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rem_unknown_test_hook_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IRemUnknownTestHook.$", 0x8, true, 0xc949db5dccd03c22 );
        SDK_FIXED_SIZE( i_rem_unknown_test_hook_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_rem_unknown_test_hook_t, 0x8 );
