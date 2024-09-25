#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/acl_t.hpp"
#include "../nt/ejob_t.hpp"
#include "../nt/luid_t.hpp"
#include "../sec/descriptor_t.hpp"
#include "logon_session_references_t.hpp"

#include "magic/api.start.hpp"
namespace sep
{
    // [SepAppContainerAceProtectionApplies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x699098, 0x32828 bytes
    //
    _m00(sdk::unknown_ptr) app_container_ace_protection_applies;
    
    // [SepBuildDaclWithAllApplicationPackageSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x69910c, 0x32828 bytes
    //
    _m01(sdk::unknown_ptr) build_dacl_with_all_application_package_sid;
    
    // [SepBuildObjectSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6992b0, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) build_object_security_descriptor;
    
    // [SepCheckForAllAppPackagesAceRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x699488, 0x32828 bytes
    //
    _m03(sdk::unknown_ptr) check_for_all_app_packages_ace_removal;
    
    // [SepConstrainByTrust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xb1dac, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) constrain_by_trust;
    
    // [SepDereferenceLowBoxHandlesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3ed108, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) dereference_low_box_handles_entry;
    
    // [SepDereferenceLowBoxObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x3aa8, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) dereference_low_box_objects;
    
    // [SepDetermineGlobalTableCheckNeededForQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f1984, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) determine_global_table_check_needed_for_query;
    
    // [SepFinalizeTokenAcls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6683b4, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) finalize_token_acls;
    
    // [SepFindMatchingLowBoxHandlesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x2b78, 0x32828 bytes
    //
    _m09(sdk::unknown_ptr) find_matching_low_box_handles_entry;
    
    // [SepGetLowBoxHandlesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3e7d10, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) get_low_box_handles_entry;
    
    // [SepGetProcUniqueLuidAndIndexFromToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x21a7dc, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) get_proc_unique_luid_and_index_from_token;
    
    // [SepHasAllAppPackagesPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x699608, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) has_all_app_packages_present;
    
    // [SepInitQuerySigningPolicyExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x5716ac, 0x32828 bytes
    //
    _m13(sdk::unknown_ptr) init_query_signing_policy_ext;
    
    // [SepIsSandboxedToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ea674, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) is_sandboxed_token;
    
    // [SepLearningModeTokenCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd534c0, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) learning_mode_token_count;
    
    // [SepLUARids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x26d3c0, 0x32828 bytes
    //
    _m16(sdk::unknown_ptr) lua_rids;
    
    // [SepReferenceLowBoxObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd16a0, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) reference_low_box_objects;
    
    // [SepReleaseUnicodeStringArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3e2bc8, 0x32828 bytes
    //
    _m18(sdk::unknown_ptr) release_unicode_string_array;
    
    // [SepRmAcquireGlobalSaclReadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x21a2f4, 0x32828 bytes
    //
    _m19(sdk::unknown_ptr) rm_acquire_global_sacl_read_lock;
    
    // [SepRmReferenceCapTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x21b30c, 0x32828 bytes
    //
    _m20(sdk::unknown_ptr) rm_reference_cap_table;
    
    // [SepSetProcessTrustLabelAceForToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f2110, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) set_process_trust_label_ace_for_token;
    
    // [SepSetSqmObjectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x699a50, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) set_sqm_object_name;
    
    // [SepSetTokenLowboxHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x26c0, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) set_token_lowbox_handles;
    
    // [SepSqmInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x699b34, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) sqm_information;
    
    // [SepValidateReferencedLowBoxHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3e751c, 0x32828 bytes
    //
    _m25(sdk::unknown_ptr) validate_referenced_low_box_handles;
    
    // [SepAccessCheckAndAuditAlarmWithAdminlessChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6132d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5e1a20, 0x1fe000 bytes
    //
    _m26(sdk::unknown_ptr) access_check_and_audit_alarm_with_adminless_checks;
    
    // [SepCommonAccessCheckExWithAdminlessChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x36ece4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370064, 0x1fe000 bytes
    //
    _m27(sdk::unknown_ptr) common_access_check_ex_with_adminless_checks;
    
    // [SepIsAdminlessAuditModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x590ca4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590b24, 0x1fe000 bytes
    //
    _m28(sdk::unknown_ptr) is_adminless_audit_mode_enabled;
    
    // [SepIsAdminlessEnforcementModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x355544, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a7c4, 0x1fe000 bytes
    //
    _m29(sdk::unknown_ptr) is_adminless_enforcement_mode_enabled;
    
    // [SepIsSModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23c910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9110, 0x1fe000 bytes
    //
    _m30(sdk::unknown_ptr) is_s_mode_enabled;
    
    // [SepReferenceCachedHandlesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x922450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x920d20, 0x1fe000 bytes
    //
    _m31(sdk::unknown_ptr) reference_cached_handles_entry;
    
    // [SepReferenceLowBoxNumberEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x922450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x920d20, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) reference_low_box_number_entry;
    
    // [SepAdjustAccessStateForConstraints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x752864, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7387e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75a130, 0x1fe000 bytes
    //
    _m33(sdk::unknown_ptr) adjust_access_state_for_constraints;
    
    // [SepAllocateAndInitializeCachedHandleEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e9c74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79635c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678644, 0x1fe000 bytes
    //
    _m34(sdk::unknown_ptr) allocate_and_initialize_cached_handle_entry;
    
    // [SepCheckForCriticalAceRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b1e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fbfa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1a50, 0x1fe000 bytes
    //
    _m35(sdk::unknown_ptr) check_for_critical_ace_removal;
    
    // [SepCloseCachedTokenHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x203d68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2de958, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) close_cached_token_handles;
    
    // [SepConstrainByConstraintMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x256544, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334014, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305a84, 0x1fe000 bytes
    //
    _m37(sdk::unknown_ptr) constrain_by_constraint_mask;
    
    // [SepCopyAnonymousTokenAndSetSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9196a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bcf50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917eb0, 0x1fe000 bytes
    //
    _m38(sdk::unknown_ptr) copy_anonymous_token_and_set_silo;
    
    // [SepDereferenceCachedHandlesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e779c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee66c, 0x1fe000 bytes
    //
    _m39(sdk::unknown_ptr) dereference_cached_handles_entry;
    
    // [SepDesktopAppModifyTokenBreakaway]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5903f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204d2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590274, 0x1fe000 bytes
    //
    _m40(sdk::unknown_ptr) desktop_app_modify_token_breakaway;
    
    // [SepFilterCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2ec4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2922d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20a2b0, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) filter_check;
    
    // [SepFilterToDiscretionary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x217c34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ec14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204a48, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) filter_to_discretionary;
    
    // [SepFindMatchingCachedHandlesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e93c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677d98, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) find_matching_cached_handles_entry;
    
    // [SepFindMatchingLowBoxNumberEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e9704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x795358, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6780d4, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) find_matching_low_box_number_entry;
    
    // [SepFindMatchingLuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x921748, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4d28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920018, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) find_matching_luid_entry;
    
    // [SepGetCachedHandlesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e92e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794fe4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677cb4, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) get_cached_handles_entry;
    
    // [SepGetProcUniqueLuidAndIndexFromTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x591810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4654, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591690, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) get_proc_unique_luid_and_index_from_token_ex;
    
    // [SepGetStackTraceHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x590140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2fc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58ffc0, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) get_stack_trace_hash;
    
    // [SepGetSystemSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c7c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7870, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) get_system_signing_level;
    
    // [SepHasCriticalAcesRemoved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e64c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7385e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68dacc, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) has_critical_aces_removed;
    
    // [SepIsDeviceOwnerProtectionDowngradeAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x590cb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3ad4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590b38, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) is_device_owner_protection_downgrade_allowed;
    
