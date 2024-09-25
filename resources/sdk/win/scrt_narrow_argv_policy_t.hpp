#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct __scrt_narrow_argv_policy]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scrt_narrow_argv_policy_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "__scrt_narrow_argv_policy.$", 0x1, true, 0xf0438ec17993d403 );
        SDK_FIXED_SIZE( scrt_narrow_argv_policy_t, 0x1 );
    };                              
};
SDK_VERIFY( struct win::scrt_narrow_argv_policy_t, 0x1 );
