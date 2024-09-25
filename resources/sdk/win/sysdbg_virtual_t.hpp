#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_virtual_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_VIRTUAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_virtual_t   
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 void*    address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 void*    buffer;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t request;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Request
                              
        SDK_MAGIC_PROPERTIES( "_SYSDBG_VIRTUAL.$", 0x18, true, 0x6a0041276adc6faf );        
        SDK_FIXED_SIZE( sysdbg_virtual_t, 0x18 );        
    };                        
};
#include "magic/sysdbg_virtual_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_virtual_t, 0x18 );
