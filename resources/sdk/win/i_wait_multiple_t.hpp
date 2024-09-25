#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWaitMultiple]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_wait_multiple_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IWaitMultiple.$", 0x8, true, 0xe20e95aeac8b57a7 );
        SDK_FIXED_SIZE( i_wait_multiple_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_wait_multiple_t, 0x8 );
