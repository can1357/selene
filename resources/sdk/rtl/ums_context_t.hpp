#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

#include "magic/ums_context_t.start.hpp"
namespace rtl
{
    struct ums_context_t;

    // [struct _RTL_UMS_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_context_t                                                
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m00 struct nt::single_list_entry_t link;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 nt::context                    context;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
        _m02 void*                          teb;                          //{ +0x04e0    +0x04e0    +0x04e0    +0x04e0    } | .Teb
        _m03 void*                          user_context;                 //{ +0x04e8    +0x04e8    +0x04e8    +0x04e8    } | .UserContext
        _m04 volatile uint1_t               scheduled_thread;             //{ +0x04f0@0  +0x04f0@0  +0x04f0@0  +0x04f0@0  } | .ScheduledThread
        _m05 volatile uint1_t               suspended;                    //{ +0x04f0@1  +0x04f0@1  +0x04f0@1  +0x04f0@1  } | .Suspended
        _m06 volatile uint1_t               volatile_context;             //{ +0x04f0@2  +0x04f0@2  +0x04f0@2  +0x04f0@2  } | .VolatileContext
        _m07 volatile uint1_t               terminated;                   //{ +0x04f0@3  +0x04f0@3  +0x04f0@3  +0x04f0@3  } | .Terminated
        _m08 volatile uint1_t               debug_active;                 //{ +0x04f0@4  +0x04f0@4  +0x04f0@4  +0x04f0@4  } | .DebugActive
        _m09 volatile uint1_t               running_on_self_thread;       //{ +0x04f0@5  +0x04f0@5  +0x04f0@5  +0x04f0@5  } | .RunningOnSelfThread
        _m10 volatile uint1_t               deny_running_on_self_thread;  //{ +0x04f0@6  +0x04f0@6  +0x04f0@6  +0x04f0@6  } | .DenyRunningOnSelfThread
        _m11 volatile int32_t               flags;                        //{ +0x04f0    +0x04f0    +0x04f0    +0x04f0    } | .Flags
        _m12 volatile uint2_t               kernel_update_lock;           //{ +0x04f8@0  +0x04f8@0  +0x04f8@0  +0x04f8@0  } | .KernelUpdateLock
        _m13 volatile uint62_t              primary_client_id;            //{ +0x04f8@2  +0x04f8@2  +0x04f8@2  +0x04f8@2  } | .PrimaryClientID
        _m14 volatile uint64_t              context_lock;                 //{ +0x04f8    +0x04f8    +0x04f8    +0x04f8    } | .ContextLock
        _m15 struct rtl::ums_context_t*     primary_ums_context;          //{ +0x0500    +0x0500    +0x0500    +0x0500    } | .PrimaryUmsContext
        _m16 uint32_t                       switch_count;                 //{ +0x0508    +0x0508    +0x0508    +0x0508    } | .SwitchCount
        _m17 uint32_t                       kernel_yield_count;           //{ +0x050c    +0x050c    +0x050c    +0x050c    } | .KernelYieldCount
        _m18 uint32_t                       mixed_yield_count;            //{ +0x0510    +0x0510    +0x0510    +0x0510    } | .MixedYieldCount
        _m19 uint32_t                       yield_count;                  //{ +0x0514    +0x0514    +0x0514    +0x0514    } | .YieldCount
                                                                        
        SDK_MAGIC_PROPERTIES( "_RTL_UMS_CONTEXT.$", 0x520, true, 0x797cf4da8dfde99f );                            
        SDK_FIXED_SIZE( ums_context_t, 0x520 );                            
    };                                                                  
};
#include "magic/ums_context_t.end.hpp"
SDK_VERIFY( struct rtl::ums_context_t, 0x520 );
