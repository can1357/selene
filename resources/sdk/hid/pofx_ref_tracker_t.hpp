#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pofx_ref_tracker_t.start.hpp"
namespace hid
{
    // [struct _HID_POFX_REF_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pofx_ref_tracker_t                                           
    {                                                                   
        union u0_ref_tag_flags_t                                        
        {                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
            //                                                          
            _m00 int32_t aslong;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Aslong
            _m01 int1_t  fdo_state_machine;                               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FdoStateMachine
            _m02 int1_t  power_policy_engine;                             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PowerPolicyEngine
            _m03 int1_t  reset_idle_timer;                                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ResetIdleTimer
            _m04 int1_t  io;                                              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Io
            _m05 int1_t  client_request;                                  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ClientRequest
                                                                        
            SDK_MAGIC_PROPERTIES( "_HID_POFX_REF_TRACKER.RefTagFlags.$", 0x4, true, 0x60b65bc33df36997 );                                               
            SDK_FIXED_SIZE( u0_ref_tag_flags_t, 0x4 );                                               
        };                                                              
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m06 u0_ref_tag_flags_t              ref_tag_flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefTagFlags
        _m07 int32_t                         reset_idle_timer_ref_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ResetIdleTimerRefCount
        _m08 int32_t                         io_ref_count;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoRefCount
        _m09 int32_t                         client_request_count;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ClientRequestCount
                                                                        
        SDK_MAGIC_PROPERTIES( "_HID_POFX_REF_TRACKER.$", 0x10, true, 0x99bb1723d6202c8c );                           
        SDK_FIXED_SIZE( pofx_ref_tracker_t, 0x10 );                           
    };                                                                  
};
#include "magic/pofx_ref_tracker_t.end.hpp"
SDK_VERIFY( union hid::pofx_ref_tracker_t::u0_ref_tag_flags_t, 0x4 );
SDK_VERIFY( struct hid::pofx_ref_tracker_t, 0x10 );
