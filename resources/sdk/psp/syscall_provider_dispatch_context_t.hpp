#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/syscall_provider_dispatch_context_t.start.hpp"
namespace psp
{
    // [struct _PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT]
    // => Windows 11
    //
    struct syscall_provider_dispatch_context_t
    {                                         
        // Windows 11       
        //                  
        _m00 uint32_t level;                    //{ +0x0000    } | .Level
        _m01 uint32_t slot;                     //{ +0x0004    } | .Slot
                                              
        SDK_MAGIC_PROPERTIES( "_PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT.$", 0x0, false, 0xfa5047d5f0d6949a );      
        SDK_FIXED_SIZE( syscall_provider_dispatch_context_t, 0x8 );      
    };                                        
};
#include "magic/syscall_provider_dispatch_context_t.end.hpp"
SDK_VERIFY( struct psp::syscall_provider_dispatch_context_t, 0x8 );
