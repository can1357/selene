#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [struct _ETW_PERFECT_HASH_FUNCTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfect_hash_function_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "_ETW_PERFECT_HASH_FUNCTION.$", 0x0, true, 0x53e69802e32dfb83 );
        SDK_FIXED_SIZE( perfect_hash_function_t, 0x0 );
    };                            
};
SDK_VERIFY( struct etw::perfect_hash_function_t, 0x0 );
