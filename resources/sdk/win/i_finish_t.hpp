#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class IFinish]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_finish_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "IFinish.$", 0x8, true, 0xee575cbbf7dfbfe2 );
        SDK_FIXED_SIZE( i_finish_t, 0x8 );
    };              
};
SDK_VERIFY( class win::i_finish_t, 0x8 );
