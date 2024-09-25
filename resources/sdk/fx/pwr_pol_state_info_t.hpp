#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pwr_pol_state_info_t.start.hpp"
namespace fx
{
    // [union FxPwrPolStateInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union pwr_pol_state_info_t                                                      
    {                                                                               
        struct u0_bits_t                                                            
        {                                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                      
            _m00 uint1_t  queue_open;                                                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .QueueOpen
            _m01 uint31_t known_dropped_events;                                       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .KnownDroppedEvents
                                                                                    
            SDK_MAGIC_PROPERTIES( "FxPwrPolStateInfo.Bits.$", 0x4, true, 0x8e7f22f1b71a8ba2 );                                  
            SDK_FIXED_SIZE( u0_bits_t, 0x4 );                                       
        };                                                                          
                                                                                    
        struct u4_bits_by_name_t                                                    
        {                                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
            //                                                                      
            _m03 uint1_t pwr_pol_start_known;                                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PwrPolStartKnown
            _m04 uint1_t pwr_pol_stop_known;                                          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PwrPolStopKnown
            _m05 uint1_t pwr_pol_sx_known;                                            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PwrPolSxKnown
            _m06 uint1_t pwr_pol_s0_known;                                            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PwrPolS0Known
            _m07 uint1_t pwr_pol_power_down_known;                                    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PwrPolPowerDownKnown
            _m08 uint1_t pwr_pol_power_up_known;                                      //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PwrPolPowerUpKnown
            _m09 uint1_t pwr_pol_power_down_io_stopped_known;                         //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PwrPolPowerDownIoStoppedKnown
            _m10 uint1_t pwr_pol_power_up_hw_started_known;                           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PwrPolPowerUpHwStartedKnown
            _m11 uint1_t pwr_pol_wake_arrived_known;                                  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PwrPolWakeArrivedKnown
            _m12 uint1_t pwr_pol_wake_success_known;                                  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PwrPolWakeSuccessKnown
            _m13 uint1_t pwr_pol_wake_failed_known;                                   //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .PwrPolWakeFailedKnown
            _m14 uint1_t pwr_pol_io_present_known;                                    //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PwrPolIoPresentKnown
            _m15 uint1_t pwr_pol_power_timeout_expired_known;                         //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .PwrPolPowerTimeoutExpiredKnown
            _m16 uint1_t pwr_pol_s0_idle_policy_changed_known;                        //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .PwrPolS0IdlePolicyChangedKnown
            _m17 uint1_t pwr_pol_surprise_remove_known;                               //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .PwrPolSurpriseRemoveKnown
            _m18 uint1_t pwr_pol_usb_selective_suspend_callback_known;                //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .PwrPolUsbSelectiveSuspendCallbackKnown
            _m19 uint1_t pwr_pol_usb_selective_suspend_completed_known;               //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .PwrPolUsbSelectiveSuspendCompletedKnown
            _m20 uint1_t pwr_pol_power_down_failed_known;                             //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .PwrPolPowerDownFailedKnown
            _m21 uint1_t pwr_pol_power_up_failed_known;                               //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .PwrPolPowerUpFailedKnown
                                                                                    
            SDK_MAGIC_PROPERTIES( "FxPwrPolStateInfo.BitsByName.$", 0x4, true, 0xb842cca4cf89e606 );                                                           
            SDK_FIXED_SIZE( u4_bits_by_name_t, 0x4 );                                                           
        };                                                                          
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                                          
        _m02 u0_bits_t                                                 bits;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bits
        _m22 u4_bits_by_name_t                                         bits_by_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BitsByName
                                                                                    
        SDK_MAGIC_PROPERTIES( "FxPwrPolStateInfo.$", 0x4, true, 0xd9d0ed121beff3a );             
        SDK_FIXED_SIZE( pwr_pol_state_info_t, 0x4 );                                
    };                                                                              
};
#include "magic/pwr_pol_state_info_t.end.hpp"
SDK_VERIFY( struct fx::pwr_pol_state_info_t::u0_bits_t, 0x4 );
SDK_VERIFY( struct fx::pwr_pol_state_info_t::u4_bits_by_name_t, 0x4 );
SDK_VERIFY( union fx::pwr_pol_state_info_t, 0x4 );
