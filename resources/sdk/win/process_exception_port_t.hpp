#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_exception_port_t.start.hpp"
namespace win
{
    // [struct _PROCESS_EXCEPTION_PORT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_exception_port_t         
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 void*    exception_port_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionPortHandle
        _m01 uint32_t state_flags;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StateFlags
                                            
        SDK_NONVOL_PROPERTIES( "_PROCESS_EXCEPTION_PORT.$", 0x10, true, 0x64180851041b4c2b );                      
        SDK_FIXED_SIZE( process_exception_port_t, 0x10 );                      
    };                                      
};
#include "magic/process_exception_port_t.end.hpp"
SDK_VERIFY( struct win::process_exception_port_t, 0x10 );
