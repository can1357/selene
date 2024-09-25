#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUserContextProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_user_context_properties_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IUserContextProperties.$", 0x8, true, 0x24b2d533a15ef6de );
        SDK_FIXED_SIZE( i_user_context_properties_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_user_context_properties_t, 0x8 );
