#pragma once
#include <sdkgen/support_library.hpp>
#include "callback_priority_t.hpp"

namespace nt { struct activation_context_t; }

#include "magic/callback_environ_v3_t.start.hpp"
namespace tp
{
    struct pool_t;
    struct cleanup_group_t;
    struct callback_instance_t;

    // [struct _TP_CALLBACK_ENVIRON_V3]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct callback_environ_v3_t                                              
    {                                                                         
        using ptp_simple_callback_t = sdk::function<void(struct tp::callback_instance_t*, void*)>*;                              
                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                    
        _m00 uint32_t                           version;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct tp::pool_t*                 pool;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Pool
        _m02 struct tp::cleanup_group_t*        cleanup_group;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CleanupGroup
        _m03 sdk::function<void(void*, void*)>* cleanup_group_cancel_callback;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CleanupGroupCancelCallback
        _m04 void*                              race_dll;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .RaceDll
        _m05 struct nt::activation_context_t*   activation_context;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ActivationContext
        _m06 ptp_simple_callback_t              finalization_callback;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FinalizationCallback
        _m07 uint32_t                           flags;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m08 uint1_t                            long_function;                  //{ +0x0038@0  +0x0038@0  +0x0038@0  +0x0038@0  +0x0038@0  } | .LongFunction
        _m09 uint1_t                            persistent;                     //{ +0x0038@1  +0x0038@1  +0x0038@1  +0x0038@1  +0x0038@1  } | .Persistent
        _m10 uint30_t                           _private;                       //{ +0x0038@2  +0x0038@2  +0x0038@2  +0x0038@2  +0x0038@2  } | .Private
        _m11 enum tp::callback_priority_t       callback_priority;              //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .CallbackPriority
        _m12 uint32_t                           size;                           //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Size
                                                                              
        SDK_NONVOL_PROPERTIES( "_TP_CALLBACK_ENVIRON_V3.$", 0x48, true, 0x35337d702636429c );                              
        SDK_FIXED_SIZE( callback_environ_v3_t, 0x48 );                              
    };                                                                        
};
#include "magic/callback_environ_v3_t.end.hpp"
SDK_VERIFY( struct tp::callback_environ_v3_t, 0x48 );
