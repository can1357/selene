#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pnp_state_info_t.start.hpp"
namespace fx
{
    // [union FxPnpStateInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union pnp_state_info_t                                                      
    {                                                                           
        struct u0_bits_t                                                        
        {                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                  
            _m00 uint1_t  queue_open;                                             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .QueueOpen
            _m01 uint31_t known_dropped_events;                                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .KnownDroppedEvents
                                                                                
            SDK_MAGIC_PROPERTIES( "FxPnpStateInfo.Bits.$", 0x4, true, 0x6b39c2209484afcd );                                  
            SDK_FIXED_SIZE( u0_bits_t, 0x4 );                                   
        };                                                                      
                                                                                
        struct u4_bits_by_name_t                                                
        {                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
            //                                                                  
            _m03 uint1_t pnp_event_add_device_known;                              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PnpEventAddDeviceKnown
            _m04 uint1_t pnp_event_start_device_known;                            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PnpEventStartDeviceKnown
            _m05 uint1_t pnp_event_start_device_complete_known;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PnpEventStartDeviceCompleteKnown
            _m06 uint1_t pnp_event_start_device_failed_known;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PnpEventStartDeviceFailedKnown
            _m07 uint1_t pnp_event_query_remove_known;                            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PnpEventQueryRemoveKnown
            _m08 uint1_t pnp_event_query_stop_known;                              //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PnpEventQueryStopKnown
            _m09 uint1_t pnp_event_cancel_remove_known;                           //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PnpEventCancelRemoveKnown
            _m10 uint1_t pnp_event_cancel_stop_known;                             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PnpEventCancelStopKnown
            _m11 uint1_t pnp_event_stop_known;                                    //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PnpEventStopKnown
            _m12 uint1_t pnp_event_remove_known;                                  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PnpEventRemoveKnown
            _m13 uint1_t pnp_event_surprise_remove_known;                         //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .PnpEventSurpriseRemoveKnown
            _m14 uint1_t pnp_event_eject_known;                                   //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PnpEventEjectKnown
            _m15 uint1_t pnp_event_pwr_pol_stopped;                               //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .PnpEventPwrPolStopped
            _m16 uint1_t pnp_event_pwr_pol_stop_failed;                           //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .PnpEventPwrPolStopFailed
            _m17 uint1_t pnp_event_power_up_failed_known;                         //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .PnpEventPowerUpFailedKnown
            _m18 uint1_t pnp_event_power_down_failed_known;                       //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .PnpEventPowerDownFailedKnown
            _m19 uint1_t pnp_event_parent_removed_known;                          //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .PnpEventParentRemovedKnown
            _m20 uint1_t pnp_event_children_removal_complete_known;               //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .PnpEventChildrenRemovalCompleteKnown
            _m21 uint1_t pnp_event_pwr_pol_started;                               //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .PnpEventPwrPolStarted
            _m22 uint1_t pnp_event_pwr_pol_start_failed;                          //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .PnpEventPwrPolStartFailed
                                                                                
            SDK_MAGIC_PROPERTIES( "FxPnpStateInfo.BitsByName.$", 0x4, true, 0x68426bfae5daabc1 );                                                       
            SDK_FIXED_SIZE( u4_bits_by_name_t, 0x4 );                                                       
        };                                                                      
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                                      
        _m02 u0_bits_t                                             bits;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bits
        _m23 u4_bits_by_name_t                                     bits_by_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BitsByName
                                                                                
        SDK_MAGIC_PROPERTIES( "FxPnpStateInfo.$", 0x4, true, 0xbf48e35cb12b47d7 );             
        SDK_FIXED_SIZE( pnp_state_info_t, 0x4 );                                
    };                                                                          
};
#include "magic/pnp_state_info_t.end.hpp"
SDK_VERIFY( struct fx::pnp_state_info_t::u0_bits_t, 0x4 );
SDK_VERIFY( struct fx::pnp_state_info_t::u4_bits_by_name_t, 0x4 );
SDK_VERIFY( union fx::pnp_state_info_t, 0x4 );
