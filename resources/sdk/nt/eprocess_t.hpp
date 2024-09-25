#pragma once
#include <sdkgen/support_library.hpp>
#include "kprocess_t.hpp"
#include "../ex/fast_ref_t.hpp"
#include "mmsupport_full_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../ps/protection_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "../wnf/state_name_t.hpp"
#include "../alpc/process_context_t.hpp"
#include "../ps/process_wake_information_t.hpp"
#include "../se/audit_process_creation_info_t.hpp"
#include "../ps/interlocked_timer_delay_values_t.hpp"
#include "../ps/dynamic_enforced_address_ranges_t.hpp"
#include "../ke/ideal_processor_assignment_block_t.hpp"
#include "../psp/syscall_provider_dispatch_context_t.hpp"

namespace mm  { struct session_space_t;           }
namespace po  { struct diag_stack_record_t;       }
namespace po  { struct process_energy_context_t;  }
namespace ps  { struct syscall_provider_t;        }
namespace win { struct inverted_function_table_t; }

#include "magic/eprocess_t.start.hpp"
namespace nt
{
    struct peb_t;
    struct ejob_t;
    struct ethread_t;
    struct file_object_t;
    struct handle_table_t;
    struct ewow64process_t;
    struct pagefault_history_t;
    struct eprocess_quota_block_t;
    struct process_disk_counters_t;
    struct process_energy_values_t;
    struct inverted_function_table_kernel_mode_t;

