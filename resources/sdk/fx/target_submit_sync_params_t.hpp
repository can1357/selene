#pragma once
#include <sdkgen/support_library.hpp>
#include "cr_event_t.hpp"

namespace wdf { struct request_completion_params_t; }
namespace wdf { struct wdfiotarget_t;               }
namespace wdf { struct wdfrequest_t;                }

#include "magic/target_submit_sync_params_t.start.hpp"
namespace fx
{
    // [struct FxTargetSubmitSyncParams]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct target_submit_sync_params_t                                            
    {                                                                             
        using pfn_wdf_request_completion_routine_t = sdk::function<void(struct wdf::wdfrequest_t*, struct wdf::wdfiotarget_t*, struct wdf::request_completion_params_t*, void*)>*;                               
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                        
        _m00 struct fx::cr_event_t                 synch_event;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SynchEvent
        _m01 int32_t                               status;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Status
        _m02 pfn_wdf_request_completion_routine_t  orig_target_completion_routine;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OrigTargetCompletionRoutine
        _m03 void*                                 orig_target_completion_context;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OrigTargetCompletionContext
                                                                                  
        SDK_MAGIC_PROPERTIES( "FxTargetSubmitSyncParams.$", 0x38, true, 0x206d7af54836c63d );                               
        SDK_FIXED_SIZE( target_submit_sync_params_t, 0x38 );                               
    };                                                                            
};
#include "magic/target_submit_sync_params_t.end.hpp"
SDK_VERIFY( struct fx::target_submit_sync_params_t, 0x38 );