    // [SepIsLpacCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66113c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d45dc, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) is_lpac_capability_sid;
    
    // [SepLearningModeSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54330, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc542b8, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) learning_mode_settings;
    
    // [SepLogLpacAccessFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x590258, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a30f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5900d8, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) log_lpac_access_failure;
    
    // [SepLogUnmatchedSessionFlagImpersonationAttempt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5912e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4118, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591168, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) log_unmatched_session_flag_impersonation_attempt;
    
    // [SepLpacCausedAccessFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26788c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378f48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31884c, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) lpac_caused_access_failure;
    
    // [SepNumberOfUwpAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9805a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee7c, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) number_of_uwp_attributes;
    
    // [SepNumberOfValidAttributesTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x98059c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6403c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee80, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) number_of_valid_attributes_types;
    
    // [SepReferenceCachedTokenHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x203cd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3451c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2de8c8, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) reference_cached_token_handles;
    
    // [SepReleaseTokenSecurityAttributesAndOperationsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee76c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6feb5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f75d4, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) release_token_security_attributes_and_operations_information;
    
    // [SepRmDereferenceCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219acc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5903a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590220, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) rm_dereference_cap;
    
    // [SepRmSetSharedUserSessionWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x920bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f480, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) rm_set_shared_user_session_wrkr;
    
    // [SepSetRuntimeUpdatableSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b68d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be4b0, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) set_runtime_updatable_signing_level;
    
    // [SepSetTokenBnoIsolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b61c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ef8ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339b0c, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) set_token_bno_isolation;
    
    // [SepSetTokenCachedHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e9124, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677af4, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) set_token_cached_handles;
    
    // [SepUwpAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x982700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa662f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980fe0, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) uwp_attributes;
    
    // [SepValidAttributesTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x981d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa659b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980630, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) valid_attributes_types;
    
    // [SepValidateReferencedCachedHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e97c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678190, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) validate_referenced_cached_handles;
    
    // [SepVerifyDesktopAppPolicyOverrideCaller]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x590480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382bec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590300, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) verify_desktop_app_policy_override_caller;
    
    // [SepZwLockRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be990, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) zw_lock_registry_key;
    
    // [SepAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe3740, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ecc10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cd490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20a9f0, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) access_check;
    
    // [SepAccessCheckAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4703e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61320c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6988e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e1730, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) access_check_and_audit_alarm;
    
    // [SepAccessCheckEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134460, 0x32828 bytes
    // ntoskrnl.exe .text:0x36f430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3707b0, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) access_check_ex;
    
    // [SepAcquireOrderedReadLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2950, 0x32828 bytes
    // ntoskrnl.exe .text:0x255d28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3050c8, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) acquire_ordered_read_locks;
    
    // [SepAddLuidToIndexEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412adc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3ad8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fde38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f72e4, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) add_luid_to_index_entry;
    
    // [SepAddTokenLogonSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697e3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ee20, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) add_token_logon_session;
    
    // [SepAddTokenOriginClaim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697408, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91fb70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e440, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) add_token_origin_claim;
    
    // [SepAdjustGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e92c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f6bc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0a2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675838, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) adjust_groups;
    
    // [SepAdjustPrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f8c88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66fcc0, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) adjust_privileges;
    
    // [SepAdtAuditFailureCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34269c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4d84, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d84, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) adt_audit_failure_count;
    
    // [SepAdtAuditFailureEventLogged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3591f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b65c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e10, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) adt_audit_failure_event_logged;
    
    // [SepAdtAuditObjectAccessWithContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471500, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x699dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2dc0, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) adt_audit_object_access_with_context;
    
    // [SepAdtAuditPrivilegeUseWithContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c68a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x699f7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e31c0, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) adt_audit_privilege_use_with_context;
    
    // [SepAdtAuditThisEventByCategoryWithContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c69b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69a0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e3310, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) adt_audit_this_event_by_category_with_context;
    
    // [SepAdtAuditThisEventWithContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69a020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e3290, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) adt_audit_this_event_with_context;
    
    // [SepAdtAuditablePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219f44, 0x32828 bytes
    // ntoskrnl.exe .text:0x590cfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3b1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590b7c, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) adt_auditable_privilege;
    
    // [SepAdtCheckPrivilegeForSensitivity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a0fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x590ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590d40, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) adt_check_privilege_for_sensitivity;
    
    // [SepAdtClassifyObjectIntoSubCategory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6951d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d9b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8926e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c280, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) adt_classify_object_into_sub_category;
    
    // [SepAdtCloseObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69340c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91bb28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bf358, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91a3f8, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) adt_close_object_audit_alarm;
    
    // [SepAdtCopyToLsaSharedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a564, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x922474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c5944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920d44, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) adt_copy_to_lsa_shared_memory;
    
    // [SepAdtCountEventsDiscarded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3591f4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e14, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e14, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) adt_count_events_discarded;
    
    // [SepAdtCrashOnAuditFailWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301ba0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d420, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36ea0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d460, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) adt_crash_on_audit_fail_work_item;
    
    // [SepAdtDeleteObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x693608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91bd54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bf584, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91a624, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) adt_delete_object_audit_alarm;
    
    // [SepAdtDetermineInsertQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1488a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c6410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e14f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c72e0, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) adt_determine_insert_queue;
    
    // [SepAdtDiscardingAudits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3426a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4d88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d88, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) adt_discarding_audits;
    
    // [SepAdtGenerateDiscardAudit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69383c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91bfb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bf7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91a880, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) adt_generate_discard_audit;
    
    // [SepAdtIncorporatePerUserPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695314, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91dabc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c11d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c38c, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) adt_incorporate_per_user_policy;
    
    // [SepAdtInitLsaDeadEventForNonPagedList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219284, 0x32828 bytes
    // ntoskrnl.exe .text:0x58f8f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a299c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58f770, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) adt_init_lsa_dead_event_for_non_paged_list;
    
    // [SepAdtInitializeAuditingOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a904, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa64dec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4fa10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa644cc, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) adt_initialize_auditing_options;
    
    // [SepAdtInitializeBounds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556b04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79ea34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8506e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6c54, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) adt_initialize_bounds;
    
    // [SepAdtInitializeCrashOnFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556b80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79eb18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84fd64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6d38, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) adt_initialize_crash_on_fail;
    
    // [SepAdtInitializePrivilegeAuditing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556bd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79eab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x850688, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6cd8, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) adt_initialize_privilege_auditing;
    
    // [SepAdtIoStatusBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341f60, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4350, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ce0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4350, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) adt_io_status_block;
    
    // [SepAdtLastAuditFailStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa8e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12b74, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0db74, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12be8, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) adt_last_audit_fail_status;
    
    // [SepAdtLogAuditFailureEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x693928, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91c0a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bf8c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91a974, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) adt_log_audit_failure_event;
    
    // [SepAdtLogAuditRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143468, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bc680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0e6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bd3c0, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) adt_log_audit_record;
    
    // [SepAdtLsaRegWatchWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341f70, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4360, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16cf0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4360, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) adt_lsa_reg_watch_work_item;
    
    // [SepAdtMarshallAuditRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1435e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bc7cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bd50c, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) adt_marshall_audit_record;
    
    // [SepAdtMaxListLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f35c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09a20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f3b0, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) adt_max_list_length;
    
    // [SepAdtMinListLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f1c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f358, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09a24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f3b4, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) adt_min_list_length;
    
    // [SepAdtObjectReferenceAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x693b14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91c29c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bfabc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ab6c, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) adt_object_reference_audit_alarm;
    
    // [SepAdtOpenEtwReadyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5577a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79ec04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84fdc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6e24, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) adt_open_etw_ready_event;
    
