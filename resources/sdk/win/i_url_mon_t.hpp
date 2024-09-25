#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUrlMon]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_url_mon_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IUrlMon.$", 0x8, true, 0x7d347bc311d472df );
        SDK_FIXED_SIZE( i_url_mon_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_url_mon_t, 0x8 );
