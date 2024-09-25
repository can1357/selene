#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32k_syscall_filter_t.start.hpp"
namespace win
{
    // [struct _WIN32K_SYSCALL_FILTER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32k_syscall_filter_t 
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t filter_state;  //{ +0x0000    +0x0000    +0x0000    } | .FilterState
        _m01 uint32_t filter_set;    //{ +0x0004    +0x0004    +0x0004    } | .FilterSet
                                   
        SDK_MAGIC_PROPERTIES( "_WIN32K_SYSCALL_FILTER.$", 0x8, true, 0x4f0f2e9da2b4b3ef );             
        SDK_FIXED_SIZE( win32k_syscall_filter_t, 0x8 );             
    };                             
};
#include "magic/win32k_syscall_filter_t.end.hpp"
SDK_VERIFY( struct win::win32k_syscall_filter_t, 0x8 );