    // [SepAdtOpenObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x693d3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91c4c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bfce8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ad98, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) adt_open_object_audit_alarm;
    
    // [SepAdtOpenObjectForDeleteAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6945d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91cd50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c0584, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91b620, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) adt_open_object_for_delete_audit_alarm;
    
    // [SepAdtOpenRegAndSetupNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556d08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79eb78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84fe58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6d98, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) adt_open_reg_and_setup_notification;
    
    // [SepAdtPrivilegeObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x699ebc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e30fc, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) adt_privilege_object_audit_alarm;
    
    // [SepAdtPrivilegedServiceAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c67fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614958, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bd474, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2fe0, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) adt_privileged_service_audit_alarm;
    
    // [SepAdtRegNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556aa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84fd00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6bf0, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) adt_reg_notification_callback;
    
    // [SepAdtRegNotifyHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0a0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51098, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0b0, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) adt_reg_notify_handle;
    
    // [SepAdtSecurityDescriptorChangedAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69481c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91cf8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c07c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91b85c, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) adt_security_descriptor_changed_audit_alarm;
    
    // [SepAdtStagingEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x694aa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c0a6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91bb00, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) adt_staging_event;
    
    // [SepAdtTokenRightAdjusted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f91f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684de4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x751490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x670214, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) adt_token_right_adjusted;
    
    // [SepAllowAccessUponLogoff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9abc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11dd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c890, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11e30, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) allow_access_upon_logoff;
    
    // [SepAllowAllApplicationAceRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1f8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1e8, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) allow_all_application_ace_removal;
    
    // [SepAllowSessionImpersonationCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1fc, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1ec, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) allow_session_impersonation_cap;
    
    // [SepAppendAceToTokenDefaultDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x268a74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344fa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319c44, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) append_ace_to_token_default_dacl;
    
    // [SepAppendAceToTokenObjectAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9310, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6136b0, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) append_ace_to_token_object_acl;
    
    // [SepAppendAdminAceToTokenAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ed0f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e99b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec848, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) append_admin_ace_to_token_acl;
    
    // [SepAppendDefaultDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec3ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e5bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7962fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e16c8, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) append_default_dacl;
    
    // [SepAppendPrimaryGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6919c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919afc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd40c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91830c, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) append_primary_group;
    
    // [SepAssemblePrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492548, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4e44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c57c0, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) assemble_privileges;
    
    // [SepAtomSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b880, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d458, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd54058, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d480, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) atom_sd;
    
    // [SepAuditAssignPrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570324, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b6c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84ed7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2c48, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) audit_assign_primary_token;
    
    // [SepAuditFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a62c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x922540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c5a10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920e10, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) audit_failed;
    
    // [SepAuditFailedRaisedIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b13c, 0x32828 bytes
    // ntoskrnl.exe .text:0x591ca8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4a44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591b28, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) audit_failed_raised_irql;
    
    // [SepAuditTypeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6964b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91ecc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2188, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91d594, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) audit_type_list;
    
    // [SepAuditingEnabledForSubcategory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeeef0, 0x32828 bytes
    // ntoskrnl.exe .text:0x217760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ed00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2055a0, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) auditing_enabled_for_subcategory;
    
    // [SepAuditingForSubCategory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x82e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d60c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d78ec, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) auditing_for_sub_category;
    
    // [SepAuthExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302108, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d990, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37408, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d9c0, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) auth_extension_host;
    
    // [SepBCryptExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302110, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d988, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d9c8, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) b_crypt_extension_host;
    
    // [SepBlockAccessForLogonSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75c8cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76431c, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) block_access_for_logon_session;
    
    // [SepBuildCapPolicyTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e194, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c671c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e248c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c75ec, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) build_cap_policy_table;
    
    // [SepBuildCapeSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21990c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58ff9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fe1c, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) build_cape_security_descriptor;
    
    // [SepBuildDefaultCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56b7d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae784, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8646d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b63a4, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) build_default_cap;
    
    // [SepBuildDefaultCape]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1481f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c5b0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0dec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c69dc, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) build_default_cape;
    
    // [SepCanTokenMatchAllPackageSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0470, 0x32828 bytes
    // ntoskrnl.exe .text:0x23bba8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ebecc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2052a8, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) can_token_match_all_package_sid;
    
    // [SepCaptureAuditPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695390, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91db24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c3f4, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) capture_audit_policy;
    
    // [SepCaptureFqbnArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91dbdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c12fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c4ac, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) capture_fqbn_array;
    
    // [SepCaptureHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1a94, 0x32828 bytes
    // ntoskrnl.exe .text:0x26dbd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31f2c4, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) capture_handles;
    
    // [SepCaptureInt64Array]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ecc0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f97c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c34f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2f3c, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) capture_int64_array;
    
    // [SepCaptureOctetStringArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91de14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1534, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c6e4, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) capture_octet_string_array;
    
    // [SepCaptureTokenSecurityAttributesAndOperationsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6edfa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2da8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x650ebc, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) capture_token_security_attributes_and_operations_information;
    
    // [SepCaptureTokenSecurityAttributesInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec7a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ee124, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x651038, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) capture_token_security_attributes_information;
    
    // [SepCaptureTokenSecurityOperations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3784, 0x32828 bytes
    // ntoskrnl.exe .text:0x354dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d704, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2310, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) capture_token_security_operations;
    
    // [SepCaptureUnicodeStringArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b33f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe5f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x609a20, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) capture_unicode_string_array;
    
    // [SepCheckAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec2f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f71b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ffb6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674fb0, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) check_acl;
    
    // [SepCheckAndCopySelfRelativeSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219f98, 0x32828 bytes
    // ntoskrnl.exe .text:0x590d58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3b78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590bd8, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) check_and_copy_self_relative_sd;
    
    // [SepCheckCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e2318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660fc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2ddc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4464, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) check_capabilities;
    
    // [SepCheckCreateLowBox]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3e98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794c24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8c74, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) check_create_low_box;
    
    // [SepCleanupLUIDDeviceMapDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53a85c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65eec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80c1a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d25c4, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) cleanup_luid_device_map_directory;
    
    // [SepCleanupMarkedForDeletionEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71c94, 0x32828 bytes
    // ntoskrnl.exe .text:0x20b748, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3452b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339c38, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) cleanup_marked_for_deletion_entries;
    
    // [SepCommonAccessCheckEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x36ecac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x333820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37002c, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) common_access_check_ex;
    
    // [SepCompareClaimAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8af4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653c3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ff2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7efc, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) compare_claim_attributes;
    
    // [SepCompareSidAndAttributeArrays]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8b54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653c94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ff84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7f54, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) compare_sid_and_attribute_arrays;
    
    // [SepCompareSidValuesBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697498, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91fc08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2ff4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e4d8, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) compare_sid_values_blocks;
    
    // [SepComputeSidSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8f80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e97a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7953fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678174, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) compute_sid_signature;
    
    // [SepConcatenatePrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47b104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64c038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a9e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb7c8, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) concatenate_privileges;
    
    // [SepConstrainByMandatory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1de8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2572a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334404, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306a08, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) constrain_by_mandatory;
    
    // [SepConvertToOwnTokenClaims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x265bb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3405cc, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) convert_to_own_token_claims;
    
    // [SepConvertTokenPrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9950, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d2b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7590, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) convert_token_privileges;
    
    // [SepConvertTokenPrivilegesToLuidAndAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9970, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d2e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303b54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d75c0, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) convert_token_privileges_to_luid_and_attributes;
    
    // [SepCopyClientTokenAndSetSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69187c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919808, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd124, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918018, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) copy_client_token_and_set_silo;
    
