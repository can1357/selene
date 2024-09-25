#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/telemetry_driver_info_t.start.hpp"
namespace fx
{
    // [union FxTelemetryDriverInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union telemetry_driver_info_t                                           
    {                                                                       
        struct u0_bitmap_t                                                  
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                              
            _m00 uint1_t is_non_pnp_driver;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IsNonPnpDriver
            _m01 uint1_t is_no_dispatch_override;                             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IsNoDispatchOverride
            _m02 uint1_t is_verifier_on;                                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IsVerifierOn
            _m03 uint1_t is_enhanced_verifier_on;                             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .IsEnhancedVerifierOn
            _m04 uint1_t is_filter;                                           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IsFilter
            _m05 uint1_t is_using_remove_lock_option;                         //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IsUsingRemoveLockOption
            _m06 uint1_t is_using_non_default_hardware_release_order;         //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .IsUsingNonDefaultHardwareReleaseOrder
            _m07 uint1_t is_power_policy_owner;                               //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .IsPowerPolicyOwner
            _m08 uint1_t is_s0_idle_wake_from_s0_enabled;                     //{ +0x0000@8  +0x0000@9  +0x0000@9  +0x0000@9  } | .IsS0IdleWakeFromS0Enabled
            _m09 uint1_t is_s0_idle_usb_ss_enabled;                           //{ +0x0000@9  +0x0000@10 +0x0000@10 +0x0000@10 } | .IsS0IdleUsbSSEnabled
            _m10 uint1_t is_s0_idle_system_managed;                           //{ +0x0000@10 +0x0000@11 +0x0000@11 +0x0000@11 } | .IsS0IdleSystemManaged
            _m11 uint1_t is_sx_wake_enabled;                                  //{ +0x0000@11 +0x0000@12 +0x0000@12 +0x0000@12 } | .IsSxWakeEnabled
            _m12 uint1_t is_using_level_triggered_line_interrupt;             //{ +0x0000@12 +0x0000@13 +0x0000@13 +0x0000@13 } | .IsUsingLevelTriggeredLineInterrupt
            _m13 uint1_t is_using_edge_triggered_line_interrupt;              //{ +0x0000@13 +0x0000@14 +0x0000@14 +0x0000@14 } | .IsUsingEdgeTriggeredLineInterrupt
            _m14 uint1_t is_using_msi_x_or_single_msi22_interrupt;            //{ +0x0000@14 +0x0000@15 +0x0000@15 +0x0000@15 } | .IsUsingMsiXOrSingleMsi22Interrupt
            _m15 uint1_t is_using_msi22_multi_message_interrupt;              //{ +0x0000@15 +0x0000@16 +0x0000@16 +0x0000@16 } | .IsUsingMsi22MultiMessageInterrupt
            _m16 uint1_t is_using_multiple_interrupt;                         //{ +0x0000@16 +0x0000@17 +0x0000@17 +0x0000@17 } | .IsUsingMultipleInterrupt
            _m17 uint1_t is_using_passive_level_interrupt;                    //{ +0x0000@17 +0x0000@18 +0x0000@18 +0x0000@18 } | .IsUsingPassiveLevelInterrupt
            _m18 uint1_t is_using_bus_master_dma;                             //{ +0x0000@18 +0x0000@19 +0x0000@19 +0x0000@19 } | .IsUsingBusMasterDma
            _m19 uint1_t is_using_system_dma;                                 //{ +0x0000@19 +0x0000@20 +0x0000@20 +0x0000@20 } | .IsUsingSystemDma
            _m20 uint1_t is_using_system_dma_duplex;                          //{ +0x0000@20 +0x0000@21 +0x0000@21 +0x0000@21 } | .IsUsingSystemDmaDuplex
            _m21 uint1_t is_using_static_bus_enumration;                      //{ +0x0000@21 +0x0000@22 +0x0000@22 +0x0000@22 } | .IsUsingStaticBusEnumration
            _m22 uint1_t is_using_dynamic_bus_enumeration;                    //{ +0x0000@22 +0x0000@23 +0x0000@23 +0x0000@23 } | .IsUsingDynamicBusEnumeration
                                                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                              
            _m23 uint1_t is_s0_idle_enabled;                                  //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .IsS0IdleEnabled
                                                                            
            SDK_MAGIC_PROPERTIES( "FxTelemetryDriverInfo.bitmap.$", 0x4, true, 0xee2d8c2350db4758 );                                                   
            SDK_FIXED_SIZE( u0_bitmap_t, 0x4 );                                                   
        };                                                                  
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                                  
        _m24 u0_bitmap_t                                             bitmap;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bitmap
        _m25 uint32_t                                                dword;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Dword
                                                                            
        SDK_MAGIC_PROPERTIES( "FxTelemetryDriverInfo.$", 0x4, true, 0x1dd296ba0144e26a );       
        SDK_FIXED_SIZE( telemetry_driver_info_t, 0x4 );                     
    };                                                                      
};
#include "magic/telemetry_driver_info_t.end.hpp"
SDK_VERIFY( struct fx::telemetry_driver_info_t::u0_bitmap_t, 0x4 );
SDK_VERIFY( union fx::telemetry_driver_info_t, 0x4 );
