#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_msr_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_MSR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_msr_t    
    {                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t msr;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Msr
        _m01 uint64_t data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                           
        SDK_MAGIC_PROPERTIES( "_SYSDBG_MSR.$", 0x10, true, 0xf2ad41d191599111 );     
        SDK_FIXED_SIZE( sysdbg_msr_t, 0x10 );     
    };                     
};
#include "magic/sysdbg_msr_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_msr_t, 0x10 );
