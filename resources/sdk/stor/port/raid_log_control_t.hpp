#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_log_control_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_LOG_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_log_control_t                             
    {                                                     
        union u0_enable_t                                 
        {                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                            
            _m01 uint1_t  call_miniport_build_io;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CallMiniportBuildIo
            _m02 uint1_t  call_miniport_start_io;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .CallMiniportStartIo
            _m03 uint1_t  miniport_completion;              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .MiniportCompletion
            _m04 uint1_t  request_complete;                 //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RequestComplete
            _m05 uint1_t  submit_request;                   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .SubmitRequest
            _m06 uint1_t  bad_practices;                    //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .BadPractices
            _m07 uint1_t  pnp_main;                         //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PnpMain
            _m08 uint1_t  power_main;                       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PowerMain
            _m09 uint1_t  pause_resume_busy;                //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PauseResumeBusy
            _m10 uint1_t  reset_timeout;                    //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .ResetTimeout
            _m11 uint1_t  failure;                          //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Failure
            _m12 uint64_t as_ulong64;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .asUlong64
                                                          
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                            
            _m13 uint1_t  smr_io;                           //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .SmrIo
                                                          
            SDK_MAGIC_PROPERTIES( "_RAID_LOG_CONTROL.Enable.$", 0x8, true, 0xedf26b217a1896d );                                
            SDK_FIXED_SIZE( u0_enable_t, 0x8 );                                
        };                                                
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                
        _m00 uint32_t                            revision;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m14 u0_enable_t                         enable;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Enable
                                                          
        SDK_MAGIC_PROPERTIES( "_RAID_LOG_CONTROL.$", 0x10, true, 0x762a2e9f50e58bc6 );         
        SDK_FIXED_SIZE( raid_log_control_t, 0x10 );         
    };                                                    
};
#include "magic/raid_log_control_t.end.hpp"
SDK_VERIFY( union stor::port::raid_log_control_t::u0_enable_t, 0x8 );
SDK_VERIFY( struct stor::port::raid_log_control_t, 0x10 );
