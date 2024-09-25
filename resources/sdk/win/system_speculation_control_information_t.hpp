#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_speculation_control_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SPECULATION_CONTROL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_speculation_control_information_t                                               
    {                                                                                             
        struct u0_speculation_control_flags_t                                                     
        {                                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                        
            //                                                                                    
            _m000 uint1_t bpb_enabled;                                                              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BpbEnabled
            _m001 uint1_t bpb_disabled_system_policy;                                               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .BpbDisabledSystemPolicy
            _m002 uint1_t bpb_disabled_no_hardware_support;                                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .BpbDisabledNoHardwareSupport
            _m003 uint1_t spec_ctrl_enumerated;                                                     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .SpecCtrlEnumerated
            _m004 uint1_t spec_cmd_enumerated;                                                      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .SpecCmdEnumerated
            _m005 uint1_t ibrs_present;                                                             //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IbrsPresent
            _m006 uint1_t stibp_present;                                                            //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .StibpPresent
            _m007 uint1_t smep_present;                                                             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .SmepPresent
                                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                        
            //                                                                                    
            _m008 uint1_t speculative_store_bypass_disable_available;                               //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .SpeculativeStoreBypassDisableAvailable
            _m009 uint1_t speculative_store_bypass_disable_supported;                               //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .SpeculativeStoreBypassDisableSupported
            _m010 uint1_t speculative_store_bypass_disabled_system_wide;                            //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .SpeculativeStoreBypassDisabledSystemWide
            _m011 uint1_t speculative_store_bypass_disabled_kernel;                                 //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .SpeculativeStoreBypassDisabledKernel
            _m012 uint1_t speculative_store_bypass_disable_required;                                //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .SpeculativeStoreBypassDisableRequired
            _m013 uint1_t bpb_disabled_kernel_to_user;                                              //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .BpbDisabledKernelToUser
            _m014 uint1_t spec_ctrl_retpoline_enabled;                                              //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .SpecCtrlRetpolineEnabled
            _m015 uint1_t spec_ctrl_import_optimization_enabled;                                    //{ +0x0000@15 +0x0000@15 +0x0000@15 } | .SpecCtrlImportOptimizationEnabled
            _m016 uint1_t enhanced_ibrs;                                                            //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .EnhancedIbrs
            _m017 uint1_t hv_l1tf_status_available;                                                 //{ +0x0000@17 +0x0000@17 +0x0000@17 } | .HvL1tfStatusAvailable
            _m018 uint1_t hv_l1tf_processor_not_affected;                                           //{ +0x0000@18 +0x0000@18 +0x0000@18 } | .HvL1tfProcessorNotAffected
            _m019 uint1_t hv_l1tf_migitation_enabled;                                               //{ +0x0000@19 +0x0000@19 +0x0000@19 } | .HvL1tfMigitationEnabled
            _m020 uint1_t hv_l1tf_migitation_not_enabled_hardware;                                  //{ +0x0000@20 +0x0000@20 +0x0000@20 } | .HvL1tfMigitationNotEnabled_Hardware
            _m021 uint1_t hv_l1tf_migitation_not_enabled_load_option;                               //{ +0x0000@21 +0x0000@21 +0x0000@21 } | .HvL1tfMigitationNotEnabled_LoadOption
            _m022 uint1_t hv_l1tf_migitation_not_enabled_core_scheduler;                            //{ +0x0000@22 +0x0000@22 +0x0000@22 } | .HvL1tfMigitationNotEnabled_CoreScheduler
            _m023 uint1_t enhanced_ibrs_reported;                                                   //{ +0x0000@23 +0x0000@23 +0x0000@23 } | .EnhancedIbrsReported
            _m024 uint1_t mds_hardware_protected;                                                   //{ +0x0000@24 +0x0000@24 +0x0000@24 } | .MdsHardwareProtected
            _m025 uint1_t mb_clear_enabled;                                                         //{ +0x0000@25 +0x0000@25 +0x0000@25 } | .MbClearEnabled
            _m026 uint1_t mb_clear_reported;                                                        //{ +0x0000@26 +0x0000@26 +0x0000@26 } | .MbClearReported
                                                                                                  
            SDK_MAGIC_PROPERTIES( "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.$", 0x4, true, 0x7fb6012b0a1f4b11 );                                                                        
            SDK_FIXED_SIZE( u0_speculation_control_flags_t, 0x4 );                                                                        
        };                                                                                        
                                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                                        
        _m27 u0_speculation_control_flags_t                             speculation_control_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpeculationControlFlags
                                                                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SPECULATION_CONTROL_INFORMATION.$", 0x4, true, 0xf9c81320f8b085c6 );                          
        SDK_FIXED_SIZE( system_speculation_control_information_t, 0x4 );                          
    };                                                                                            
};
#include "magic/system_speculation_control_information_t.end.hpp"
SDK_VERIFY( struct win::system_speculation_control_information_t::u0_speculation_control_flags_t, 0x4 );
SDK_VERIFY( struct win::system_speculation_control_information_t, 0x4 );
