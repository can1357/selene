#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ROPARAMIIDHANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct roparamiidhandle_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "ROPARAMIIDHANDLE__.$", 0x4, true, 0xc4f70dac17dca702 );
        SDK_FIXED_SIZE( roparamiidhandle_t, 0x4 );
    };                       
};
SDK_VERIFY( struct win::roparamiidhandle_t, 0x4 );
