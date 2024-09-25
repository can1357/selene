#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_control_space_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_CONTROL_SPACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_control_space_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 void*    buffer;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t request;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Request
        _m03 uint32_t processor;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Processor
                                 
        SDK_MAGIC_PROPERTIES( "_SYSDBG_CONTROL_SPACE.$", 0x18, true, 0x526c3eb1e581b15c );          
        SDK_FIXED_SIZE( sysdbg_control_space_t, 0x18 );          
    };                           
};
#include "magic/sysdbg_control_space_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_control_space_t, 0x18 );
