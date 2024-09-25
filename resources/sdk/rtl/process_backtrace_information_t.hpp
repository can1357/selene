#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_backtrace_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_BACKTRACE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_backtrace_information_t             
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                             
        _m00 char*                 symbolic_back_trace;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SymbolicBackTrace
        _m01 uint32_t              trace_count;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceCount
        _m02 uint16_t              index;                //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Index
        _m03 uint16_t              depth;                //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .Depth
        _m04 sdk::array<void*, 32> back_trace;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BackTrace
                                                       
        SDK_NONVOL_PROPERTIES( "_RTL_PROCESS_BACKTRACE_INFORMATION.$", 0x110, true, 0x34d62f62b1343e9e );                    
        SDK_FIXED_SIZE( process_backtrace_information_t, 0x110 );                    
    };                                                 
};
#include "magic/process_backtrace_information_t.end.hpp"
SDK_VERIFY( struct rtl::process_backtrace_information_t, 0x110 );
