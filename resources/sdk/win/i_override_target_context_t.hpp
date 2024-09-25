#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOverrideTargetContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_override_target_context_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IOverrideTargetContext.$", 0x8, true, 0x901f4e60e3f95048 );
        SDK_FIXED_SIZE( i_override_target_context_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_override_target_context_t, 0x8 );