    // [SepCopyObjectTypeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2199ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x590040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2ec4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fec0, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) copy_object_type_list;
    
    // [SepCopyTokenAccessInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x476c48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64327c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9a74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6721d0, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) copy_token_access_information;
    
    // [SepCopyTokenIntegrity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe03a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d368, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303cfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7648, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) copy_token_integrity;
    
    // [SepCrashOnAuditFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a2e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54538, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54508, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) crash_on_audit_fail;
    
    // [SepCreateAccessStateFromSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xef210, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cd210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206730, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) create_access_state_from_subject_context;
    
    // [SepCreateClaimAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea478, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f7298, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca158, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673b18, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) create_claim_attributes;
    
    // [SepCreateClientSecurityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b29a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b3a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60a030, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) create_client_security_ex;
    
    // [SepCreateImpersonationTokenDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d2380, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aeef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a060c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x605520, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) create_impersonation_token_dacl;
    
    // [SepCreateLogonSessionTrack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499704, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65bc0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8113ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cf90c, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) create_logon_session_track;
    
    // [SepCreateSidValuesBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697538, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91fcb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c309c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e580, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) create_sid_values_block;
    
    // [SepCreateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55fcf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78fae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82eadc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6298, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) create_token;
    
    // [SepCreateTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2ce8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35944c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28f6e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d874c, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) create_token_ex;
    
    // [SepDeReferenceLogonSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498240, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65ebf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80bd58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d22f0, 0x1fe000 bytes
    //
    _n85(sdk::function<void(struct nt::luid_t*, struct nt::ejob_t*)>*) de_reference_logon_session;
    
    // [SepDeReferenceLogonSessionDirect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3898, 0x32828 bytes
    // ntoskrnl.exe .text:0x265b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375f88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x340594, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) de_reference_logon_session_direct;
    
    // [SepDeReferenceSharedSidEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x699ea8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921b54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c50b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920424, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) de_reference_shared_sid_entries;
    
    // [SepDefaultCapeDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74adc0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53690, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8e0, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) default_cape_dacl;
    
    // [SepDefaultCapeSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b858, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d3e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd54030, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d430, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) default_cape_sd;
    
    // [SepDefaultMandatorySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c3a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64498, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c388, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) default_mandatory_sid;
    
    // [SepDefaultRecoveryCapeDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac30, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c768, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53508, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c768, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) default_recovery_cape_dacl;
    
    // [SepDefaultRecoveryCapeSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b830, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d480, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd54008, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d458, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) default_recovery_cape_sd;
    
    // [SepDeleteAccessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xef090, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e87b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cc4d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206590, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) delete_access_state;
    
    // [SepDeleteClaimAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x699fb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c518c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920500, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) delete_claim_attributes;
    
    // [SepDeleteLogonSessionClaims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65eea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80c078, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d25a0, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) delete_logon_session_claims;
    
    // [SepDeleteLogonSessionSidValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6976a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91fe28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c321c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e6f8, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) delete_logon_session_sid_values;
    
    // [SepDeleteLogonSessionTrack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522e24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80bf10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765420, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) delete_logon_session_track;
    
    // [SepDeleteSessionLowboxEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfc78, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cfa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397d08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d6f4, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) delete_session_lowbox_entries;
    
    // [SepDeleteTokenUserAndGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6976d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91fe58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c324c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e728, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) delete_token_user_and_groups;
    
    // [SepDeleteUnreferencedLogonSessionsInSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697f2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92064c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ef1c, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) delete_unreferenced_logon_sessions_in_silo;
    
    // [SepDereferenceLowBoxNumberEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ed2a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e7658, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796884, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee528, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) dereference_low_box_number_entry;
    
    // [SepDereferenceLuidToIndexEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71ed0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e194, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d5e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231324, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) dereference_luid_to_index_entry;
    
    // [SepDereferenceSidValuesBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91fee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c32d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e7b0, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) dereference_sid_values_block;
    
    // [SepDesktopAppxSubProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x718c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x20b228, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0e74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339718, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) desktop_appx_sub_process_token;
    
    // [SepDuplicateClaimAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a034, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921cb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c5214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920588, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) duplicate_claim_attributes;
    
    // [SepDuplicateLogonSessionReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1a44, 0x32828 bytes
    // ntoskrnl.exe .text:0x2709ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345168, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33fe10, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) duplicate_logon_session_reference;
    
    // [SepDuplicateSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a0c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb4fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66aba8, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) duplicate_sid;
    
    // [SepDuplicateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40c920, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aac10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c2ad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6010d0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) duplicate_token;
    
    // [SepDuplicateTokenClaims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a23c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921ec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892c4a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920794, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) duplicate_token_claims;
    
    // [SepDuplicateTokenUserAndGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6977a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91ff3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e80c, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) duplicate_token_user_and_groups;
    
    // [SepEqualAsciiWideStringCaseInSensitive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f8b0, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) equal_ascii_wide_string_case_in_sensitive;
    
    // [SepExamineGlobalSaclEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a180, 0x32828 bytes
    // ntoskrnl.exe .text:0x590f58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3d7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590dd8, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) examine_global_sacl_ex;
    
    // [SepExamineSaclEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696558, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91ed70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2234, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91d640, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) examine_sacl_ex;
    
    // [SepExpandDynamic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec48c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e668, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x795418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e1774, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) expand_dynamic;
    
    // [SepExpandSingletonArrays]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110ec4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c8b28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3850a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c99f8, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) expand_singleton_arrays;
    
    // [SepExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b230, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ccb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd539f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ccb0, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) exports;
    
    // [SepFileTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25d1d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x97f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xac68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x97d8, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) file_type_name;
    
    // [SepFilterPrivilegeAudits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485b3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6162f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cb3d0, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) filter_privilege_audits;
    
    // [SepFilterPrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a278, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51268, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2b8, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) filter_privileges;
    
    // [SepFilterPrivilegesLong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6edeb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9826c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa662b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980fa0, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) filter_privileges_long;
    
    // [SepFilterPrivilegesShort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed270, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa652f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ff60, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) filter_privileges_short;
    
    // [SepFilterToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e59d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f9e14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79554c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x702bd4, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) filter_token;
    
    // [SepFindMatchingLowBoxNumberEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e2438, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c542c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920804, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) find_matching_low_box_number_entries;
    
    // [SepFindSharedSidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a2a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92200c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c551c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9208dc, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) find_shared_sid_entry;
    
    // [SepFlattenAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21aa74, 0x32828 bytes
    // ntoskrnl.exe .text:0x5906ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a34d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59052c, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) flatten_acl;
    
    // [SepFreeCapturedTokenSecurityAttributesInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec56c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ee7ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8f84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f7614, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) free_captured_token_security_attributes_information;
    
    // [SepFreeDefaultDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec448, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e61c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x795500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e1728, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) free_default_dacl;
    
    // [SepFreePrimaryGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691a28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919b68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd478, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918378, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) free_primary_group;
    
    // [SepFreeResourceInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb183c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d722c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ec58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25829c, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) free_resource_info;
    
    // [SepFreeTokenCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc87d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x350568, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375ccc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2336f8, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) free_token_capabilities;
    
    // [SepGetAnonymousToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x203a2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344c6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2de61c, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) get_anonymous_token;
    
    // [SepGetCurrentLogLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21abc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x590800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a362c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590680, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) get_current_log_level;
    
    // [SepGetDefaultsSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6958a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c908, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) get_defaults_subject_context;
    
    // [SepGetLearningModeObjectInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21abe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x59082c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3658, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5906ac, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) get_learning_mode_object_information;
    
    // [SepGetLogonSessionAccountInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55f1a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79a650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84b0f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1bdc, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) get_logon_session_account_info;
    
    // [SepGetLowBoxNumberEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8e2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e95d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x795224, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677fa8, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) get_low_box_number_entry;
    
    // [SepGetProcUniqueLuidAndIndexFromAttributeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a72c, 0x32828 bytes
    // ntoskrnl.exe .text:0x591748, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a458c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5915c8, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) get_proc_unique_luid_and_index_from_attribute_info;
    
    // [SepGetScopedPolicySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219a60, 0x32828 bytes
    // ntoskrnl.exe .text:0x5900f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2f7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58ff78, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) get_scoped_policy_sid;
    
    // [SepGetSidManagementActionName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x699598, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919e28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd714, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918638, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) get_sid_management_action_name;
    
    // [SepGetSidValuesDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21af94, 0x32828 bytes
    // ntoskrnl.exe .text:0x590bd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3a08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590a58, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) get_sid_values_dump;
    
    // [SepGetSingletonEntryFromIndexNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70374, 0x32828 bytes
    // ntoskrnl.exe .text:0x20ae24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2488, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339314, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) get_singleton_entry_from_index_number;
    
    // [SepGetTokenAccessInformationBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x476ed0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x643508, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9e24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67245c, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) get_token_access_information_buffer_size;
    
    // [SepGetTokenSessionMapEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b058, 0x32828 bytes
    // ntoskrnl.exe .text:0x591bc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591a48, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) get_token_session_map_entry;
    
    // [SepIdAssignableAsGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c9c0, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) id_assignable_as_group;
    
    // [SepIdAssignableAsOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488c68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658cbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b974c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc58c, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) id_assignable_as_owner;
    
    // [SepImageVerificationCallbackPreProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0f24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a1b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711c00, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) image_verification_callback_pre_process;
    
    // [SepImageVerificationCallbackWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1888, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7545a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75be60, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) image_verification_callback_worker;
    
    // [SepImportantProcessSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b108, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53938, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbd8, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) important_process_sd;
    
    // [SepInformFileSystemsOfDeletedLogon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b1c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920774, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3c7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f044, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) inform_file_systems_of_deleted_logon;
    
    // [SepInformLsaOfDeletedLogon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65edac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80c108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d24ac, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) inform_lsa_of_deleted_logon;
    
    // [SepInitProcessAuditSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x141c88, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b7b54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2458, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf5dc, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) init_process_audit_sd;
    
    // [SepInitSingletonEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70334, 0x32828 bytes
    // ntoskrnl.exe .text:0x20adc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2424, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3392b0, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) init_singleton_entry;
    
    // [SepInitSystemDacls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79e034, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa62094, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb341f4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa63bbc, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) init_system_dacls;
    
    // [SepInitializationPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79b4b4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5f194, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb314b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa60cbc, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) initialization_phase0;
    
    // [SepInitializationPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55f2ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78f1ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82e728, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a5958, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) initialization_phase1;
    
    // [SepInitializeAuthorizationCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79b598, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5f6d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f130, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61200, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) initialize_authorization_callbacks;
    
    // [SepInitializeCodeIntegrity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55fc00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78f9dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82e9d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a618c, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) initialize_code_integrity;
    
    // [SepInitializeDebugOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6070, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6d458, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb59200, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6cc28, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) initialize_debug_options;
    
    // [SepInitializeLowBoxNumberTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x771ac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7794c8, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) initialize_low_box_number_table;
    
    // [SepInitializeSharedSidMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55ff00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78fd0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ed5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a64bc, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) initialize_shared_sid_map;
    
    // [SepInitializeSingletonAttributesStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a7d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5f274, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb32040, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa60d9c, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) initialize_singleton_attributes_structures;
    
    // [SepInitializeWorkList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79c914, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa60270, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb32158, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61d98, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) initialize_work_list;
    
    // [SepInsertOrReferenceSharedSidEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a32c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9220ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c55bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92097c, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) insert_or_reference_shared_sid_entries;
    
    // [SepInternalFillNoAttribs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a880, 0x32828 bytes
    // ntoskrnl.exe .text:0x5918c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4704, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591740, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) internal_fill_no_attribs;
    
    // [SepInternalQuerySecurityAttributesTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0690, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d88d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f1600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259940, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) internal_query_security_attributes_token_ex;
    
    // [SepInternalSetSecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2195a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x58fc14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377774, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fa94, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) internal_set_security_attributes_token;
    
    // [SepIsAclEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69adec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92260c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4e78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920edc, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) is_acl_equal;
    
    // [SepIsCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1ad8, 0x32828 bytes
    // ntoskrnl.exe .text:0x23bac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28f174, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205c40, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) is_capability_sid;
    
    // [SepIsChildTokenByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e889c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65374c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77fd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7a0c, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) is_child_token_by_pointer;
    
    // [SepIsImageInMinTcbList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4d50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6613b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x763b8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4a98, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) is_image_in_min_tcb_list;
    
    // [SepIsImpersonationAllowedDueToCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44523c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec95c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc3f0, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) is_impersonation_allowed_due_to_capability;
    
    // [SepIsLockedDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6911e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91903c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bc8ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91784c, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) is_locked_down;
    
    // [SepIsMinTCB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3af8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61bd1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7639a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e564, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) is_min_tcb;
    
    // [SepIsNgenImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4cb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6608f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7668a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ea1c, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) is_ngen_image;
    
    // [SepIsOptionPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55fcb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78fa9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ea90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a624c, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) is_option_present;
    
    // [SepIsPackageSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1108, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ba64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28f68c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205c9c, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) is_package_sid;
    
    // [SepIsParentOfChildAppContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49a48c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9222c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c57b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920b94, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) is_parent_of_child_app_container;
    
    // [SepIsRemovableStorageDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ae2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x922654, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920f24, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) is_removable_storage_device;
    
    // [SepIsSiblingTokenByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8924, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653658, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77fe2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7918, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) is_sibling_token_by_pointer;
    
    // [SepIsSidEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ae60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92268c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4ef8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920f5c, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) is_sid_equal;
    
    // [SepIsValidProcUniqueLuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698e74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9217e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4dc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9200b4, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) is_valid_proc_unique_luid;
    
    // [SepLengthSidAndAttributesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e9efc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f8018, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6734f8, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) length_sid_and_attributes_array;
    
    // [SepLinkLogonSessions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c04, 0x32828 bytes
    // ntoskrnl.exe .text:0x265914, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dfc94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x340328, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) link_logon_sessions;
    
    // [SepLoadNgenLocations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3598, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ab134, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8613b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b2ab4, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) load_ngen_locations;
    
    // [SepLocalServicePublicSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b808, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53fb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d368, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) local_service_public_sd;
    
    // [SepLocateTokenIntegrity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf271c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d6f38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303d2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x257fa8, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) locate_token_integrity;
    
    // [SepLocateTokenTrustLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf26d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d6ee8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x257f58, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) locate_token_trust_level;
    
    // [SepLogTokenSidManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69970c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919ea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9186b4, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) log_token_sid_management;
    
    // [SepLogonSessions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74abb0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53498, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6f8, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) logon_sessions;
    
    // [SepLsaAuditQueueInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54450, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70b20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54420, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) lsa_audit_queue_info;
    
    // [SepLsaDeletedLogonQueueInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54340, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc542d0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) lsa_deleted_logon_queue_info;
    
    // [SepMakeLogonSessionsSiblings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69804c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9207fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f0cc, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) make_logon_sessions_siblings;
    
    // [SepMakeTokenEffectiveOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6515a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6f0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4ef8, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) make_token_effective_only;
    
    // [SepMandatoryIntegrityCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe32e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ec020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2924d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x209e00, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) mandatory_integrity_check;
    
    // [SepMandatoryObjectTypePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301e00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d680, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37100, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d6c0, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) mandatory_object_type_policy;
    
    // [SepMandatoryObjectTypePolicyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a1e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54428, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70b04, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543f8, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) mandatory_object_type_policy_count;
    
    // [SepMandatoryObjectTypePolicyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302100, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc370e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d6a8, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) mandatory_object_type_policy_lock;
    
    // [SepMandatorySubProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71740, 0x32828 bytes
    // ntoskrnl.exe .text:0x20b09c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33958c, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) mandatory_sub_process_token;
    
    // [SepMandatoryToDiscretionary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb195c, 0x32828 bytes
    // ntoskrnl.exe .text:0x217c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ec30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204a64, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) mandatory_to_discretionary;
    
    // [SepMatchCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc64d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23bc8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36bfa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306d9c, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) match_capability;
    
    // [SepMatchPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x23bb1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ebe40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20521c, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) match_package;
    
    // [SepMaximumAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe1350, 0x32828 bytes
    // ntoskrnl.exe .text:0x23b430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x290350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205d00, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) maximum_access_check;
    
    // [SepMaximumAccessCheckEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131684, 0x32828 bytes
    // ntoskrnl.exe .text:0x36f834, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3970e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x370bb4, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) maximum_access_check_ex;
    
    // [SepMediumDaclSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b7e0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d3b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53f68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d390, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) medium_dacl_sd;
    
    // [SepMergeObjectTypeListAccesses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59036c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3204, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5901ec, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) merge_object_type_list_accesses;
    
    // [SepModifyTokenPolicyCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691a80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919bc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd4d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9183d8, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) modify_token_policy_counter;
    
    // [SepNewTokenAsRestrictedAsProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8390, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe7dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f9d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b7bc, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) new_token_as_restricted_as_process_token;
    
    // [SepNormalAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe20d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2eabf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cdd70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2089d0, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) normal_access_check;
    
    // [SepNormalAccessCheckEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1347b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36f95c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33447c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x370cdc, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) normal_access_check_ex;
    
    // [SepNotifyFileSystems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f260, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) notify_file_systems;
    
    // [SepNullDaclSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b7b8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d390, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d3b8, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) null_dacl_sd;
    
    // [SepOsLoaderTpmDriverLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0c9, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54328, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70aca, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc542c0, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) os_loader_tpm_driver_loaded;
    
    // [SepParseElamCertResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8396a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792020, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) parse_elam_cert_resources;
    
    // [SepPotentialGlobalTableAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x372c, 0x32828 bytes
    // ntoskrnl.exe .text:0x354ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3778a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3138c4, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) potential_global_table_attribute;
    
    // [SepPrivilegeCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeef60, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e85a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206380, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) privilege_check;
    
    // [SepProbeAndCaptureString_U]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4713e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614508, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x699c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2c58, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) probe_and_capture_string_u;
    
    // [SepProcUniqueAttributeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5b28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0ee80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc092e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0eec0, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) proc_unique_attribute_name;
    
    // [SepProcessAccessesToAudit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a140, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b144, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51124, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b144, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) process_accesses_to_audit;
    
    // [SepProcessAuditSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae78, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c948, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) process_audit_sd;
    
    // [SepPublicDefaultSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b6f0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d340, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d340, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) public_default_sd;
    
    // [SepPublicDefaultUnrestrictedSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b740, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d368, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53f18, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d018, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) public_default_unrestricted_sd;
    
    // [SepPublicOpenSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b790, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d168, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d3e0, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) public_open_sd;
    
    // [SepPublicOpenUnrestrictedSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b718, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d018, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53ef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d168, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) public_open_unrestricted_sd;
    
    // [SepQueryNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e78ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e9bbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793f9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67858c, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) query_name_string;
    
    // [SepQueryTypeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x694fac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d734, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c0f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c004, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) query_type_string;
    
    // [SepQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfcb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cfdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a2dd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d730, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) queue_work_item;
    
    // [SepReadAndInsertCaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a6ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x922844, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c5adc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x921114, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) read_and_insert_caps;
    
    // [SepReadAndPopulateCapes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5576b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af9ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8670fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b757c, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) read_and_populate_capes;
    
    // [SepReadSingleCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69aa44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x922ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c5e38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x921470, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) read_single_cap;
    
    // [SepReconcileTrustSidWithProcessProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d87d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29adb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259840, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) reconcile_trust_sid_with_process_protection;
    
    // [SepRefDerefLuidToIndexEntryIfNecessary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412ea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3aac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f72b8, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) ref_deref_luid_to_index_entry_if_necessary;
    
    // [SepReferenceLogonSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f7338, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bc33c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673bb8, 0x1fe000 bytes
    //
    _p32(sdk::function<int32_t(struct nt::luid_t*, struct sep::logon_session_references_t**)>*) reference_logon_session;
    
    // [SepReferenceLogonSessionSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f7370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bc374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673bf0, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) reference_logon_session_silo;
    
    // [SepReferenceLuidToIndexEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bd3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x251c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35ed6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ffd30, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) reference_luid_to_index_entry;
    
    // [SepReferenceTokenByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0b20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29ae20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2595e0, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) reference_token_by_handle;
    
    // [SepReferenceTokenUsingPseudoHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc44dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29b260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259670, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) reference_token_using_pseudo_handle;
    
    // [SepRegOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x557034, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8e54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f744, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677824, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) reg_open_key;
    
    // [SepRegQueryDwordValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e86c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8cf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f6c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6776c8, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) reg_query_dword_value;
    
    // [SepRegQueryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556c30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8d68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677738, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) reg_query_value;
    
    // [SepRegistryTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25d1e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9808, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xac78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x97e8, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) registry_type_name;
    
    // [SepReleaseAuditPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c173c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c8e4, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) release_audit_policy;
    
    // [SepReleaseOrderedReadLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2918, 0x32828 bytes
    // ntoskrnl.exe .text:0x255cf4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3348f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305094, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) release_ordered_read_locks;
    
    // [SepRemoveAceFromTokenDefaultDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x26437c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e55c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x314644, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) remove_ace_from_token_default_dacl;
    
    // [SepRemoveDisabledGroupsAndPrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eb0b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x642ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7039e8, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) remove_disabled_groups_and_privileges;
    
    // [SepRemoveTokenLogonSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6981f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3f74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f320, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) remove_token_logon_session;
    
    // [SepRmAddLogonSessionInfoWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498ee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x666f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c28c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6da480, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) rm_add_logon_session_info_wrkr;
    
    // [SepRmAuditProcessCommandLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b88, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d408, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d450, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) rm_audit_process_command_line;
    
    // [SepRmAuditingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b8c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d40c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e8c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d454, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) rm_auditing_enabled;
    
    // [SepRmCallLsa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd109c, 0x32828 bytes
    // ntoskrnl.exe .text:0x261840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a2b90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311df0, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) rm_call_lsa;
    
    // [SepRmCapPoolExpand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b2e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x591e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4bec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591cd0, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) rm_cap_pool_expand;
    
    // [SepRmCapTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a108, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b118, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51100, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b118, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) rm_cap_table;
    
    // [SepRmCapTableLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d448, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) rm_cap_table_lock;
    
    // [SepRmCapUpdateWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5570b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b7490, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) rm_cap_update_wrkr;
    
    // [SepRmCleanupRmLsaState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6912b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9190e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bc990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9178f0, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) rm_cleanup_rm_lsa_state;
    
    // [SepRmCommandDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x983400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa67170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981ce0, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) rm_command_dispatch;
    
    // [SepRmCommandPortName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eca50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980f68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f848, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) rm_command_port_name;
    
