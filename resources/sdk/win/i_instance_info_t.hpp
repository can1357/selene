#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInstanceInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_instance_info_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IInstanceInfo.$", 0x8, true, 0xb6dedc00bb2ea836 );
        SDK_FIXED_SIZE( i_instance_info_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_instance_info_t, 0x8 );
