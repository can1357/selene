#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct __scrt_narrow_environment_policy]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scrt_narrow_environment_policy_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "__scrt_narrow_environment_policy.$", 0x1, true, 0xc4eaa214ed43eaf4 );
        SDK_FIXED_SIZE( scrt_narrow_environment_policy_t, 0x1 );
    };                                     
};
SDK_VERIFY( struct win::scrt_narrow_environment_policy_t, 0x1 );