    // [SepRmCommandServerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556d8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78ad50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83d8c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794af0, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) rm_command_server_thread;
    
    // [SepRmCreateLogonSessionWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4996dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65bbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8113c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cf8e0, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) rm_create_logon_session_wrkr;
    
    // [SepRmDbInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3e48, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6b0bc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb592d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6a9b4, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) rm_db_initialization;
    
    // [SepRmDbLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33eca0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec620, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c2a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec620, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) rm_db_lock;
    
    // [SepRmDefaultCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a110, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b120, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51108, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b120, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) rm_default_cap;
    
    // [SepRmDeleteLogonSessionWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80bee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765e90, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) rm_delete_logon_session_wrkr;
    
    // [SepRmDereferenceCapTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219ae4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5903c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3238, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590240, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) rm_dereference_cap_table;
    
    // [SepRmDestroyCapTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ad4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x922eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c614c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x921780, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) rm_destroy_cap_table;
    
    // [SepRmDispatchDataToLsa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd136c, 0x32828 bytes
    // ntoskrnl.exe .text:0x261a88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399038, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312038, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) rm_dispatch_data_to_lsa;
    
    // [SepRmEnforceCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b89, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d409, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e89, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d451, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) rm_enforce_cap;
    
    // [SepRmFetchGlobalSacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6c1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85964c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aed3c, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) rm_fetch_global_sacl;
    
    // [SepRmGlobalSaclFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x699de4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892b62, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920340, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) rm_global_sacl_find;
    
    // [SepRmGlobalSaclHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3591f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b668, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e18, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) rm_global_sacl_head;
    
    // [SepRmGlobalSaclLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ec30, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec5b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c230, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec5b0, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) rm_global_sacl_lock;
    
    // [SepRmGlobalSaclSetWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556ee8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8595b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aeca0, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) rm_global_sacl_set_wrkr;
    
    // [SepRmInteractiveLogoffLogonSessionCompletedWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523818, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75c8a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7642f0, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) rm_interactive_logoff_logon_session_completed_wrkr;
    
    // [SepRmInteractiveLogoffLogonSessionWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522dfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c40c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7651d0, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) rm_interactive_logoff_logon_session_wrkr;
    
    // [SepRmLsaCallProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af30, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca08, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) rm_lsa_call_process;
    
    // [SepRmLsaConnectRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5572c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78aed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83db1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794c70, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) rm_lsa_connect_request;
    
    // [SepRmMakeLogonSessionsSiblingsWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c40f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f440, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) rm_make_logon_sessions_siblings_wrkr;
    
    // [SepRmNotifyMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3410e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4318, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ca8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4318, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) rm_notify_mutex;
    
    // [SepRmProcessCreationCommandLineAuditSettingsWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd56d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x361c00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x363020, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) rm_process_creation_command_line_audit_settings_wrkr;
    
    // [SepRmReferenceFindCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b3d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x591e84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591d04, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) rm_reference_find_cap;
    
    // [SepRmSetAuditEventWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5571b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x858b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aeb80, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) rm_set_audit_event_wrkr;
    
    // [SepRmState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b0c0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb98, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53900, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb98, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) rm_state;
    
    // [SepRmValidateProcUniqueLuidWrkr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69835c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f4c0, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) rm_validate_proc_unique_luid_wrkr;
    
    // [SepRmVerifyLsaProtectionLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x557544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78b178, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83ddc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794f18, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) rm_verify_lsa_protection_level;
    
    // [SepSamTypeNamePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b310, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x61b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6c70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x61a8, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) sam_type_name_prefix;
    
    // [SepScheduleImageVerificationCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x486e44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7538e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67d6dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b1a4, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) schedule_image_verification_callbacks;
    
    // [SepSDContainsAttributeACE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ae88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9226bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920f8c, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) sd_contains_attribute_ace;
    
    // [SepSecureBootBuildRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd9d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92264, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82958, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91448, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) secure_boot_build_rules;
    
    // [SepSecureBootCheckForUpdates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bda48, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa922d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5912c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa914bc, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) secure_boot_check_for_updates;
    
    // [SepSecureBootCorrectBcd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6987cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921068, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f938, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) secure_boot_correct_bcd;
    
    // [SepSecureBootFindMatchingRegistryRule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6989a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91fb40, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) secure_boot_find_matching_registry_rule;
    
    // [SepSecureBootGetPolicyDefaultValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698a6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921344, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4904, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91fc14, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) secure_boot_get_policy_default_value;
    
    // [SepSecureBootGetPolicyValueByRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698ad4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9213a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91fc70, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) secure_boot_get_policy_value_by_ref;
    
    // [SepSecureBootGetQWordPolicyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c49f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91fd00, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) secure_boot_get_q_word_policy_value;
    
    // [SepSecureBootSetRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a61a0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6d588, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb58fb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6cd58, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) secure_boot_set_registry_key;
    
    // [SepSecureBootUpdateBcdDataForRule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698bdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9214d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4a94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91fda4, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) secure_boot_update_bcd_data_for_rule;
    
    // [SepSecureBootValidateBcdDataAgainstBcdRule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698d30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4c14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ff04, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) secure_boot_validate_bcd_data_against_bcd_rule;
    
    // [SepSecurityDescriptorStrictLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69aed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x922714, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920fe4, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) security_descriptor_strict_length;
    
    // [SepSensitivePrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ef060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9838c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa679e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9821a0, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) sensitive_privileges;
    
    // [SepServicesFilterPrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eca40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980f58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f838, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) services_filter_privileges;
    
    // [SepSetAuditInfoForObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696cd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91f4f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ddc4, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) set_audit_info_for_object_type;
    
    // [SepSetLogonSessionToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e39ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7966a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703c74, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) set_logon_session_token;
    
    // [SepSetProcessUniqueAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412cc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f38c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fdd44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f70cc, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) set_process_unique_attribute;
    
    // [SepSetServerSiloToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691b44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd5a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9184ac, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) set_server_silo_token;
    
    // [SepSetSingletonEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a8a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5918ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59176c, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) set_singleton_entry;
    
    // [SepSetSystemPaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56a938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ab038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8612c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b29b8, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) set_system_paths;
    
    // [SepSetTokenAllApplicationPackagesPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a4b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x591480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a42b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591300, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) set_token_all_application_packages_policy;
    
    // [SepSetTokenCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e9db4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f7ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703708, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673388, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) set_token_capabilities;
    
    // [SepSetTokenClaims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea40c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f721c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca0dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673a9c, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) set_token_claims;
    
    // [SepSetTokenLowboxNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8c94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e947c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7950c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677e4c, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) set_token_lowbox_number;
    
    // [SepSetTokenPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8be4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618d7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66985c, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) set_token_package;
    
    // [SepSetTokenSessionById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6978a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe9bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f74bc, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) set_token_session_by_id;
    
    // [SepSetTokenTrust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3d9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cc37c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e12d0, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) set_token_trust;
    
    // [SepSetTokenUserAndGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69790c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92003c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c347c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e90c, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) set_token_user_and_groups;
    
    // [SepSetTrustLevelForProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x716c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20b018, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ef828, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339508, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) set_trust_level_for_process_token;
    
    // [SepShouldSetDelinkFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ee70c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6db4bc, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) should_set_delink_flags;
    
    // [SepSidFromProcessProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0cd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29b42c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2598c0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) sid_from_process_protection;
    
    // [SepSidInSidAndAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eb330, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6431e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703be0, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) sid_in_sid_and_attributes;
    
    // [SepSidInToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92444, 0x32828 bytes
    // ntoskrnl.exe .text:0x217790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3336ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204c10, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) sid_in_token;
    
