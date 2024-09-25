#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../nt/fast_mutex_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/fltp_irpctrl_stack_profiler_t.start.hpp"
namespace fltmgr
{
    struct fltp_frame_t;

    // [struct _FLTP_IRPCTRL_STACK_PROFILER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fltp_irpctrl_stack_profiler_t                  
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 struct fltmgr::fltp_frame_t* frame;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Frame
        _m01 sdk::array<uint32_t, 10>     profile;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Profile
        _m02 struct nt::ktimer_t          timer;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Timer
        _m03 struct nt::kdpc_t            dpc;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Dpc
        _m04 struct nt::work_queue_item_t work_item;        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .WorkItem
        _m05 struct nt::fast_mutex_t      mutex;            //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .Mutex
        _m06 uint32_t                     work_item_flags;  //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .WorkItemFlags
        _m07 uint32_t                     flags;            //{ +0x010c    +0x010c    +0x010c    +0x010c    } | .Flags
        _m08 uint32_t                     alloc_count;      //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .AllocCount
                                                          
        SDK_MAGIC_PROPERTIES( "_FLTP_IRPCTRL_STACK_PROFILER.$", 0x118, true, 0x5a816a949e0e4bab );                
        SDK_FIXED_SIZE( fltp_irpctrl_stack_profiler_t, 0x118 );                
    };                                                    
};
#include "magic/fltp_irpctrl_stack_profiler_t.end.hpp"
SDK_VERIFY( struct fltmgr::fltp_irpctrl_stack_profiler_t, 0x118 );
