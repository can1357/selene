#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct __scrt_wide_argv_policy]
    // => Windows 10 v1607
    //
    struct scrt_wide_argv_policy_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "__scrt_wide_argv_policy.$", 0x0, false, 0x89918a0e51e4c1f2 );
        SDK_FIXED_SIZE( scrt_wide_argv_policy_t, 0x1 );
    };                            
};
SDK_VERIFY( struct win::scrt_wide_argv_policy_t, 0x1 );