    // [struct _EPROCESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eprocess_t                                                                                                   
    {                                                                                                                   
        struct u0_mitigation_flags_values_t                                                                             
        {                                                                                                               
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                             
            //                                                                                                          
            _m221 uint1_t control_flow_guard_enabled;                                                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .ControlFlowGuardEnabled
            _m222 uint1_t control_flow_guard_export_suppression_enabled;                                                  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .ControlFlowGuardExportSuppressionEnabled
            _m223 uint1_t control_flow_guard_strict;                                                                      //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .ControlFlowGuardStrict
            _m224 uint1_t disallow_stripped_images;                                                                       //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .DisallowStrippedImages
            _m225 uint1_t force_relocate_images;                                                                          //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .ForceRelocateImages
            _m226 uint1_t high_entropy_aslr_enabled;                                                                      //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .HighEntropyASLREnabled
            _m227 uint1_t stack_randomization_disabled;                                                                   //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .StackRandomizationDisabled
            _m228 uint1_t extension_point_disable;                                                                        //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .ExtensionPointDisable
            _m229 uint1_t disable_dynamic_code;                                                                           //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .DisableDynamicCode
            _m230 uint1_t disable_dynamic_code_allow_opt_out;                                                             //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .DisableDynamicCodeAllowOptOut
            _m231 uint1_t disable_dynamic_code_allow_remote_downgrade;                                                    //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .DisableDynamicCodeAllowRemoteDowngrade
            _m232 uint1_t audit_disable_dynamic_code;                                                                     //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .AuditDisableDynamicCode
            _m233 uint1_t disallow_win32k_system_calls;                                                                   //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .DisallowWin32kSystemCalls
            _m234 uint1_t audit_disallow_win32k_system_calls;                                                             //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .AuditDisallowWin32kSystemCalls
            _m235 uint1_t enable_filtered_win32k_ap_is;                                                                   //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .EnableFilteredWin32kAPIs
            _m236 uint1_t audit_filtered_win32k_ap_is;                                                                    //{ +0x0000@15 +0x0000@15 +0x0000@15 } | .AuditFilteredWin32kAPIs
            _m237 uint1_t disable_non_system_fonts;                                                                       //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .DisableNonSystemFonts
            _m238 uint1_t audit_non_system_font_loading;                                                                  //{ +0x0000@17 +0x0000@17 +0x0000@17 } | .AuditNonSystemFontLoading
            _m239 uint1_t prefer_system32_images;                                                                         //{ +0x0000@18 +0x0000@18 +0x0000@18 } | .PreferSystem32Images
            _m240 uint1_t prohibit_remote_image_map;                                                                      //{ +0x0000@19 +0x0000@19 +0x0000@19 } | .ProhibitRemoteImageMap
            _m241 uint1_t audit_prohibit_remote_image_map;                                                                //{ +0x0000@20 +0x0000@20 +0x0000@20 } | .AuditProhibitRemoteImageMap
            _m242 uint1_t prohibit_low_il_image_map;                                                                      //{ +0x0000@21 +0x0000@21 +0x0000@21 } | .ProhibitLowILImageMap
            _m243 uint1_t audit_prohibit_low_il_image_map;                                                                //{ +0x0000@22 +0x0000@22 +0x0000@22 } | .AuditProhibitLowILImageMap
            _m244 uint1_t signature_mitigation_opt_in;                                                                    //{ +0x0000@23 +0x0000@23 +0x0000@23 } | .SignatureMitigationOptIn
            _m245 uint1_t audit_block_non_microsoft_binaries;                                                             //{ +0x0000@24 +0x0000@24 +0x0000@24 } | .AuditBlockNonMicrosoftBinaries
            _m246 uint1_t audit_block_non_microsoft_binaries_allow_store;                                                 //{ +0x0000@25 +0x0000@25 +0x0000@25 } | .AuditBlockNonMicrosoftBinariesAllowStore
            _m247 uint1_t loader_integrity_continuity_enabled;                                                            //{ +0x0000@26 +0x0000@26 +0x0000@26 } | .LoaderIntegrityContinuityEnabled
            _m248 uint1_t audit_loader_integrity_continuity;                                                              //{ +0x0000@27 +0x0000@27 +0x0000@27 } | .AuditLoaderIntegrityContinuity
            _m249 uint1_t enable_module_tampering_protection;                                                             //{ +0x0000@28 +0x0000@28 +0x0000@28 } | .EnableModuleTamperingProtection
            _m250 uint1_t enable_module_tampering_protection_no_inherit;                                                  //{ +0x0000@29 +0x0000@29 +0x0000@29 } | .EnableModuleTamperingProtectionNoInherit
            _m251 uint1_t restrict_indirect_branch_prediction;                                                            //{ +0x0000@30 +0x0000@30 +0x0000@30 } | .RestrictIndirectBranchPrediction
            _m252 uint1_t isolate_security_domain;                                                                        //{ +0x0000@31 +0x0000@31 +0x0000@31 } | .IsolateSecurityDomain
                                                                                                                        
            SDK_MAGIC_PROPERTIES( "_EPROCESS.MitigationFlagsValues.$", 0x4, true, 0xd5d0c5fae4368a18 );                                                                                             
            SDK_FIXED_SIZE( u0_mitigation_flags_values_t, 0x4 );                                                                                             
        };                                                                                                              
                                                                                                                        
        struct u3_mitigation_flags2_values_t                                                                            
        {                                                                                                               
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                              
            //                                                                                                          
            _m255 uint1_t enable_export_address_filter;                                                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableExportAddressFilter
            _m256 uint1_t audit_export_address_filter;                                                                    //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .AuditExportAddressFilter
            _m257 uint1_t enable_export_address_filter_plus;                                                              //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .EnableExportAddressFilterPlus
            _m258 uint1_t audit_export_address_filter_plus;                                                               //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .AuditExportAddressFilterPlus
            _m259 uint1_t enable_rop_stack_pivot;                                                                         //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .EnableRopStackPivot
            _m260 uint1_t audit_rop_stack_pivot;                                                                          //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .AuditRopStackPivot
            _m261 uint1_t enable_rop_caller_check;                                                                        //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .EnableRopCallerCheck
            _m262 uint1_t audit_rop_caller_check;                                                                         //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .AuditRopCallerCheck
            _m263 uint1_t enable_rop_sim_exec;                                                                            //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .EnableRopSimExec
            _m264 uint1_t audit_rop_sim_exec;                                                                             //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .AuditRopSimExec
            _m265 uint1_t enable_import_address_filter;                                                                   //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .EnableImportAddressFilter
            _m266 uint1_t audit_import_address_filter;                                                                    //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .AuditImportAddressFilter
            _m267 uint1_t disable_page_combine;                                                                           //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .DisablePageCombine
            _m268 uint1_t speculative_store_bypass_disable;                                                               //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .SpeculativeStoreBypassDisable
            _m269 uint1_t cet_user_shadow_stacks;                                                                         //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .CetUserShadowStacks
            _m270 uint1_t audit_cet_user_shadow_stacks;                                                                   //{ +0x0000@15 +0x0000@15 +0x0000@15 } | .AuditCetUserShadowStacks
            _m271 uint1_t audit_cet_user_shadow_stacks_logged;                                                            //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .AuditCetUserShadowStacksLogged
            _m272 uint1_t user_cet_set_context_ip_validation;                                                             //{ +0x0000@17 +0x0000@17 +0x0000@17 } | .UserCetSetContextIpValidation
            _m273 uint1_t audit_user_cet_set_context_ip_validation;                                                       //{ +0x0000@18 +0x0000@18 +0x0000@18 } | .AuditUserCetSetContextIpValidation
            _m274 uint1_t audit_user_cet_set_context_ip_validation_logged;                                                //{ +0x0000@19 +0x0000@19 +0x0000@19 } | .AuditUserCetSetContextIpValidationLogged
                                                                                                                        
            // Windows 11, Windows 10 v20H2                                                                                              
            //                                                                                                          
            _m275 uint1_t cet_user_shadow_stacks_strict_mode;                                                             //{ +0x0000@20 +0x0000@20 } | .CetUserShadowStacksStrictMode
            _m276 uint1_t block_non_cet_binaries;                                                                         //{ +0x0000@21 +0x0000@21 } | .BlockNonCetBinaries
            _m277 uint1_t block_non_cet_binaries_non_ehcont;                                                              //{ +0x0000@22 +0x0000@22 } | .BlockNonCetBinariesNonEhcont
            _m278 uint1_t audit_block_non_cet_binaries;                                                                   //{ +0x0000@23 +0x0000@23 } | .AuditBlockNonCetBinaries
            _m279 uint1_t audit_block_non_cet_binaries_logged;                                                            //{ +0x0000@24 +0x0000@24 } | .AuditBlockNonCetBinariesLogged
            _m280 uint1_t cet_dynamic_apis_out_of_proc_only;                                                              //{ +0x0000@30 +0x0000@30 } | .CetDynamicApisOutOfProcOnly
            _m281 uint1_t user_cet_set_context_ip_validation_relaxed_mode;                                                //{ +0x0000@31 +0x0000@31 } | .UserCetSetContextIpValidationRelaxedMode
                                                                                                                        
            // Windows 11                                                                                               
            //                                                                                                          
            _m282 uint1_t xtended_control_flow_guard;                                                                     //{ +0x0000@25 } | .XtendedControlFlowGuard
            _m283 uint1_t audit_xtended_control_flow_guard;                                                               //{ +0x0000@26 } | .AuditXtendedControlFlowGuard
            _m284 uint1_t pointer_auth_user_ip;                                                                           //{ +0x0000@27 } | .PointerAuthUserIp
            _m285 uint1_t audit_pointer_auth_user_ip;                                                                     //{ +0x0000@28 } | .AuditPointerAuthUserIp
            _m286 uint1_t audit_pointer_auth_user_ip_logged;                                                              //{ +0x0000@29 } | .AuditPointerAuthUserIpLogged
                                                                                                                        
            SDK_MAGIC_PROPERTIES( "_EPROCESS.MitigationFlags2Values.$", 0x4, true, 0x8aae34003fad19cd );                                                                                              
            SDK_FIXED_SIZE( u3_mitigation_flags2_values_t, 0x4 );                                                                                              
        };                                                                                                              
                                                                                                                        
        struct u6_mitigation_flags3_values_t                                                                            
        {                                                                                                               
            // Windows 11                                                                                               
            //                                                                                                          
            _p36 uint1_t  restrict_core_sharing;                                                                          //{ +0x0000@0  } | .RestrictCoreSharing
            _p37 uint31_t mitigation_flags3_spare;                                                                        //{ +0x0000@1  } | .MitigationFlags3Spare
                                                                                                                        
            SDK_MAGIC_PROPERTIES( "_EPROCESS.MitigationFlags3Values.$", 0x0, false, 0x589f27820cdaba51 );                                                                      
            SDK_FIXED_SIZE( u6_mitigation_flags3_values_t, 0x4 );                                                                      
        };                                                                                                              
                                                                                                                        
        using inverted_function_table_t = sdk::variant<struct win::inverted_function_table_t*, struct nt::inverted_function_table_kernel_mode_t*>;                                              
        using process_timer_delay_t =     volatile union ps::interlocked_timer_delay_values_t;                                              
                                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                                              
        _m000 struct nt::kprocess_t                                       pcb;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Pcb
        _m001 struct ex::push_lock_t                                      process_lock;                                   //{ +0x02d8    +0x0438    +0x0438    +0x0438    } | .ProcessLock
        _m002 void*                                                       unique_process_id;                              //{ +0x02e8    +0x0440    +0x0440    +0x0440    } | .UniqueProcessId
        _m003 nt::list_entry_t                                            active_process_links;                           //{ +0x02f0    +0x0448    +0x0448    +0x0448    } | .ActiveProcessLinks
        _m004 struct ex::rundown_ref_t                                    rundown_protect;                                //{ +0x02e0    +0x0458    +0x0458    +0x0458    } | .RundownProtect
        _m005 uint32_t                                                    flags2;                                         //{ +0x0300    +0x0460    +0x0460    +0x0460    } | .Flags2
        _m006 uint1_t                                                     job_not_really_active;                          //{ +0x0300@0  +0x0460@0  +0x0460@0  +0x0460@0  } | .JobNotReallyActive
        _m007 uint1_t                                                     accounting_folded;                              //{ +0x0300@1  +0x0460@1  +0x0460@1  +0x0460@1  } | .AccountingFolded
        _m008 uint1_t                                                     new_process_reported;                           //{ +0x0300@2  +0x0460@2  +0x0460@2  +0x0460@2  } | .NewProcessReported
        _m009 uint1_t                                                     exit_process_reported;                          //{ +0x0300@3  +0x0460@3  +0x0460@3  +0x0460@3  } | .ExitProcessReported
        _m010 uint1_t                                                     report_commit_changes;                          //{ +0x0300@4  +0x0460@4  +0x0460@4  +0x0460@4  } | .ReportCommitChanges
        _m011 uint1_t                                                     last_report_memory;                             //{ +0x0300@5  +0x0460@5  +0x0460@5  +0x0460@5  } | .LastReportMemory
        _m012 uint1_t                                                     force_wake_charge;                              //{ +0x0300@6  +0x0460@6  +0x0460@6  +0x0460@6  } | .ForceWakeCharge
        _m013 uint1_t                                                     cross_session_create;                           //{ +0x0300@7  +0x0460@7  +0x0460@7  +0x0460@7  } | .CrossSessionCreate
        _m014 uint1_t                                                     needs_handle_rundown;                           //{ +0x0300@8  +0x0460@8  +0x0460@8  +0x0460@8  } | .NeedsHandleRundown
        _m015 uint1_t                                                     ref_trace_enabled;                              //{ +0x0300@9  +0x0460@9  +0x0460@9  +0x0460@9  } | .RefTraceEnabled
        _m016 uint1_t                                                     empty_job_evaluated;                            //{ +0x0300@11 +0x0460@11 +0x0460@11 +0x0460@11 } | .EmptyJobEvaluated
        _m017 uint3_t                                                     default_page_priority;                          //{ +0x0300@12 +0x0460@12 +0x0460@12 +0x0460@12 } | .DefaultPagePriority
        _m018 uint1_t                                                     primary_token_frozen;                           //{ +0x0300@15 +0x0460@15 +0x0460@15 +0x0460@15 } | .PrimaryTokenFrozen
        _m019 uint1_t                                                     process_verifier_target;                        //{ +0x0300@16 +0x0460@16 +0x0460@16 +0x0460@16 } | .ProcessVerifierTarget
        _m020 uint1_t                                                     affinity_permanent;                             //{ +0x0300@18 +0x0460@18 +0x0460@18 +0x0460@18 } | .AffinityPermanent
        _m021 uint1_t                                                     affinity_update_enable;                         //{ +0x0300@19 +0x0460@19 +0x0460@19 +0x0460@19 } | .AffinityUpdateEnable
        _m022 uint1_t                                                     propagate_node;                                 //{ +0x0300@20 +0x0460@20 +0x0460@20 +0x0460@20 } | .PropagateNode
        _m023 uint1_t                                                     explicit_affinity;                              //{ +0x0300@21 +0x0460@21 +0x0460@21 +0x0460@21 } | .ExplicitAffinity
        _m024 uint2_t                                                     process_execution_state;                        //{ +0x0300@22 +0x0460@22 +0x0460@22 +0x0460@22 } | .ProcessExecutionState
        _m025 uint2_t                                                     process_state_change_request;                   //{ +0x0300@28 +0x0460@28 +0x0460@28 +0x0460@28 } | .ProcessStateChangeRequest
        _m026 uint1_t                                                     process_state_change_in_progress;               //{ +0x0300@30 +0x0460@30 +0x0460@30 +0x0460@30 } | .ProcessStateChangeInProgress
        _m027 uint1_t                                                     in_private;                                     //{ +0x06cc@10 +0x0460@31 +0x0460@31 +0x0460@31 } | .InPrivate
        _m028 uint32_t                                                    flags;                                          //{ +0x0304    +0x0464    +0x0464    +0x0464    } | .Flags
        _m029 uint1_t                                                     create_reported;                                //{ +0x0304@0  +0x0464@0  +0x0464@0  +0x0464@0  } | .CreateReported
        _m030 uint1_t                                                     no_debug_inherit;                               //{ +0x0304@1  +0x0464@1  +0x0464@1  +0x0464@1  } | .NoDebugInherit
        _m031 uint1_t                                                     process_exiting;                                //{ +0x0304@2  +0x0464@2  +0x0464@2  +0x0464@2  } | .ProcessExiting
        _m032 uint1_t                                                     process_delete;                                 //{ +0x0304@3  +0x0464@3  +0x0464@3  +0x0464@3  } | .ProcessDelete
        _m033 uint1_t                                                     vm_deleted;                                     //{ +0x0304@5  +0x0464@5  +0x0464@5  +0x0464@5  } | .VmDeleted
        _m034 uint1_t                                                     outswap_enabled;                                //{ +0x0304@6  +0x0464@6  +0x0464@6  +0x0464@6  } | .OutswapEnabled
        _m035 uint1_t                                                     outswapped;                                     //{ +0x0304@7  +0x0464@7  +0x0464@7  +0x0464@7  } | .Outswapped
        _m036 uint1_t                                                     fail_fast_on_commit_fail;                       //{ +0x0304@8  +0x0464@8  +0x0464@8  +0x0464@8  } | .FailFastOnCommitFail
        _m037 uint1_t                                                     wow64_va_space4_gb;                             //{ +0x0304@9  +0x0464@9  +0x0464@9  +0x0464@9  } | .Wow64VaSpace4Gb
        _m038 uint2_t                                                     address_space_initialized;                      //{ +0x0304@10 +0x0464@10 +0x0464@10 +0x0464@10 } | .AddressSpaceInitialized
        _m039 uint1_t                                                     set_timer_resolution;                           //{ +0x0304@12 +0x0464@12 +0x0464@12 +0x0464@12 } | .SetTimerResolution
        _m040 uint1_t                                                     break_on_termination;                           //{ +0x0304@13 +0x0464@13 +0x0464@13 +0x0464@13 } | .BreakOnTermination
        _m041 uint1_t                                                     deprioritize_views;                             //{ +0x0304@14 +0x0464@14 +0x0464@14 +0x0464@14 } | .DeprioritizeViews
        _m042 uint1_t                                                     write_watch;                                    //{ +0x0304@15 +0x0464@15 +0x0464@15 +0x0464@15 } | .WriteWatch
        _m043 uint1_t                                                     process_in_session;                             //{ +0x0304@16 +0x0464@16 +0x0464@16 +0x0464@16 } | .ProcessInSession
        _m044 uint1_t                                                     override_address_space;                         //{ +0x0304@17 +0x0464@17 +0x0464@17 +0x0464@17 } | .OverrideAddressSpace
        _m045 uint1_t                                                     has_address_space;                              //{ +0x0304@18 +0x0464@18 +0x0464@18 +0x0464@18 } | .HasAddressSpace
        _m046 uint1_t                                                     launch_prefetched;                              //{ +0x0304@19 +0x0464@19 +0x0464@19 +0x0464@19 } | .LaunchPrefetched
        _m047 uint1_t                                                     vm_top_down;                                    //{ +0x0304@21 +0x0464@21 +0x0464@21 +0x0464@21 } | .VmTopDown
        _m048 uint1_t                                                     image_notify_done;                              //{ +0x0304@22 +0x0464@22 +0x0464@22 +0x0464@22 } | .ImageNotifyDone
        _m049 uint1_t                                                     pde_update_needed;                              //{ +0x0304@23 +0x0464@23 +0x0464@23 +0x0464@23 } | .PdeUpdateNeeded
        _m050 uint1_t                                                     vdm_allowed;                                    //{ +0x0304@24 +0x0464@24 +0x0464@24 +0x0464@24 } | .VdmAllowed
        _m051 uint1_t                                                     process_rundown;                                //{ +0x0304@25 +0x0464@25 +0x0464@25 +0x0464@25 } | .ProcessRundown
        _m052 uint1_t                                                     process_inserted;                               //{ +0x0304@26 +0x0464@26 +0x0464@26 +0x0464@26 } | .ProcessInserted
        _m053 uint3_t                                                     default_io_priority;                            //{ +0x0304@27 +0x0464@27 +0x0464@27 +0x0464@27 } | .DefaultIoPriority
        _m054 uint1_t                                                     process_self_delete;                            //{ +0x0304@30 +0x0464@30 +0x0464@30 +0x0464@30 } | .ProcessSelfDelete
        _m055 uint1_t                                                     set_timer_resolution_link;                      //{ +0x0304@31 +0x0464@31 +0x0464@31 +0x0464@31 } | .SetTimerResolutionLink
        _m056 int64_t                                                     create_time;                                    //{ +0x0308    +0x0468    +0x0468    +0x0468    } | .CreateTime
        _m057 sdk::array<uint64_t, 2>                                     process_quota_usage;                            //{ +0x0310    +0x0470    +0x0470    +0x0470    } | .ProcessQuotaUsage
        _m058 sdk::array<uint64_t, 2>                                     process_quota_peak;                             //{ +0x0320    +0x0480    +0x0480    +0x0480    } | .ProcessQuotaPeak
        _m059 uint64_t                                                    peak_virtual_size;                              //{ +0x0330    +0x0490    +0x0490    +0x0490    } | .PeakVirtualSize
        _m060 uint64_t                                                    virtual_size;                                   //{ +0x0338    +0x0498    +0x0498    +0x0498    } | .VirtualSize
        _m061 nt::list_entry_t                                            session_process_links;                          //{ +0x0340    +0x04a0    +0x04a0    +0x04a0    } | .SessionProcessLinks
        _m062 void*                                                       exception_port_data;                            //{ +0x0350    +0x04b0    +0x04b0    +0x04b0    } | .ExceptionPortData
        _m063 uint64_t                                                    exception_port_value;                           //{ +0x0350    +0x04b0    +0x04b0    +0x04b0    } | .ExceptionPortValue
        _m064 uint3_t                                                     exception_port_state;                           //{ +0x0350@0  +0x04b0@0  +0x04b0@0  +0x04b0@0  } | .ExceptionPortState
        _m065 struct ex::fast_ref_t                                       token;                                          //{ +0x0358    +0x04b8    +0x04b8    +0x04b8    } | .Token
        _m066 struct ex::push_lock_t                                      address_creation_lock;                          //{ +0x0368    +0x04c8    +0x04c8    +0x04c8    } | .AddressCreationLock
        _m067 struct ex::push_lock_t                                      page_table_commitment_lock;                     //{ +0x0370    +0x04d0    +0x04d0    +0x04d0    } | .PageTableCommitmentLock
        _m068 struct nt::ethread_t*                                       rotate_in_progress;                             //{ +0x0378    +0x04d8    +0x04d8    +0x04d8    } | .RotateInProgress
        _m069 struct nt::ethread_t*                                       fork_in_progress;                               //{ +0x0380    +0x04e0    +0x04e0    +0x04e0    } | .ForkInProgress
        _m070 struct nt::ejob_t volatile*                                 commit_charge_job;                              //{ +0x0388    +0x04e8    +0x04e8    +0x04e8    } | .CommitChargeJob
        _m071 struct rtl::avl_tree_t                                      clone_root;                                     //{ +0x0390    +0x04f0    +0x04f0    +0x04f0    } | .CloneRoot
        _m072 volatile uint64_t                                           number_of_private_pages;                        //{ +0x0398    +0x04f8    +0x04f8    +0x04f8    } | .NumberOfPrivatePages
        _m073 volatile uint64_t                                           number_of_locked_pages;                         //{ +0x03a0    +0x0500    +0x0500    +0x0500    } | .NumberOfLockedPages
        _m074 void*                                                       win32_process;                                  //{ +0x03a8    +0x0508    +0x0508    +0x0508    } | .Win32Process
        _m075 struct nt::ejob_t volatile*                                 job;                                            //{ +0x03b0    +0x0510    +0x0510    +0x0510    } | .Job
        _m076 void*                                                       section_object;                                 //{ +0x03b8    +0x0518    +0x0518    +0x0518    } | .SectionObject
        _m077 void*                                                       section_base_address;                           //{ +0x03c0    +0x0520    +0x0520    +0x0520    } | .SectionBaseAddress
        _m078 uint32_t                                                    cookie;                                         //{ +0x03c8    +0x0528    +0x0528    +0x0528    } | .Cookie
        _m079 struct nt::pagefault_history_t*                             working_set_watch;                              //{ +0x03d0    +0x0530    +0x0530    +0x0530    } | .WorkingSetWatch
        _m080 void*                                                       win32_window_station;                           //{ +0x03d8    +0x0538    +0x0538    +0x0538    } | .Win32WindowStation
        _m081 void*                                                       inherited_from_unique_process_id;               //{ +0x03e0    +0x0540    +0x0540    +0x0540    } | .InheritedFromUniqueProcessId
        _m082 volatile uint64_t                                           owner_process_id;                               //{ +0x03f0    +0x0548    +0x0548    +0x0548    } | .OwnerProcessId
        _m083 struct nt::peb_t*                                           peb;                                            //{ +0x03f8    +0x0550    +0x0550    +0x0550    } | .Peb
        _m084 struct mm::session_space_t*                                 session;                                        //{ +0x0400    +0x0558    +0x0558    +0x0558    } | .Session
        _m085 struct nt::eprocess_quota_block_t*                          quota_block;                                    //{ +0x0410    +0x0568    +0x0568    +0x0568    } | .QuotaBlock
        _m086 struct nt::handle_table_t*                                  object_table;                                   //{ +0x0418    +0x0570    +0x0570    +0x0570    } | .ObjectTable
        _m087 void*                                                       debug_port;                                     //{ +0x0420    +0x0578    +0x0578    +0x0578    } | .DebugPort
        _m088 struct nt::ewow64process_t*                                 wo_w64_process;                                 //{ +0x0428    +0x0580    +0x0580    +0x0580    } | .WoW64Process
        _m089 sdk::variant<void*, struct ex::fast_ref_t>                  device_map;                                     //{ +0x0430    +0x0588    +0x0588    +0x0588    } | .DeviceMap
        _m090 void*                                                       etw_data_source;                                //{ +0x0438    +0x0590    +0x0590    +0x0590    } | .EtwDataSource
        _m091 uint64_t                                                    page_directory_pte;                             //{ +0x0440    +0x0598    +0x0598    +0x0598    } | .PageDirectoryPte
        _m092 struct nt::file_object_t*                                   image_file_pointer;                             //{ +0x0448    +0x05a0    +0x05a0    +0x05a0    } | .ImageFilePointer
        _m093 sdk::array<uint8_t, 15>                                     image_file_name;                                //{ +0x0450    +0x05a8    +0x05a8    +0x05a8    } | .ImageFileName
        _m094 uint8_t                                                     priority_class;                                 //{ +0x045f    +0x05b7    +0x05b7    +0x05b7    } | .PriorityClass
        _m095 void*                                                       security_port;                                  //{ +0x0460    +0x05b8    +0x05b8    +0x05b8    } | .SecurityPort
        _m096 struct se::audit_process_creation_info_t                    se_audit_process_creation_info;                 //{ +0x0468    +0x05c0    +0x05c0    +0x05c0    } | .SeAuditProcessCreationInfo
        _m097 nt::list_entry_t                                            job_links;                                      //{ +0x0470    +0x05c8    +0x05c8    +0x05c8    } | .JobLinks
        _m098 void*                                                       highest_user_address;                           //{ +0x0480    +0x05d8    +0x05d8    +0x05d8    } | .HighestUserAddress
        _m099 nt::list_entry_t                                            thread_list_head;                               //{ +0x0488    +0x05e0    +0x05e0    +0x05e0    } | .ThreadListHead
        _m100 volatile uint32_t                                           active_threads;                                 //{ +0x0498    +0x05f0    +0x05f0    +0x05f0    } | .ActiveThreads
        _m101 uint32_t                                                    image_path_hash;                                //{ +0x049c    +0x05f4    +0x05f4    +0x05f4    } | .ImagePathHash
        _m102 uint32_t                                                    default_hard_error_processing;                  //{ +0x04a0    +0x05f8    +0x05f8    +0x05f8    } | .DefaultHardErrorProcessing
        _m103 int32_t                                                     last_thread_exit_status;                        //{ +0x04a4    +0x05fc    +0x05fc    +0x05fc    } | .LastThreadExitStatus
        _m104 struct ex::fast_ref_t                                       prefetch_trace;                                 //{ +0x04a8    +0x0600    +0x0600    +0x0600    } | .PrefetchTrace
        _m105 void*                                                       locked_pages_list;                              //{ +0x04b0    +0x0608    +0x0608    +0x0608    } | .LockedPagesList
        _m106 int64_t                                                     read_operation_count;                           //{ +0x04b8    +0x0610    +0x0610    +0x0610    } | .ReadOperationCount
        _m107 int64_t                                                     write_operation_count;                          //{ +0x04c0    +0x0618    +0x0618    +0x0618    } | .WriteOperationCount
        _m108 int64_t                                                     other_operation_count;                          //{ +0x04c8    +0x0620    +0x0620    +0x0620    } | .OtherOperationCount
        _m109 int64_t                                                     read_transfer_count;                            //{ +0x04d0    +0x0628    +0x0628    +0x0628    } | .ReadTransferCount
        _m110 int64_t                                                     write_transfer_count;                           //{ +0x04d8    +0x0630    +0x0630    +0x0630    } | .WriteTransferCount
        _m111 int64_t                                                     other_transfer_count;                           //{ +0x04e0    +0x0638    +0x0638    +0x0638    } | .OtherTransferCount
        _m112 uint64_t                                                    commit_charge_limit;                            //{ +0x04e8    +0x0640    +0x0640    +0x0640    } | .CommitChargeLimit
        _m113 volatile uint64_t                                           commit_charge;                                  //{ +0x04f0    +0x0648    +0x0648    +0x0648    } | .CommitCharge
        _m114 volatile uint64_t                                           commit_charge_peak;                             //{ +0x04f8    +0x0650    +0x0650    +0x0650    } | .CommitChargePeak
        _m115 struct nt::mmsupport_full_t                                 vm;                                             //{ +0x0500    +0x0680    +0x0680    +0x0680    } | .Vm
        _m116 nt::list_entry_t                                            mm_process_links;                               //{ +0x0610    +0x07c0    +0x07c0    +0x07c0    } | .MmProcessLinks
        _m117 uint32_t                                                    modified_page_count;                            //{ +0x0628    +0x07d0    +0x07d0    +0x07d0    } | .ModifiedPageCount
        _m118 int32_t                                                     exit_status;                                    //{ +0x062c    +0x07d4    +0x07d4    +0x07d4    } | .ExitStatus
        _m119 struct rtl::avl_tree_t                                      vad_root;                                       //{ +0x0620    +0x07d8    +0x07d8    +0x07d8    } | .VadRoot
        _m120 void*                                                       vad_hint;                                       //{ +0x0630    +0x07e0    +0x07e0    +0x07e0    } | .VadHint
        _m121 uint64_t                                                    vad_count;                                      //{ +0x0638    +0x07e8    +0x07e8    +0x07e8    } | .VadCount
        _m122 volatile uint64_t                                           vad_physical_pages;                             //{ +0x0640    +0x07f0    +0x07f0    +0x07f0    } | .VadPhysicalPages
        _m123 uint64_t                                                    vad_physical_pages_limit;                       //{ +0x0648    +0x07f8    +0x07f8    +0x07f8    } | .VadPhysicalPagesLimit
        _m124 struct alpc::process_context_t                              alpc_context;                                   //{ +0x0650    +0x0800    +0x0800    +0x0800    } | .AlpcContext
        _m125 nt::list_entry_t                                            timer_resolution_link;                          //{ +0x0670    +0x0820    +0x0820    +0x0820    } | .TimerResolutionLink
        _m126 struct po::diag_stack_record_t*                             timer_resolution_stack_record;                  //{ +0x0680    +0x0830    +0x0830    +0x0830    } | .TimerResolutionStackRecord
        _m127 uint32_t                                                    requested_timer_resolution;                     //{ +0x0688    +0x0838    +0x0838    +0x0838    } | .RequestedTimerResolution
        _m128 uint32_t                                                    smallest_timer_resolution;                      //{ +0x068c    +0x083c    +0x083c    +0x083c    } | .SmallestTimerResolution
        _m129 int64_t                                                     exit_time;                                      //{ +0x0690    +0x0840    +0x0840    +0x0840    } | .ExitTime
        _m130 inverted_function_table_t                                   inverted_function_table;                        //{ +0x0698    +0x0848    +0x0848    +0x0848    } | .InvertedFunctionTable
        _m131 struct ex::push_lock_t                                      inverted_function_table_lock;                   //{ +0x06a0    +0x0850    +0x0850    +0x0850    } | .InvertedFunctionTableLock
        _m132 uint32_t                                                    active_threads_high_watermark;                  //{ +0x06a8    +0x0858    +0x0858    +0x0858    } | .ActiveThreadsHighWatermark
        _m133 uint32_t                                                    large_private_vad_count;                        //{ +0x06ac    +0x085c    +0x085c    +0x085c    } | .LargePrivateVadCount
        _m134 struct ex::push_lock_t                                      thread_list_lock;                               //{ +0x06b0    +0x0860    +0x0860    +0x0860    } | .ThreadListLock
        _m135 void*                                                       wnf_context;                                    //{ +0x06b8    +0x0868    +0x0868    +0x0868    } | .WnfContext
        _m136 uint8_t                                                     signature_level;                                //{ +0x06c8    +0x0878    +0x0878    +0x0878    } | .SignatureLevel
        _m137 uint8_t                                                     section_signature_level;                        //{ +0x06c9    +0x0879    +0x0879    +0x0879    } | .SectionSignatureLevel
        _m138 struct ps::protection_t                                     protection;                                     //{ +0x06ca    +0x087a    +0x087a    +0x087a    } | .Protection
        _m139 varuint_t                                                   hang_count;                                     //{ +0x06cb    +0x087b@0  +0x087b@0  +0x087b@0  } | .HangCount
        _m140 uint32_t                                                    flags3;                                         //{ +0x06cc    +0x087c    +0x087c    +0x087c    } | .Flags3
        _m141 uint1_t                                                     minimal;                                        //{ +0x06cc@0  +0x087c@0  +0x087c@0  +0x087c@0  } | .Minimal
        _m142 uint1_t                                                     replacing_page_root;                            //{ +0x06cc@1  +0x087c@1  +0x087c@1  +0x087c@1  } | .ReplacingPageRoot
        _m143 uint1_t                                                     crashed;                                        //{ +0x06cc@4  +0x087c@2  +0x087c@2  +0x087c@2  } | .Crashed
        _m144 uint1_t                                                     job_vads_are_tracked;                           //{ +0x06cc@5  +0x087c@3  +0x087c@3  +0x087c@3  } | .JobVadsAreTracked
        _m145 uint1_t                                                     vad_tracking_disabled;                          //{ +0x06cc@6  +0x087c@4  +0x087c@4  +0x087c@4  } | .VadTrackingDisabled
        _m146 uint1_t                                                     auxiliary_process;                              //{ +0x06cc@7  +0x087c@5  +0x087c@5  +0x087c@5  } | .AuxiliaryProcess
        _m147 uint1_t                                                     subsystem_process;                              //{ +0x06cc@8  +0x087c@6  +0x087c@6  +0x087c@6  } | .SubsystemProcess
        _m148 uint1_t                                                     indirect_cpu_sets;                              //{ +0x06cc@9  +0x087c@7  +0x087c@7  +0x087c@7  } | .IndirectCpuSets
        _m149 uint1_t                                                     relinquished_commit;                            //{ +0x06cc@18 +0x087c@8  +0x087c@8  +0x087c@8  } | .RelinquishedCommit
        _m150 uint1_t                                                     high_graphics_priority;                         //{ +0x06cc@20 +0x087c@9  +0x087c@9  +0x087c@9  } | .HighGraphicsPriority
        _m151 uint1_t                                                     commit_fail_logged;                             //{ +0x06cc@21 +0x087c@10 +0x087c@10 +0x087c@10 } | .CommitFailLogged
        _m152 uint1_t                                                     reserve_fail_logged;                            //{ +0x06cc@22 +0x087c@11 +0x087c@11 +0x087c@11 } | .ReserveFailLogged
        _m153 uint1_t                                                     address_policy_frozen;                          //{ +0x06cc@23 +0x087c@14 +0x087c@14 +0x087c@14 } | .AddressPolicyFrozen
        _m154 int32_t                                                     device_asid;                                    //{ +0x06d0    +0x0880    +0x0880    +0x0880    } | .DeviceAsid
        _m155 void*                                                       svm_data;                                       //{ +0x06d8    +0x0888    +0x0888    +0x0888    } | .SvmData
        _m156 struct ex::push_lock_t                                      svm_process_lock;                               //{ +0x06e0    +0x0890    +0x0890    +0x0890    } | .SvmProcessLock
        _m157 uint64_t                                                    svm_lock;                                       //{ +0x06e8    +0x0898    +0x0898    +0x0898    } | .SvmLock
        _m158 nt::list_entry_t                                            svm_process_device_list_head;                   //{ +0x06f0    +0x08a0    +0x08a0    +0x08a0    } | .SvmProcessDeviceListHead
        _m159 uint64_t                                                    last_freeze_interrupt_time;                     //{ +0x0700    +0x08b0    +0x08b0    +0x08b0    } | .LastFreezeInterruptTime
        _m160 struct nt::process_disk_counters_t*                         disk_counters;                                  //{ +0x0708    +0x08b8    +0x08b8    +0x08b8    } | .DiskCounters
        _m161 void*                                                       pico_context;                                   //{ +0x0710    +0x08c0    +0x08c0    +0x08c0    } | .PicoContext
        _m162 uint32_t                                                    high_priority_faults_allowed;                   //{ +0x0728    +0x08e0    +0x08e0    +0x08e0    } | .HighPriorityFaultsAllowed
        _m163 void*                                                       vm_context;                                     //{ +0x0738    +0x08f0    +0x08f0    +0x08f0    } | .VmContext
        _m164 uint64_t                                                    sequence_number;                                //{ +0x0740    +0x08f8    +0x08f8    +0x08f8    } | .SequenceNumber
        _m165 uint64_t                                                    create_interrupt_time;                          //{ +0x0748    +0x0900    +0x0900    +0x0900    } | .CreateInterruptTime
        _m166 uint64_t                                                    create_unbiased_interrupt_time;                 //{ +0x0750    +0x0908    +0x0908    +0x0908    } | .CreateUnbiasedInterruptTime
        _m167 uint64_t                                                    total_unbiased_frozen_time;                     //{ +0x0758    +0x0910    +0x0910    +0x0910    } | .TotalUnbiasedFrozenTime
        _m168 uint64_t                                                    last_app_state_update_time;                     //{ +0x0760    +0x0918    +0x0918    +0x0918    } | .LastAppStateUpdateTime
        _m169 uint61_t                                                    last_app_state_uptime;                          //{ +0x0768@0  +0x0920@0  +0x0920@0  +0x0920@0  } | .LastAppStateUptime
        _m170 uint3_t                                                     last_app_state;                                 //{ +0x0768@61 +0x0920@61 +0x0920@61 +0x0920@61 } | .LastAppState
        _m171 volatile uint64_t                                           shared_commit_charge;                           //{ +0x0770    +0x0928    +0x0928    +0x0928    } | .SharedCommitCharge
        _m172 struct ex::push_lock_t                                      shared_commit_lock;                             //{ +0x0778    +0x0930    +0x0930    +0x0930    } | .SharedCommitLock
        _m173 nt::list_entry_t                                            shared_commit_links;                            //{ +0x0780    +0x0938    +0x0938    +0x0938    } | .SharedCommitLinks
        _m174 uint64_t                                                    allowed_cpu_sets;                               //{ +0x0790    +0x0948    +0x0948    +0x0948    } | .AllowedCpuSets
        _m175 uint64_t                                                    default_cpu_sets;                               //{ +0x0798    +0x0950    +0x0950    +0x0950    } | .DefaultCpuSets
        _m176 uint64_t*                                                   allowed_cpu_sets_indirect;                      //{ +0x0790    +0x0948    +0x0948    +0x0948    } | .AllowedCpuSetsIndirect
        _m177 uint64_t*                                                   default_cpu_sets_indirect;                      //{ +0x0798    +0x0950    +0x0950    +0x0950    } | .DefaultCpuSetsIndirect
        _m178 void*                                                       disk_io_attribution;                            //{ +0x07a0    +0x0958    +0x0958    +0x0958    } | .DiskIoAttribution
        _m179 void*                                                       dxg_process;                                    //{ +0x07b0    +0x0960    +0x0960    +0x0960    } | .DxgProcess
        _m180 uint64_t                                                    security_domain;                                //{ +0x07b8    +0x09e0    +0x09e0    +0x09e0    } | .SecurityDomain
                                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                         
        //                                                                                                              
        _m181 uint1_t                                                     background;                                     //{ +0x0304@20 +0x0464@20 +0x0464@20 } | .Background
                                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
        //                                                                                                              
        _m182 uint1_t                                                     pico_created;                                   //{ +0x0460@10 +0x0460@10 +0x0460@10 } | .PicoCreated
        _m183 uint1_t                                                     restrict_set_thread_context;                    //{ +0x0460@17 +0x0460@17 +0x0460@17 } | .RestrictSetThreadContext
        _m184 uint1_t                                                     enable_read_vm_logging;                         //{ +0x0460@24 +0x0460@24 +0x0460@24 } | .EnableReadVmLogging
        _m185 uint1_t                                                     enable_write_vm_logging;                        //{ +0x0460@25 +0x0460@25 +0x0460@25 } | .EnableWriteVmLogging
        _m186 uint1_t                                                     fatal_access_termination_requested;             //{ +0x0460@26 +0x0460@26 +0x0460@26 } | .FatalAccessTerminationRequested
        _m187 uint1_t                                                     disable_system_allowed_cpu_set;                 //{ +0x0460@27 +0x0460@27 +0x0460@27 } | .DisableSystemAllowedCpuSet
        _m188 uint1_t                                                     manage_executable_memory_writes;                //{ +0x0464@4  +0x0464@4  +0x0464@4  } | .ManageExecutableMemoryWrites
        _m189 uint64_t                                                    mm_reserved;                                    //{ +0x04c0    +0x04c0    +0x04c0    } | .MmReserved
        _m190 struct nt::ejob_t*                                          server_silo;                                    //{ +0x0870    +0x0870    +0x0870    } | .ServerSilo
        _m191 uint3_t                                                     ghost_count;                                    //{ +0x087b@3  +0x087b@3  +0x087b@3  } | .GhostCount
        _m192 uint1_t                                                     prefilter_exception;                            //{ +0x087b@6  +0x087b@6  +0x087b@6  } | .PrefilterException
        _m193 uint1_t                                                     system_process;                                 //{ +0x087c@12 +0x087c@12 +0x087c@12 } | .SystemProcess
        _m194 uint1_t                                                     hide_image_base_addresses;                      //{ +0x087c@13 +0x087c@13 +0x087c@13 } | .HideImageBaseAddresses
        _m195 uint1_t                                                     process_first_resume;                           //{ +0x087c@15 +0x087c@15 +0x087c@15 } | .ProcessFirstResume
        _m196 uint1_t                                                     foreground_external;                            //{ +0x087c@16 +0x087c@16 +0x087c@16 } | .ForegroundExternal
        _m197 uint1_t                                                     foreground_system;                              //{ +0x087c@17 +0x087c@17 +0x087c@17 } | .ForegroundSystem
        _m198 uint1_t                                                     high_memory_priority;                           //{ +0x087c@18 +0x087c@18 +0x087c@18 } | .HighMemoryPriority
        _m199 uint1_t                                                     enable_process_suspend_resume_logging;          //{ +0x087c@19 +0x087c@19 +0x087c@19 } | .EnableProcessSuspendResumeLogging
        _m200 uint1_t                                                     enable_thread_suspend_resume_logging;           //{ +0x087c@20 +0x087c@20 +0x087c@20 } | .EnableThreadSuspendResumeLogging
        _m201 uint1_t                                                     security_domain_changed;                        //{ +0x087c@21 +0x087c@21 +0x087c@21 } | .SecurityDomainChanged
        _m202 uint1_t                                                     security_freeze_complete;                       //{ +0x087c@22 +0x087c@22 +0x087c@22 } | .SecurityFreezeComplete
        _m203 uint1_t                                                     vm_processor_host;                              //{ +0x087c@23 +0x087c@23 +0x087c@23 } | .VmProcessorHost
        _m204 uint1_t                                                     vm_processor_host_transition;                   //{ +0x087c@24 +0x087c@24 +0x087c@24 } | .VmProcessorHostTransition
        _m205 uint1_t                                                     alt_syscall;                                    //{ +0x087c@25 +0x087c@25 +0x087c@25 } | .AltSyscall
        _m206 uint1_t                                                     timer_resolution_ignore;                        //{ +0x087c@26 +0x087c@26 +0x087c@26 } | .TimerResolutionIgnore
        _m207 void*                                                       enclave_table;                                  //{ +0x08c8    +0x08c8    +0x08c8    } | .EnclaveTable
        _m208 uint64_t                                                    enclave_number;                                 //{ +0x08d0    +0x08d0    +0x08d0    } | .EnclaveNumber
        _m209 struct ex::push_lock_t                                      enclave_lock;                                   //{ +0x08d8    +0x08d8    +0x08d8    } | .EnclaveLock
        _m210 struct po::process_energy_context_t*                        energy_context;                                 //{ +0x08e8    +0x08e8    +0x08e8    } | .EnergyContext
        _m211 uint32_t                                                    win32k_filter_set;                              //{ +0x0968    +0x0968    +0x0968    } | .Win32KFilterSet
        _m212 process_timer_delay_t                                       process_timer_delay;                            //{ +0x0970    +0x0970    +0x0970    } | .ProcessTimerDelay
        _m213 volatile uint32_t                                           k_timer_sets;                                   //{ +0x0978    +0x0978    +0x0978    } | .KTimerSets
        _m214 volatile uint32_t                                           k_timer2_sets;                                  //{ +0x097c    +0x097c    +0x097c    } | .KTimer2Sets
        _m215 volatile uint32_t                                           thread_timer_sets;                              //{ +0x0980    +0x0980    +0x0980    } | .ThreadTimerSets
        _m216 uint64_t                                                    virtual_timer_list_lock;                        //{ +0x0988    +0x0988    +0x0988    } | .VirtualTimerListLock
        _m217 nt::list_entry_t                                            virtual_timer_list_head;                        //{ +0x0990    +0x0990    +0x0990    } | .VirtualTimerListHead
        _m218 struct wnf::state_name_t                                    wake_channel;                                   //{ +0x09a0    +0x09a0    +0x09a0    } | .WakeChannel
        _m219 struct ps::process_wake_information_t                       wake_info;                                      //{ +0x09a0    +0x09a0    +0x09a0    } | .WakeInfo
        _m220 uint32_t                                                    mitigation_flags;                               //{ +0x09d0    +0x09d0    +0x09d0    } | .MitigationFlags
        _m253 u0_mitigation_flags_values_t                                mitigation_flags_values;                        //{ +0x09d0    +0x09d0    +0x09d0    } | .MitigationFlagsValues
        _m254 uint32_t                                                    mitigation_flags2;                              //{ +0x09d4    +0x09d4    +0x09d4    } | .MitigationFlags2
        _m287 u3_mitigation_flags2_values_t                               mitigation_flags2_values;                       //{ +0x09d4    +0x09d4    +0x09d4    } | .MitigationFlags2Values
        _m288 void*                                                       partition_object;                               //{ +0x09d8    +0x09d8    +0x09d8    } | .PartitionObject
        _m289 uint64_t                                                    parent_security_domain;                         //{ +0x09e8    +0x09e8    +0x09e8    } | .ParentSecurityDomain
        _m290 void*                                                       coverage_sampler_context;                       //{ +0x09f0    +0x09f0    +0x09f0    } | .CoverageSamplerContext
        _m291 void*                                                       mm_hot_patch_context;                           //{ +0x09f8    +0x09f8    +0x09f8    } | .MmHotPatchContext
        _m292 struct rtl::avl_tree_t                                      dynamic_eh_continuation_targets_tree;           //{ +0x0a00    +0x0b18    +0x0a00    } | .DynamicEHContinuationTargetsTree
        _m293 struct ex::push_lock_t                                      dynamic_eh_continuation_targets_lock;           //{ +0x0a08    +0x0b20    +0x0a08    } | .DynamicEHContinuationTargetsLock
                                                                                                                        
        // Windows 11, Windows 10 v20H2                                                                                 
        //                                                                                                              
        _m294 uint1_t                                                     disallow_user_terminate;                        //{ +0x087c@27 +0x087c@27 } | .DisallowUserTerminate
        _m295 struct ps::dynamic_enforced_address_ranges_t                dynamic_enforced_cet_compatible_ranges;         //{ +0x0b28    +0x0a10    } | .DynamicEnforcedCetCompatibleRanges
                                                                                                                        
        // Windows 10 v1607                                                                                             
        //                                                                                                              
        _m296 uint1_t                                                     disable_dynamic_code;                           //{ +0x0300@10 } | .DisableDynamicCode
        _m297 uint1_t                                                     stack_randomization_disabled;                   //{ +0x0300@17 } | .StackRandomizationDisabled
        _m298 uint1_t                                                     disallow_stripped_images;                       //{ +0x0300@24 } | .DisallowStrippedImages
        _m299 uint1_t                                                     high_entropy_aslr_enabled;                      //{ +0x0300@25 } | .HighEntropyASLREnabled
        _m300 uint1_t                                                     extension_point_disable;                        //{ +0x0300@26 } | .ExtensionPointDisable
        _m301 uint1_t                                                     force_relocate_images;                          //{ +0x0300@27 } | .ForceRelocateImages
        _m302 uint1_t                                                     disallow_win32k_system_calls;                   //{ +0x0300@31 } | .DisallowWin32kSystemCalls
        _m303 uint1_t                                                     control_flow_guard_enabled;                     //{ +0x0304@4  } | .ControlFlowGuardEnabled
        _m304 uint64_t                                                    working_set_page;                               //{ +0x0360    } | .WorkingSetPage
        _m305 void*                                                       ldt_information;                                //{ +0x03e8    } | .LdtInformation
        _m306 void*                                                       awe_info;                                       //{ +0x0408    } | .AweInfo
        _m307 uint1_t                                                     disable_non_system_fonts;                       //{ +0x06cc@2  } | .DisableNonSystemFonts
        _m308 uint1_t                                                     audit_non_system_font_loading;                  //{ +0x06cc@3  } | .AuditNonSystemFontLoading
        _m309 uint1_t                                                     prohibit_remote_image_map;                      //{ +0x06cc@11 } | .ProhibitRemoteImageMap
        _m310 uint1_t                                                     prohibit_low_il_image_map;                      //{ +0x06cc@12 } | .ProhibitLowILImageMap
        _m311 uint1_t                                                     signature_mitigation_opt_in;                    //{ +0x06cc@13 } | .SignatureMitigationOptIn
        _m312 uint1_t                                                     disable_dynamic_code_allow_opt_out;             //{ +0x06cc@14 } | .DisableDynamicCodeAllowOptOut
        _m313 uint1_t                                                     enable_filtered_win32k_ap_is;                   //{ +0x06cc@15 } | .EnableFilteredWin32kAPIs
        _m314 uint1_t                                                     audit_filtered_win32k_ap_is;                    //{ +0x06cc@16 } | .AuditFilteredWin32kAPIs
        _m315 uint1_t                                                     prefer_system32_images;                         //{ +0x06cc@17 } | .PreferSystem32Images
        _m316 uint1_t                                                     automatically_override_child_process_policy;    //{ +0x06cc@19 } | .AutomaticallyOverrideChildProcessPolicy
        _m317 uint1_t                                                     restrict_indirect_branch_prediction;            //{ +0x06cc@24 } | .RestrictIndirectBranchPrediction
        _m318 uint64_t                                                    trustlet_identity;                              //{ +0x0718    } | .TrustletIdentity
        _m319 uint32_t                                                    keep_alive_counter;                             //{ +0x0720    } | .KeepAliveCounter
        _m320 uint32_t                                                    no_wake_keep_alive_counter;                     //{ +0x0724    } | .NoWakeKeepAliveCounter
        _m321 struct nt::process_energy_values_t*                         energy_values;                                  //{ +0x0730    } | .EnergyValues
        _m322 uint32_t                                                    ready_time;                                     //{ +0x07a8    } | .ReadyTime
                                                                                                                        
        // Windows 11                                                                                                   
        //                                                                                                              
        _m323 uint1_t                                                     enable_process_remote_exec_protect_vm_logging;  //{ +0x087c@28 } | .EnableProcessRemoteExecProtectVmLogging
        _m324 uint1_t                                                     enable_process_local_exec_protect_vm_logging;   //{ +0x087c@29 } | .EnableProcessLocalExecProtectVmLogging
        _m325 uint1_t                                                     memory_compression_process;                     //{ +0x087c@30 } | .MemoryCompressionProcess
        _m326 uint16_t                                                    machine;                                        //{ +0x096c    } | .Machine
        _m327 struct ke::ideal_processor_assignment_block_t               ideal_processor_assignment_block;               //{ +0x0a00    } | .IdealProcessorAssignmentBlock
        _m328 uint32_t                                                    disabled_component_flags;                       //{ +0x0b38    } | .DisabledComponentFlags
        _m329 volatile int32_t                                            page_combine_sequence;                          //{ +0x0b3c    } | .PageCombineSequence
        _m330 struct ex::push_lock_t                                      enable_optional_x_state_features_lock;          //{ +0x0b40    } | .EnableOptionalXStateFeaturesLock
        _m331 uint32_t volatile*                                          path_redirection_hashes;                        //{ +0x0b48    } | .PathRedirectionHashes
        _m332 struct ps::syscall_provider_t*                              syscall_provider;                               //{ +0x0b50    } | .SyscallProvider
        _m333 nt::list_entry_t                                            syscall_provider_process_links;                 //{ +0x0b58    } | .SyscallProviderProcessLinks
        _m334 struct psp::syscall_provider_dispatch_context_t             syscall_provider_dispatch_context;              //{ +0x0b68    } | .SyscallProviderDispatchContext
        _m335 uint32_t                                                    mitigation_flags3;                              //{ +0x0b70    } | .MitigationFlags3
        _m338 u6_mitigation_flags3_values_t                               mitigation_flags3_values;                       //{ +0x0b70    } | .MitigationFlags3Values
                                                                                                                        
        SDK_MAGIC_PROPERTIES( "_EPROCESS.$", 0xa40, true, 0x7afe1184cb50090f );                                              
        SDK_DYNAMIC_SIZE( eprocess_t );                                                                                 
    };                                                                                                                  
};
#include "magic/eprocess_t.end.hpp"
SDK_VERIFY( struct nt::eprocess_t::u0_mitigation_flags_values_t, 0x4 );
SDK_VERIFY( struct nt::eprocess_t::u3_mitigation_flags2_values_t, 0x4 );
SDK_VERIFY( struct nt::eprocess_t::u6_mitigation_flags3_values_t, 0x4 );
