#pragma once
#include <sdkgen/support_library.hpp>
#include "vm_counters_ex_t.hpp"

#include "magic/vm_counters_ex2_t.start.hpp"
namespace win
{
    // [struct _VM_COUNTERS_EX2]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vm_counters_ex2_t                                       
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                         
        _m00 struct win::vm_counters_ex_t counters_ex;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CountersEx
        _m01 uint64_t                     private_working_set_size;  //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .PrivateWorkingSetSize
        _m02 uint64_t                     shared_commit_usage;       //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .SharedCommitUsage
                                                                   
        SDK_NONVOL_PROPERTIES( "_VM_COUNTERS_EX2.$", 0x70, true, 0x1c276749bdae28e2 );                         
        SDK_FIXED_SIZE( vm_counters_ex2_t, 0x70 );                         
    };                                                             
};
#include "magic/vm_counters_ex2_t.end.hpp"
SDK_VERIFY( struct win::vm_counters_ex2_t, 0x70 );
