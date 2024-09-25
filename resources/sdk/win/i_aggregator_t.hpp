#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAggregator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_aggregator_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IAggregator.$", 0x8, true, 0xac992eae97bf7089 );
        SDK_FIXED_SIZE( i_aggregator_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_aggregator_t, 0x8 );
