#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_physical_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_PHYSICAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_physical_t  
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 int64_t  address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 void*    buffer;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t request;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Request
                              
        SDK_MAGIC_PROPERTIES( "_SYSDBG_PHYSICAL.$", 0x18, true, 0xdb15c3d8b007da01 );        
        SDK_FIXED_SIZE( sysdbg_physical_t, 0x18 );        
    };                        
};
#include "magic/sysdbg_physical_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_physical_t, 0x18 );
