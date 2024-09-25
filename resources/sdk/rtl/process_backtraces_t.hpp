#pragma once
#include <sdkgen/support_library.hpp>
#include "process_backtrace_information_t.hpp"

#include "magic/process_backtraces_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_BACKTRACES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_backtraces_t                          
    {                                                    
        using back_traces_t = sdk::array<struct rtl::process_backtrace_information_t, 1>;                             
                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                               
        _m00 varuint_t      committed_memory;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CommittedMemory
        _m01 varuint_t      reserved_memory;               //{ +0x0004    +0x0008    +0x0008    +0x0008    +0x0008    } | .ReservedMemory
        _m02 uint32_t       number_of_back_trace_lookups;  //{ +0x0008    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfBackTraceLookups
        _m03 uint32_t       number_of_back_traces;         //{ +0x000c    +0x0014    +0x0014    +0x0014    +0x0014    } | .NumberOfBackTraces
        _m04 back_traces_t  back_traces;                   //{ +0x0010    +0x0018    +0x0018    +0x0018    +0x0018    } | .BackTraces
                                                         
        SDK_MAGIC_PROPERTIES( "_RTL_PROCESS_BACKTRACES.$", 0x128, true, 0xd3a714a0cf3cb795 );                             
        SDK_DYNAMIC_SIZE( process_backtraces_t );                             
    };                                                   
};
#include "magic/process_backtraces_t.end.hpp"
