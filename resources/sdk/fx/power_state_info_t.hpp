#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_state_info_t.start.hpp"
namespace fx
{
    // [union FxPowerStateInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union power_state_info_t                                       
    {                                                              
        struct u0_bits_t                                           
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                     
            _m00 uint1_t  queue_open;                                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .QueueOpen
            _m01 uint31_t known_dropped_events;                      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .KnownDroppedEvents
                                                                   
            SDK_MAGIC_PROPERTIES( "FxPowerStateInfo.Bits.$", 0x4, true, 0xa62876e1b8d7f03e );                                  
            SDK_FIXED_SIZE( u0_bits_t, 0x4 );                                  
        };                                                         
                                                                   
        struct u4_bits_by_name_t                                   
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                     
            _m03 uint1_t power_d0_known;                             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PowerD0Known
            _m04 uint1_t power_dx_known;                             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PowerDxKnown
            _m05 uint1_t power_wake_arrival_known;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PowerWakeArrivalKnown
            _m06 uint1_t power_wake_succeeded_known;                 //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PowerWakeSucceededKnown
            _m07 uint1_t power_wake_failed_known;                    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PowerWakeFailedKnown
            _m08 uint1_t power_wake_canceled_known;                  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PowerWakeCanceledKnown
            _m09 uint1_t power_implicit_d0_known;                    //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PowerImplicitD0Known
            _m10 uint1_t power_implicit_d3_known;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PowerImplicitD3Known
            _m11 uint1_t power_parent_to_d0_known;                   //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PowerParentToD0Known
            _m12 uint1_t power_mark_pageable_known;                  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PowerMarkPageableKnown
            _m13 uint1_t power_mark_nonpageable_known;               //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .PowerMarkNonpageableKnown
            _m14 uint1_t power_complete_d0_known;                    //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PowerCompleteD0Known
            _m15 uint1_t power_complete_dx_known;                    //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .PowerCompleteDxKnown
                                                                   
            SDK_MAGIC_PROPERTIES( "FxPowerStateInfo.BitsByName.$", 0x4, true, 0x349a7343a9a8912f );                                          
            SDK_FIXED_SIZE( u4_bits_by_name_t, 0x4 );                                          
        };                                                         
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                         
        _m02 u0_bits_t                                bits;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bits
        _m16 u4_bits_by_name_t                        bits_by_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BitsByName
                                                                   
        SDK_MAGIC_PROPERTIES( "FxPowerStateInfo.$", 0x4, true, 0x5540ed0e6394bb5d );             
        SDK_FIXED_SIZE( power_state_info_t, 0x4 );                 
    };                                                             
};
#include "magic/power_state_info_t.end.hpp"
SDK_VERIFY( struct fx::power_state_info_t::u0_bits_t, 0x4 );
SDK_VERIFY( struct fx::power_state_info_t::u4_bits_by_name_t, 0x4 );
SDK_VERIFY( union fx::power_state_info_t, 0x4 );
