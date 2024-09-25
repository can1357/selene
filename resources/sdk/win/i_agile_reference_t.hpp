#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAgileReference]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_agile_reference_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IAgileReference.$", 0x8, true, 0x37f93e9c5064e5a0 );
        SDK_FIXED_SIZE( i_agile_reference_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_agile_reference_t, 0x8 );
