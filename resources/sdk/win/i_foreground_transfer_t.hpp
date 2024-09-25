#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IForegroundTransfer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_foreground_transfer_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IForegroundTransfer.$", 0x8, true, 0xb384bb39e2f4e1e8 );
        SDK_FIXED_SIZE( i_foreground_transfer_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_foreground_transfer_t, 0x8 );