    // [SepSidInTokenSidHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0f30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2177dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x292bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204c5c, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) sid_in_token_sid_hash;
    
    // [SepSidMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b588, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cfa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cfa8, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) sid_mapping;
    
    // [SepSingletonGlobal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5468, 0x32828 bytes
    // ntoskrnl.exe .data:0xc046e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06c48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04728, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) singleton_global;
    
    // [SepSingletonGlobalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301dc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc370c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d680, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) singleton_global_data;
    
    // [SepStopReferencingLogonSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eccf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c0f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70404c, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) stop_referencing_logon_session;
    
    // [SepSystemContextSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f02d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x984c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa69398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x983528, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) system_context_security_descriptor;
    
    // [SepSystemDefaultSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b768, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d408, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d408, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) system_default_sd;
    
    // [SepTokenCapabilitySidSharingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0d9, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54329, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70ac9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc542b0, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) token_capability_sid_sharing_enabled;
    
    // [SepTokenDeleteMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40d280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e7090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c28f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5edf60, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) token_delete_method;
    
    // [SepTokenFromAccessInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdc77c, 0x32828 bytes
    // ntoskrnl.exe .text:0x202884, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241054, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) token_from_access_information;
    
    // [SepTokenInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79c9bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa60320, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb32208, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61e48, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) token_initialization;
    
    // [SepTokenIsOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0ea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2178b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28eb80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204d30, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) token_is_owner;
    
    // [SepTokenLeakBreakCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3591a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9db8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b60c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9da4, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) token_leak_break_count;
    
    // [SepTokenLeakMethodCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3591b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9dbc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9db8, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) token_leak_method_count;
    
    // [SepTokenLeakMethodWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3591ac, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9da8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9da0, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) token_leak_method_watch;
    
    // [SepTokenLeakProcessCid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3591a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9db0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9da8, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) token_leak_process_cid;
    
    // [SepTokenLeakToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359198, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9da0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9db0, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) token_leak_token;
    
    // [SepTokenMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1c58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9806c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97efa0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) token_mapping;
    
    // [SepTokenPolicyCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301cc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d500, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36fc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d580, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) token_policy_counter;
    
    // [SepTokenPolicyCounterByCategory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301c80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36f80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d540, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) token_policy_counter_by_category;
    
    // [SepTokenPrivilegeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0440, 0x32828 bytes
    // ntoskrnl.exe .text:0x246ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d85c0, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) token_privilege_count;
    
    // [SepTokenSidManagementLoggingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc5432a, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc542a0, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) token_sid_management_logging_enabled;
    
    // [SepTokenSidSharingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54338, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70ac8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc542b1, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) token_sid_sharing_enabled;
    
    // [SepTokenSingletonAttributesConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b60, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) token_singleton_attributes_config;
    
    // [SepTrustLevelCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1990, 0x32828 bytes
    // ntoskrnl.exe .text:0x217c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2921d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204950, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) trust_level_check;
    
    // [SepTrustToDiscretionary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb197c, 0x32828 bytes
    // ntoskrnl.exe .text:0x217c34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ec14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204a48, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) trust_to_discretionary;
    
    // [SepUpdateLogonSessionTrack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498f00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x666f84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c28e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6da4a4, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) update_logon_session_track;
    
    // [SepUpdateSiloInClientSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696e40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91f688, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91df58, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) update_silo_in_client_security;
    
    // [SepValidLabelSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f58c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6841c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f5f8, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) valid_label_subject_context;
    
    // [SepValidOwnerSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488b84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658bbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc48c, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) valid_owner_subject_context;
    
    // [SepValidateAndCopyGlobalEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a97c, 0x32828 bytes
    // ntoskrnl.exe .text:0x591a1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4894, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59189c, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) validate_and_copy_global_entry;
    
    // [SepValidateCAPIDs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b494, 0x32828 bytes
    // ntoskrnl.exe .text:0x591fb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591e34, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) validate_capi_ds;
    
    // [SepVariableInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79ca74, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa603e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb322c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61f08, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) variable_initialization;
    
    // [SepVerifyDesktopAppxImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219b14, 0x32828 bytes
    // ntoskrnl.exe .text:0x201394, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204334, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201394, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) verify_desktop_appx_image;
    
    // [SepVerifyDesktopAppxPackageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219cc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2014f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2044a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2014f8, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) verify_desktop_appx_package_name;
    
    // [SepSddlAddAceToAcl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3b068, 0x1d08 bytes
    // pci.sys PAGE:0x6c2a8, 0x1cf0 bytes
    // pci.sys PAGE:0x75578, 0x1cf0 bytes
    // pci.sys PAGE:0x6a208, 0x1cf0 bytes
    //
    _q54(sdk::function<int32_t(struct nt::acl_t**, uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*)>*) sddl_add_ace_to_acl;
    
    // [SepSddlDaclFromSDDLString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3acb4, 0x1d08 bytes
    // pci.sys PAGE:0x6c3a8, 0x1cf0 bytes
    // pci.sys PAGE:0x75678, 0x1cf0 bytes
    // pci.sys PAGE:0x6a308, 0x1cf0 bytes
    //
    _q55(sdk::function<int32_t(const wchar_t*, uint32_t, uint32_t*, struct nt::acl_t**)>*) sddl_dacl_from_sddl_string;
    
    // [SepSddlGetAclForString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ad60, 0x1d08 bytes
    // pci.sys PAGE:0x6c494, 0x1cf0 bytes
    // pci.sys PAGE:0x75764, 0x1cf0 bytes
    // pci.sys PAGE:0x6a3f4, 0x1cf0 bytes
    //
    _q56(sdk::function<int32_t(wchar_t*, struct nt::acl_t**, wchar_t**)>*) sddl_get_acl_for_string;
    
    // [SepSddlGetSidForString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3b0f0, 0x1d08 bytes
    // pci.sys PAGE:0x6c828, 0x1cf0 bytes
    // pci.sys PAGE:0x75ae8, 0x1cf0 bytes
    // pci.sys PAGE:0x6a788, 0x1cf0 bytes
    //
    _q57(sdk::function<int32_t(wchar_t*, void**, wchar_t**)>*) sddl_get_sid_for_string;
    
    // [SepSddlLookupAccessMaskInTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3b1ac, 0x1d08 bytes
    // pci.sys PAGE:0x6c900, 0x1cf0 bytes
    // pci.sys PAGE:0x75bc0, 0x1cf0 bytes
    // pci.sys PAGE:0x6a860, 0x1cf0 bytes
    //
    _q58(sdk::function<uint32_t(wchar_t*, uint32_t*, wchar_t**)>*) sddl_lookup_access_mask_in_table;
    
    // [SepSddlParseWideStringUlong]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f860, 0x1d08 bytes
    // pci.sys PAGE:0x6c99c, 0x1cf0 bytes
    // pci.sys PAGE:0x75c5c, 0x1cf0 bytes
    // pci.sys PAGE:0x6a8fc, 0x1cf0 bytes
    //
    _q59(sdk::function<uint32_t(const wchar_t*, const wchar_t**, uint32_t*)>*) sddl_parse_wide_string_ulong;
    
    // [SepSddlSecurityDescriptorFromSDDLString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3abe8, 0x1d08 bytes
    // pci.sys PAGE:0x6caa0, 0x1cf0 bytes
    // pci.sys PAGE:0x75d60, 0x1cf0 bytes
    // pci.sys PAGE:0x6aa00, 0x1cf0 bytes
    //
    _q60(sdk::function<int32_t(const wchar_t*, uint32_t, void**)>*) sddl_security_descriptor_from_sddl_string;
};
#include "magic/api.end.hpp"
