#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [struct _PS_SYSCALL_PROVIDER]
    // => Windows 11
    //
    struct syscall_provider_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_PS_SYSCALL_PROVIDER.$", 0x0, false, 0x6274060a2801ddf7 );
        SDK_FIXED_SIZE( syscall_provider_t, 0x0 );
    };                       
};
SDK_VERIFY( struct ps::syscall_provider_t, 0x0 );
