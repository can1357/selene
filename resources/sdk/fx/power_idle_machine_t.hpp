#pragma once
#include <sdkgen/support_library.hpp>
#include "cr_event_t.hpp"
#include "../mx/lock_t.hpp"
#include "../mx/timer_t.hpp"
#include "power_idle_events_t.hpp"
#include "power_idle_states_t.hpp"

#include "magic/power_idle_machine_t.start.hpp"
namespace fx
{
    class tag_tracker_t;

    // [class FxPowerIdleMachine]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class power_idle_machine_t                                                   
    {                                                                            
        struct u0_m_flags_by_name_t                                              
        {                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                   
            _m07 uint1_t timer_enabled;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TimerEnabled
            _m08 uint1_t in_dx;                                                    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .InDx
            _m09 uint1_t timer_canceled;                                           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TimerCanceled
            _m10 uint1_t timer_started;                                            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .TimerStarted
            _m11 uint1_t timer_power_failed;                                       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .TimerPowerFailed
            _m12 uint1_t is_started;                                               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IsStarted
            _m13 uint1_t io_present_sent;                                          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .IoPresentSent
            _m14 uint1_t send_pnp_power_up_event;                                  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .SendPnpPowerUpEvent
                                                                                 
            SDK_MAGIC_PROPERTIES( "FxPowerIdleMachine.m_FlagsByName.$", 0x1, true, 0xe2cc52d971b60f43 );                                                
            SDK_FIXED_SIZE( u0_m_flags_by_name_t, 0x1 );                                                
        };                                                                       
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m00 int64_t                                     m_power_timeout;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_PowerTimeout
        _m01 class mx::lock_t                            m_lock;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Lock
        _m02 uint32_t                                    m_io_count;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_IoCount
        _m03 class fx::tag_tracker_t*                    m_tag_tracker;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_TagTracker
        _m04 class mx::timer_t                           m_power_timeout_timer;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_PowerTimeoutTimer
        _m05 struct fx::cr_event_t                       m_d0_notification_event;  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_D0NotificationEvent
        _m06 uint8_t                                     m_flags;                  //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_Flags
        _m15 u0_m_flags_by_name_t                        m_flags_by_name;          //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_FlagsByName
        _m16 uint8_t                                     m_event_history_index;    //{ +0x00e1    +0x00e1    +0x00e1    +0x00e1    } | .m_EventHistoryIndex
        _m17 uint8_t                                     m_state_history_index;    //{ +0x00e2    +0x00e2    +0x00e2    +0x00e2    } | .m_StateHistoryIndex
        _m18 enum fx::power_idle_states_t                m_current_idle_state;     //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .m_CurrentIdleState
        _m19 sdk::array<enum fx::power_idle_events_t, 8> m_event_history;          //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .m_EventHistory
        _m20 sdk::array<enum fx::power_idle_states_t, 8> m_state_history;          //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_StateHistory
                                                                                 
        SDK_MAGIC_PROPERTIES( "FxPowerIdleMachine.$", 0x128, true, 0xf0cc101e2678218f );                        
        SDK_FIXED_SIZE( power_idle_machine_t, 0x128 );                           
    };                                                                           
};
#include "magic/power_idle_machine_t.end.hpp"
SDK_VERIFY( struct fx::power_idle_machine_t::u0_m_flags_by_name_t, 0x1 );
SDK_VERIFY( class fx::power_idle_machine_t, 0x128 );
