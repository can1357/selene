#pragma once
#include <sdkgen/support_library.hpp>
#include "ksystem_time_t.hpp"
#include "../os/product_type_t.hpp"
#include "xstate_configuration_t.hpp"
#include "alternative_architecture_type_t.hpp"

#include "magic/kuser_shared_data_t.start.hpp"
namespace nt
{
    // [struct _KUSER_SHARED_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kuser_shared_data_t                                                               
    {                                                                                        
        union u0_user_cet_available_environments_t                                           
        {                                                                                    
            // WDK 10, Windows 10 v2004, Windows 10 v20H2                                                        
            //                                                                               
            _m90 uint32_t all_flags;                                                           //{ +0x0000    +0x0000    +0x0000    } | .AllFlags
            _m91 uint1_t  win32_process;                                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Win32Process
            _m92 uint1_t  sgx2_enclave;                                                        //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .Sgx2Enclave
            _m93 uint1_t  vbs_basic_enclave;                                                   //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .VbsBasicEnclave
                                                                                             
            SDK_NONVOL_PROPERTIES( "_KUSER_SHARED_DATA.UserCetAvailableEnvironments.$", 0x4, true, 0xd84b0eccf2ddd2e3 );                                                        
            SDK_FIXED_SIZE( u0_user_cet_available_environments_t, 0x4 );                                                        
        };                                                                                   
                                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                   
        _m000 uint32_t                                 tick_count_low_deprecated;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TickCountLowDeprecated
        _m001 uint32_t                                 tick_count_multiplier;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TickCountMultiplier
        _m002 volatile struct nt::ksystem_time_t       interrupt_time;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptTime
        _m003 volatile struct nt::ksystem_time_t       system_time;                            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SystemTime
        _m004 volatile struct nt::ksystem_time_t       time_zone_bias;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TimeZoneBias
        _m005 uint16_t                                 image_number_low;                       //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .ImageNumberLow
        _m006 uint16_t                                 image_number_high;                      //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .ImageNumberHigh
        _m007 sdk::array<wchar_t, 260>                 nt_system_root;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .NtSystemRoot
        _m008 uint32_t                                 max_stack_trace_depth;                  //{ +0x0238    +0x0238    +0x0238    +0x0238    +0x0238    } | .MaxStackTraceDepth
        _m009 uint32_t                                 crypto_exponent;                        //{ +0x023c    +0x023c    +0x023c    +0x023c    +0x023c    } | .CryptoExponent
        _m010 uint32_t                                 time_zone_id;                           //{ +0x0240    +0x0240    +0x0240    +0x0240    +0x0240    } | .TimeZoneId
        _m011 uint32_t                                 large_page_minimum;                     //{ +0x0244    +0x0244    +0x0244    +0x0244    +0x0244    } | .LargePageMinimum
        _m012 uint32_t                                 ait_sampling_value;                     //{ +0x0248    +0x0248    +0x0248    +0x0248    +0x0248    } | .AitSamplingValue
        _m013 uint32_t                                 app_compat_flag;                        //{ +0x024c    +0x024c    +0x024c    +0x024c    +0x024c    } | .AppCompatFlag
        _m014 uint64_t                                 rng_seed_version;                       //{ +0x0250    +0x0250    +0x0250    +0x0250    +0x0250    } | .RNGSeedVersion
        _m015 uint32_t                                 global_validation_runlevel;             //{ +0x0258    +0x0258    +0x0258    +0x0258    +0x0258    } | .GlobalValidationRunlevel
        _m016 volatile int32_t                         time_zone_bias_stamp;                   //{ +0x025c    +0x025c    +0x025c    +0x025c    +0x025c    } | .TimeZoneBiasStamp
        _m017 uint32_t                                 nt_build_number;                        //{ +0x0260    +0x0260    +0x0260    +0x0260    +0x0260    } | .NtBuildNumber
        _m018 enum os::product_type_t                  nt_product_type;                        //{ +0x0264    +0x0264    +0x0264    +0x0264    +0x0264    } | .NtProductType
        _m019 uint8_t                                  product_type_is_valid;                  //{ +0x0268    +0x0268    +0x0268    +0x0268    +0x0268    } | .ProductTypeIsValid
        _m020 uint16_t                                 native_processor_architecture;          //{ +0x026a    +0x026a    +0x026a    +0x026a    +0x026a    } | .NativeProcessorArchitecture
        _m021 uint32_t                                 nt_major_version;                       //{ +0x026c    +0x026c    +0x026c    +0x026c    +0x026c    } | .NtMajorVersion
        _m022 uint32_t                                 nt_minor_version;                       //{ +0x0270    +0x0270    +0x0270    +0x0270    +0x0270    } | .NtMinorVersion
        _m023 sdk::array<uint8_t, 64>                  processor_features;                     //{ +0x0274    +0x0274    +0x0274    +0x0274    +0x0274    } | .ProcessorFeatures
        _m024 volatile uint32_t                        time_slip;                              //{ +0x02bc    +0x02bc    +0x02bc    +0x02bc    +0x02bc    } | .TimeSlip
        _m025 enum nt::alternative_architecture_type_t alternative_architecture;               //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .AlternativeArchitecture
        _m026 uint32_t                                 boot_id;                                //{ +0x02c4    +0x02c4    +0x02c4    +0x02c4    +0x02c4    } | .BootId
        _m027 int64_t                                  system_expiration_date;                 //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .SystemExpirationDate
        _m028 uint32_t                                 suite_mask;                             //{ +0x02d0    +0x02d0    +0x02d0    +0x02d0    +0x02d0    } | .SuiteMask
        _m029 uint8_t                                  kd_debugger_enabled;                    //{ +0x02d4    +0x02d4    +0x02d4    +0x02d4    +0x02d4    } | .KdDebuggerEnabled
        _m030 uint8_t                                  mitigation_policies;                    //{ +0x02d5    +0x02d5    +0x02d5    +0x02d5    +0x02d5    } | .MitigationPolicies
        _m031 uint2_t                                  nx_support_policy;                      //{ +0x02d5@0  +0x02d5@0  +0x02d5@0  +0x02d5@0  +0x02d5@0  } | .NXSupportPolicy
        _m032 uint2_t                                  seh_validation_policy;                  //{ +0x02d5@2  +0x02d5@2  +0x02d5@2  +0x02d5@2  +0x02d5@2  } | .SEHValidationPolicy
        _m033 uint2_t                                  cur_dir_devices_skipped_for_dlls;       //{ +0x02d5@4  +0x02d5@4  +0x02d5@4  +0x02d5@4  +0x02d5@4  } | .CurDirDevicesSkippedForDlls
        _m034 volatile uint32_t                        active_console_id;                      //{ +0x02d8    +0x02d8    +0x02d8    +0x02d8    +0x02d8    } | .ActiveConsoleId
        _m035 volatile uint32_t                        dismount_count;                         //{ +0x02dc    +0x02dc    +0x02dc    +0x02dc    +0x02dc    } | .DismountCount
        _m036 uint32_t                                 com_plus_package;                       //{ +0x02e0    +0x02e0    +0x02e0    +0x02e0    +0x02e0    } | .ComPlusPackage
        _m037 uint32_t                                 last_system_rit_event_tick_count;       //{ +0x02e4    +0x02e4    +0x02e4    +0x02e4    +0x02e4    } | .LastSystemRITEventTickCount
        _m038 uint32_t                                 number_of_physical_pages;               //{ +0x02e8    +0x02e8    +0x02e8    +0x02e8    +0x02e8    } | .NumberOfPhysicalPages
        _m039 uint8_t                                  safe_boot_mode;                         //{ +0x02ec    +0x02ec    +0x02ec    +0x02ec    +0x02ec    } | .SafeBootMode
        _m040 uint8_t                                  virtualization_flags;                   //{ +0x02ed    +0x02ed    +0x02ed    +0x02ed    +0x02ed    } | .VirtualizationFlags
        _m041 uint32_t                                 shared_data_flags;                      //{ +0x02f0    +0x02f0    +0x02f0    +0x02f0    +0x02f0    } | .SharedDataFlags
        _m042 uint1_t                                  dbg_error_port_present;                 //{ +0x02f0@0  +0x02f0@0  +0x02f0@0  +0x02f0@0  +0x02f0@0  } | .DbgErrorPortPresent
        _m043 uint1_t                                  dbg_elevation_enabled;                  //{ +0x02f0@1  +0x02f0@1  +0x02f0@1  +0x02f0@1  +0x02f0@1  } | .DbgElevationEnabled
        _m044 uint1_t                                  dbg_virt_enabled;                       //{ +0x02f0@2  +0x02f0@2  +0x02f0@2  +0x02f0@2  +0x02f0@2  } | .DbgVirtEnabled
        _m045 uint1_t                                  dbg_installer_detect_enabled;           //{ +0x02f0@3  +0x02f0@3  +0x02f0@3  +0x02f0@3  +0x02f0@3  } | .DbgInstallerDetectEnabled
        _m046 uint1_t                                  dbg_lkg_enabled;                        //{ +0x02f0@4  +0x02f0@4  +0x02f0@4  +0x02f0@4  +0x02f0@4  } | .DbgLkgEnabled
        _m047 uint1_t                                  dbg_dyn_processor_enabled;              //{ +0x02f0@5  +0x02f0@5  +0x02f0@5  +0x02f0@5  +0x02f0@5  } | .DbgDynProcessorEnabled
        _m048 uint1_t                                  dbg_console_broker_enabled;             //{ +0x02f0@6  +0x02f0@6  +0x02f0@6  +0x02f0@6  +0x02f0@6  } | .DbgConsoleBrokerEnabled
        _m049 uint1_t                                  dbg_secure_boot_enabled;                //{ +0x02f0@7  +0x02f0@7  +0x02f0@7  +0x02f0@7  +0x02f0@7  } | .DbgSecureBootEnabled
        _m050 uint1_t                                  dbg_multi_session_sku;                  //{ +0x02f0@8  +0x02f0@8  +0x02f0@8  +0x02f0@8  +0x02f0@8  } | .DbgMultiSessionSku
        _m051 uint1_t                                  dbg_multi_users_in_session_sku;         //{ +0x02f0@9  +0x02f0@9  +0x02f0@9  +0x02f0@9  +0x02f0@9  } | .DbgMultiUsersInSessionSku
        _m052 sdk::array<uint32_t, 1>                  data_flags_pad;                         //{ +0x02f4    +0x02f4    +0x02f4    +0x02f4    +0x02f4    } | .DataFlagsPad
        _m053 uint64_t                                 test_ret_instruction;                   //{ +0x02f8    +0x02f8    +0x02f8    +0x02f8    +0x02f8    } | .TestRetInstruction
        _m054 int64_t                                  qpc_frequency;                          //{ +0x0300    +0x0300    +0x0300    +0x0300    +0x0300    } | .QpcFrequency
        _m055 uint32_t                                 system_call;                            //{ +0x0308    +0x0308    +0x0308    +0x0308    +0x0308    } | .SystemCall
        _m056 sdk::array<uint64_t, 2>                  system_call_pad;                        //{ +0x0310    +0x0310    +0x0310    +0x0310    +0x0310    } | .SystemCallPad
        _m057 volatile struct nt::ksystem_time_t       tick_count;                             //{ +0x0320    +0x0320    +0x0320    +0x0320    +0x0320    } | .TickCount
        _m058 volatile uint64_t                        tick_count_quad;                        //{ +0x0320    +0x0320    +0x0320    +0x0320    +0x0320    } | .TickCountQuad
        _m059 sdk::array<uint32_t, 3>                  reserved_tick_count_overlay;            //{ +0x0320    +0x0320    +0x0320    +0x0320    +0x0320    } | .ReservedTickCountOverlay
        _m060 sdk::array<uint32_t, 1>                  tick_count_pad;                         //{ +0x032c    +0x032c    +0x032c    +0x032c    +0x032c    } | .TickCountPad
        _m061 uint32_t                                 cookie;                                 //{ +0x0330    +0x0330    +0x0330    +0x0330    +0x0330    } | .Cookie
        _m062 sdk::array<uint32_t, 1>                  cookie_pad;                             //{ +0x0334    +0x0334    +0x0334    +0x0334    +0x0334    } | .CookiePad
        _m063 int64_t                                  console_session_foreground_process_id;  //{ +0x0338    +0x0338    +0x0338    +0x0338    +0x0338    } | .ConsoleSessionForegroundProcessId
        _m064 uint64_t                                 time_update_lock;                       //{ +0x0340    +0x0340    +0x0340    +0x0340    +0x0340    } | .TimeUpdateLock
        _m065 uint64_t                                 baseline_system_time_qpc;               //{ +0x0348    +0x0348    +0x0348    +0x0348    +0x0348    } | .BaselineSystemTimeQpc
        _m066 uint64_t                                 baseline_interrupt_time_qpc;            //{ +0x0350    +0x0350    +0x0350    +0x0350    +0x0350    } | .BaselineInterruptTimeQpc
        _m067 uint64_t                                 qpc_system_time_increment;              //{ +0x0358    +0x0358    +0x0358    +0x0358    +0x0358    } | .QpcSystemTimeIncrement
        _m068 uint64_t                                 qpc_interrupt_time_increment;           //{ +0x0360    +0x0360    +0x0360    +0x0360    +0x0360    } | .QpcInterruptTimeIncrement
        _m069 uint8_t                                  qpc_system_time_increment_shift;        //{ +0x0368    +0x0368    +0x0368    +0x0368    +0x0368    } | .QpcSystemTimeIncrementShift
        _m070 uint8_t                                  qpc_interrupt_time_increment_shift;     //{ +0x0369    +0x0369    +0x0369    +0x0369    +0x0369    } | .QpcInterruptTimeIncrementShift
        _m071 uint16_t                                 unparked_processor_count;               //{ +0x036a    +0x036a    +0x036a    +0x036a    +0x036a    } | .UnparkedProcessorCount
        _m072 sdk::array<uint32_t, 4>                  enclave_feature_mask;                   //{ +0x036c    +0x036c    +0x036c    +0x036c    +0x036c    } | .EnclaveFeatureMask
        _m073 sdk::array<uint16_t, 16>                 user_mode_global_logger;                //{ +0x0380    +0x0380    +0x0380    +0x0380    +0x0380    } | .UserModeGlobalLogger
        _m074 uint32_t                                 image_file_execution_options;           //{ +0x03a0    +0x03a0    +0x03a0    +0x03a0    +0x03a0    } | .ImageFileExecutionOptions
        _m075 uint32_t                                 lang_generation_count;                  //{ +0x03a4    +0x03a4    +0x03a4    +0x03a4    +0x03a4    } | .LangGenerationCount
        _m076 volatile uint64_t                        interrupt_time_bias;                    //{ +0x03b0    +0x03b0    +0x03b0    +0x03b0    +0x03b0    } | .InterruptTimeBias
        _m077 volatile uint64_t                        qpc_bias;                               //{ +0x03b8    +0x03b8    +0x03b8    +0x03b8    +0x03b8    } | .QpcBias
        _m078 uint32_t                                 active_processor_count;                 //{ +0x03c0    +0x03c0    +0x03c0    +0x03c0    +0x03c0    } | .ActiveProcessorCount
        _m079 volatile uint8_t                         active_group_count;                     //{ +0x03c4    +0x03c4    +0x03c4    +0x03c4    +0x03c4    } | .ActiveGroupCount
        _m080 uint16_t                                 qpc_data;                               //{ +0x03c6    +0x03c6    +0x03c6    +0x03c6    +0x03c6    } | .QpcData
        _m081 varuint_t                                qpc_bypass_enabled;                     //{ +0x03c6@0  +0x03c6    +0x03c6    +0x03c6    +0x03c6    } | .QpcBypassEnabled
        _m082 varuint_t                                qpc_shift;                              //{ +0x03c6@1  +0x03c7    +0x03c7    +0x03c7    +0x03c7    } | .QpcShift
        _m083 int64_t                                  time_zone_bias_effective_start;         //{ +0x03c8    +0x03c8    +0x03c8    +0x03c8    +0x03c8    } | .TimeZoneBiasEffectiveStart
        _m084 int64_t                                  time_zone_bias_effective_end;           //{ +0x03d0    +0x03d0    +0x03d0    +0x03d0    +0x03d0    } | .TimeZoneBiasEffectiveEnd
        _m085 struct nt::xstate_configuration_t        x_state;                                //{ +0x03d8    +0x03d8    +0x03d8    +0x03d8    +0x03d8    } | .XState
                                                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                   
        _m086 uint16_t                                 cycles_per_yield;                       //{ +0x02d6    +0x02d6    +0x02d6    +0x02d6    } | .CyclesPerYield
        _m087 uint1_t                                  dbg_state_separation_enabled;           //{ +0x02f0@10 +0x02f0@10 +0x02f0@10 +0x02f0@10 } | .DbgStateSeparationEnabled
        _m088 uint32_t                                 telemetry_coverage_round;               //{ +0x037c    +0x037c    +0x037c    +0x037c    } | .TelemetryCoverageRound
        _m089 struct nt::ksystem_time_t                feature_configuration_change_stamp;     //{ +0x0710    +0x0710    +0x0720    +0x0710    } | .FeatureConfigurationChangeStamp
                                                                                             
        // WDK 10, Windows 10 v2004, Windows 10 v20H2                                        
        //                                                                                   
        _m094 u0_user_cet_available_environments_t     user_cet_available_environments;        //{ +0x030c    +0x030c    +0x030c    } | .UserCetAvailableEnvironments
                                                                                             
        // Windows 11                                                                        
        //                                                                                   
        _m095 uint64_t                                 user_pointer_auth_mask;                 //{ +0x0730    } | .UserPointerAuthMask
                                                                                             
        // Windows 10 v1607                                                                  
        //                                                                                   
        _m096 uint32_t                                 system_call_pad0;                       //{ +0x030c    } | .SystemCallPad0
                                                                                             
        SDK_MAGIC_PROPERTIES( "_KUSER_SHARED_DATA.$", 0x720, true, 0x4a87e1d7d3eb2218 );                                      
        SDK_DYNAMIC_SIZE( kuser_shared_data_t );                                             
    };                                                                                       
};
#include "magic/kuser_shared_data_t.end.hpp"
SDK_VERIFY( union nt::kuser_shared_data_t::u0_user_cet_available_environments_t, 0x4 );
