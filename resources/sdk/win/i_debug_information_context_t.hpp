#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDebugInformationContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_debug_information_context_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IDebugInformationContext.$", 0x8, true, 0x4234b20637458c46 );
        SDK_FIXED_SIZE( i_debug_information_context_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_debug_information_context_t, 0x8 );
