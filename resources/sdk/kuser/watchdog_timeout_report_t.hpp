#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "wd_livereport_flags_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/watchdog_timeout_report_t.start.hpp"
namespace kuser
{
    class watchdog_timeout_report_t;

    // [class WatchdogTimeoutReport]
    // => Windows 11
    //
    class watchdog_timeout_report_t                                         
    {                                                                       
        using m_callback_t = sdk::function<void(class kuser::watchdog_timeout_report_t*)>*;                            
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m00 volatile bool                      m_b_is_active;                //{ +0x0000    } | .m_bIsActive
        _m01 struct nt::ktimer_t                m_timeout_timer;              //{ +0x0008    } | .m_TimeoutTimer
        _m02 struct nt::kdpc_t                  m_timeout_dpc;                //{ +0x0048    } | .m_TimeoutDpc
        _m03 struct nt::work_queue_item_t       m_live_dump_work_item;        //{ +0x0088    } | .m_LiveDumpWorkItem
        _m04 struct nt::kevent_t                m_live_dump_work_item_event;  //{ +0x00a8    } | .m_LiveDumpWorkItemEvent
        _m05 uint32_t                           m_code;                       //{ +0x00c0    } | .m_Code
        _m06 uint64_t                           m_p_arg1;                     //{ +0x00c8    } | .m_pArg1
        _m07 uint64_t                           m_p_arg2;                     //{ +0x00d0    } | .m_pArg2
        _m08 uint64_t                           m_p_arg3;                     //{ +0x00d8    } | .m_pArg3
        _m09 uint64_t                           m_p_arg4;                     //{ +0x00e0    } | .m_pArg4
        _m10 union kuser::wd_livereport_flags_t m_flags;                      //{ +0x00e8    } | .m_Flags
        _m11 m_callback_t                       m_callback;                   //{ +0x00f0    } | .m_Callback
                                                                            
        SDK_MAGIC_PROPERTIES( "WatchdogTimeoutReport.$", 0x0, false, 0x680a695e6a323587 );                            
        SDK_FIXED_SIZE( watchdog_timeout_report_t, 0xf8 );                            
    };                                                                      
};
#include "magic/watchdog_timeout_report_t.end.hpp"
SDK_VERIFY( class kuser::watchdog_timeout_report_t, 0xf8 );
