#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/w32threadnonpaged_t.start.hpp"
namespace kuser
{
    struct w32thread_t;

    // [struct _W32THREADNONPAGED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct w32threadnonpaged_t                                      
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                          
        _m00 struct kuser::w32thread_t* p_w32_thread;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pW32Thread
        _m01 int64_t                    ll_qpc_user_crit_acquire;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .llQPCUserCritAcquire
        _m02 uint64_t                   ull_user_crit_acquire_token;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullUserCritAcquireToken
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                          
        _m03 volatile int32_t           c_input_perf_regions;         //{ +0x0018    +0x0018    +0x0018    } | .cInputPerfRegions
        _m04 struct nt::guid_t          input_activity_guid;          //{ +0x001c    +0x001c    +0x001c    } | .InputActivityGuid
        _m05 int32_t                    b_traced_crit_acquire;        //{ +0x002c    +0x002c    +0x002c    } | .bTracedCritAcquire
        _m06 int32_t                    b_always_trace_user_crit;     //{ +0x0030    +0x0030    +0x0030    } | .bAlwaysTraceUserCrit
                                                                    
        SDK_MAGIC_PROPERTIES( "_W32THREADNONPAGED.$", 0x38, true, 0x27a505d6ccaffceb );                            
        SDK_DYNAMIC_SIZE( w32threadnonpaged_t );                            
    };                                                              
};
#include "magic/w32threadnonpaged_t.end.hpp"
