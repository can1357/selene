#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ci
{
    // [CI_GetClrVal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x205c4, 0x243e0 bytes
    // win32kbase.sys .text:0x81374, 0x27ef0 bytes
    // win32kbase.sys .text:0x68374, 0x243e0 bytes
    //
    _m00(sdk::unknown_ptr) get_clr_val;
    
    // [accumulate]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb848, 0x8dc0 bytes
    //
    _m01(sdk::unknown_ptr) accumulate;
    
    // [add_256_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xda10, 0x8dc0 bytes
    //
    _m02(sdk::unknown_ptr) add_256_amd64_asm;
    
    // [CiAddAppIdTaggingClaimsToOriginClaim]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5ed34, 0x13a78 bytes
    //
    _m03(sdk::unknown_ptr) add_app_id_tagging_claims_to_origin_claim;
    
    // [add_mod]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xaa88, 0x8dc0 bytes
    //
    _m04(sdk::unknown_ptr) add_mod;
    
    // [add_mod_256_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd8e0, 0x8dc0 bytes
    //
    _m05(sdk::unknown_ptr) add_mod_256_amd64_asm;
    
    // [add_same_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd9e0, 0x8dc0 bytes
    //
    _m06(sdk::unknown_ptr) add_same_amd64_asm;
    
    // [CiAuditDriverLoadSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x30fe0, 0x8dc0 bytes
    //
    _m07(sdk::unknown_ptr) audit_driver_load_signature;
    
    // [CiAuthRootCheckCTLs]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x42534, 0x13a78 bytes
    //
    _m08(sdk::unknown_ptr) auth_root_check_ct_ls;
    
    // [CiAuthRootParseCTL]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x4208c, 0x13a78 bytes
    //
    _m09(sdk::unknown_ptr) auth_root_parse_ctl;
    
    // [CiAuthRootQueryChainByCerts]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x4a56c, 0x13a78 bytes
    //
    _m10(sdk::unknown_ptr) auth_root_query_chain_by_certs;
    
    // [CiCatDbFreeListOfCatalogs]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x4a908, 0x13a78 bytes
    //
    _m11(sdk::unknown_ptr) cat_db_free_list_of_catalogs;
    
    // [compare_diff]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xabec, 0x8dc0 bytes
    //
    _m12(sdk::unknown_ptr) compare_diff;
    
    // [CiCompareExistingSePool]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x4d590, 0x13a78 bytes
    //
    _m13(sdk::unknown_ptr) compare_existing_se_pool;
    
    // [compare_same]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xac78, 0x8dc0 bytes
    //
    _m14(sdk::unknown_ptr) compare_same;
    
    // [create_modulus]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xad5c, 0x8dc0 bytes
    //
    _m15(sdk::unknown_ptr) create_modulus;
    
    // [create_modulus_select_arithmetic]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbdd8, 0x8dc0 bytes
    //
    _m16(sdk::unknown_ptr) create_modulus_select_arithmetic;
    
    // [DangerousExtensions]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .rdata:0x24010, 0x13a78 bytes
    //
    _m17(sdk::unknown_ptr) dangerous_extensions;
    
    // [decumulate]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb8b8, 0x8dc0 bytes
    //
    _m18(sdk::unknown_ptr) decumulate;
    
    // [CiDeleteCodeIntegrityOriginClaimForFileObject]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5ef70, 0x13a78 bytes
    //
    _m19(sdk::unknown_ptr) delete_code_integrity_origin_claim_for_file_object;
    
    // [CiDeleteCodeIntegrityOriginClaimMembers]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5eef0, 0x13a78 bytes
    //
    _m20(sdk::unknown_ptr) delete_code_integrity_origin_claim_members;
    
    // [digit_allocate_named]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbe9c, 0x8dc0 bytes
    //
    _m21(sdk::unknown_ptr) digit_allocate_named;
    
    // [digits_to_endian_bytes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbba0, 0x8dc0 bytes
    //
    _m22(sdk::unknown_ptr) digits_to_endian_bytes;
    
    // [div21]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbfa0, 0x8dc0 bytes
    //
    _m23(sdk::unknown_ptr) div21;
    
    // [divide]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xc028, 0x8dc0 bytes
    //
    _m24(sdk::unknown_ptr) divide;
    
    // [divide_immediate]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xc2e0, 0x8dc0 bytes
    //
    _m25(sdk::unknown_ptr) divide_immediate;
    
    // [divide_precondition_1]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xc4cc, 0x8dc0 bytes
    //
    _m26(sdk::unknown_ptr) divide_precondition_1;
    
    // [endian_bytes_to_digits]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbc40, 0x8dc0 bytes
    //
    _m27(sdk::unknown_ptr) endian_bytes_to_digits;
    
    // [estimated_quotient_1]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbf00, 0x8dc0 bytes
    //
    _m28(sdk::unknown_ptr) estimated_quotient_1;
    
    // [CiEvaluatePolicyInfoForCatalog]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x61440, 0x13a78 bytes
    //
    _m29(sdk::unknown_ptr) evaluate_policy_info_for_catalog;
    
    // [Feature_20H2_Enablement__private_areDependenciesEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004
    // ci.dll .text:0x1e50, 0x13a78 bytes
    //
    _m30(sdk::unknown_ptr) feature_20h2_enablement_private_are_dependencies_enabled;
    
    // [Feature_20H2_Enablement__private_descriptor]
    // Ldr = [ci.dll]
    // => Windows 10 v20H2
    // ci.dll .rdata:0x36d58, 0x13a78 bytes
    //
    _m31(sdk::unknown_ptr) feature_20h2_enablement_private_descriptor;
    
    // [Feature_20H2_Enablement__private_requiresFeatures]
    // Ldr = [ci.dll]
    // => Windows 10 v20H2
    // ci.dll .rdata:0x2b820, 0x13a78 bytes
    //
    _m32(sdk::unknown_ptr) feature_20h2_enablement_private_requires_features;
    
    // [Feature_20H2_Rollback__private_areDependenciesEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004
    // ci.dll .text:0x1e00, 0x13a78 bytes
    //
    _m33(sdk::unknown_ptr) feature_20h2_rollback_private_are_dependencies_enabled;
    
    // [Feature_20H2_Rollback__private_descriptor]
    // Ldr = [ci.dll]
    // => Windows 10 v20H2
    // ci.dll .rdata:0x36d40, 0x13a78 bytes
    //
    _m34(sdk::unknown_ptr) feature_20h2_rollback_private_descriptor;
    
    // [Feature_Hub_20H2_WLDP__private_areDependenciesEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004
    // ci.dll .text:0x1eb0, 0x13a78 bytes
    //
    _m35(sdk::unknown_ptr) feature_hub_20h2_wldp_private_are_dependencies_enabled;
    
    // [Feature_Hub_20H2_WLDP__private_descriptor]
    // Ldr = [ci.dll]
    // => Windows 10 v20H2
    // ci.dll .rdata:0x36d70, 0x13a78 bytes
    //
    _m36(sdk::unknown_ptr) feature_hub_20h2_wldp_private_descriptor;
    
    // [Feature_Hub_20H2_WLDP__private_requiresFeatures]
    // Ldr = [ci.dll]
    // => Windows 10 v20H2
    // ci.dll .rdata:0x2b970, 0x13a78 bytes
    //
    _m37(sdk::unknown_ptr) feature_hub_20h2_wldp_private_requires_features;
    
    // [Feature_NightsWatchRevertAllowed_logged_traits]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .rdata:0x27dbc, 0x13a78 bytes
    //
    _m38(sdk::unknown_ptr) feature_nights_watch_revert_allowed_logged_traits;
    
    // [Feature_NightsWatchRevertAllowed__private_IsEnabledPreCheck]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .text:0x319c, 0x13a78 bytes
    //
    _m39(sdk::unknown_ptr) feature_nights_watch_revert_allowed_private_is_enabled_pre_check;
    
    // [Feature_NightsWatchRevertAllowed__private_reporting]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .data:0x31980, 0x13a78 bytes
    //
    _m40(sdk::unknown_ptr) feature_nights_watch_revert_allowed_private_reporting;
    
    // [CiFindFileOrHeaderHashInCatalogs]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x45adc, 0x13a78 bytes
    //
    _m41(sdk::unknown_ptr) find_file_or_header_hash_in_catalogs;
    
    // [g_CiAuthRootStore]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .data:0x31438, 0x13a78 bytes
    //
    _m42(sdk::unknown_ptr) g_ci_auth_root_store;
    
    // [g_CiAuthRootStoreLock]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .data:0x32488, 0x13a78 bytes
    //
    _m43(sdk::unknown_ptr) g_ci_auth_root_store_lock;
    
    // [g_CiTrustUsnZero]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .data:0x19154, 0x8dc0 bytes
    //
    _m44(sdk::unknown_ptr) g_ci_trust_usn_zero;
    
    // [g_CiUsnCacheLookasideList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .data:0x19200, 0x8dc0 bytes
    //
    _m45(sdk::unknown_ptr) g_ci_usn_cache_lookaside_list;
    
    // [g_SiConditionalPolicies]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .data:0x31278, 0x13a78 bytes
    //
    _m46(sdk::unknown_ptr) g_si_conditional_policies;
    
    // [g_SiPolicyFailureEvents]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x10700, 0x8dc0 bytes
    //
    _m47(sdk::unknown_ptr) g_si_policy_failure_events;
    
    // [g_SiPolicyID]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .data:0x19080, 0x8dc0 bytes
    //
    _m48(sdk::unknown_ptr) g_si_policy_id;
    
    // [g_SiPolicyName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .data:0x19090, 0x8dc0 bytes
    //
    _m49(sdk::unknown_ptr) g_si_policy_name;
    
    // [g_SiPolicyTypeInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x111d0, 0x8dc0 bytes
    //
    _m50(sdk::unknown_ptr) g_si_policy_type_info;
    
    // [g_WaitBlocks]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .data:0x19b60, 0x8dc0 bytes
    //
    _m51(sdk::unknown_ptr) g_wait_blocks;
    
    // [CiGetCodeIntegrityOriginClaimForFileObject]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5ec90, 0x13a78 bytes
    //
    _m52(sdk::unknown_ptr) get_code_integrity_origin_claim_for_file_object;
    
    // [CiGetInstrumentSignatureInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x309e4, 0x8dc0 bytes
    //
    _m53(sdk::unknown_ptr) get_instrument_signature_information;
    
    // [CiGetRegistryBINARY]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5e380, 0x13a78 bytes
    //
    _m54(sdk::unknown_ptr) get_registry_binary;
    
    // [CiHvciCheckAndNotifyBlockedByHvciPolicy]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x63490, 0x13a78 bytes
    //
    _m55(sdk::unknown_ptr) hvci_check_and_notify_blocked_by_hvci_policy;
    
    // [CiHvciReportMmIncompatibility]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x63550, 0x13a78 bytes
    //
    _m56(sdk::unknown_ptr) hvci_report_mm_incompatibility;
    
    // [I_LoadCacheWorker]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x28db0, 0x8dc0 bytes
    //
    _m57(sdk::unknown_ptr) i_load_cache_worker;
    
    // [I_LoadCatalogCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x29124, 0x8dc0 bytes
    //
    _m58(sdk::unknown_ptr) i_load_catalog_cache;
    
    // [I_MinCryptGetPlatformManifestBinaryIDAttribute]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x392c4, 0x8dc0 bytes
    //
    _m59(sdk::unknown_ptr) i_min_crypt_get_platform_manifest_binary_id_attribute;
    
    // [I_VerifyPKCS1SigningFormat]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x39c68, 0x8dc0 bytes
    //
    _m60(sdk::unknown_ptr) i_verify_pkcs1_signing_format;
    
    // [CiInitializeGlobalNightsWatchState]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5f018, 0x13a78 bytes
    //
    _m61(sdk::unknown_ptr) initialize_global_nights_watch_state;
    
    // [InstallerExtensions]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .rdata:0x24148, 0x13a78 bytes
    //
    _m62(sdk::unknown_ptr) installer_extensions;
    
    // [CiInstrumentCreateSyntheticEA]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x55a78, 0x13a78 bytes
    //
    _m63(sdk::unknown_ptr) instrument_create_synthetic_ea;
    
    // [KappxpStorePackageFileInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x9da0, 0x8dc0 bytes
    //
    _m64(sdk::unknown_ptr) kappxp_store_package_file_information;
    
    // [CiLoadCatalogCacheComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11c10, 0x8dc0 bytes
    //
    _m65(sdk::unknown_ptr) load_catalog_cache_complete;
    
    // [CiLoadCatalogCacheEntry]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11be0, 0x8dc0 bytes
    //
    _m66(sdk::unknown_ptr) load_catalog_cache_entry;
    
    // [CiLoadCatalogCacheOneTime]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x2a1e8, 0x8dc0 bytes
    //
    _m67(sdk::unknown_ptr) load_catalog_cache_one_time;
    
    // [CiLoadCatalogCacheStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11bf0, 0x8dc0 bytes
    //
    _m68(sdk::unknown_ptr) load_catalog_cache_start;
    
    // [CiLogJournalingFailed]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11e10, 0x8dc0 bytes
    //
    _m69(sdk::unknown_ptr) log_journaling_failed;
    
    // [CiLogProtectedValuesRead]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11ed0, 0x8dc0 bytes
    //
    _m70(sdk::unknown_ptr) log_protected_values_read;
    
    // [CiLogProtectedValuesWrite]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11cd0, 0x8dc0 bytes
    //
    _m71(sdk::unknown_ptr) log_protected_values_write;
    
    // [CiLogSIPolicyEventInit]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x32a0c, 0x8dc0 bytes
    //
    _m72(sdk::unknown_ptr) log_si_policy_event_init;
    
    // [CiLogSignatureExpiryEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x315ec, 0x8dc0 bytes
    //
    _m73(sdk::unknown_ptr) log_signature_expiry_event;
    
    // [CiLogStatusEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x31b30, 0x8dc0 bytes
    //
    _m74(sdk::unknown_ptr) log_status_event;
    
    // [CiLogUsn0JournalIdMismatch]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11e90, 0x8dc0 bytes
    //
    _m75(sdk::unknown_ptr) log_usn0_journal_id_mismatch;
    
    // [CiLogUsn0RevocationListMismatch]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11f90, 0x8dc0 bytes
    //
    _m76(sdk::unknown_ptr) log_usn0_revocation_list_mismatch;
    
    // [MinAsn1FindExtension]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x3bd54, 0x8dc0 bytes
    //
    _m77(sdk::unknown_ptr) min_asn1_find_extension;
    
    // [MinAsn1ParseCTLSubject]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x68910, 0x13a78 bytes
    //
    _m78(sdk::unknown_ptr) min_asn1_parse_ctl_subject;
    
    // [MincrypK_UpdateCatalogCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x282f0, 0x8dc0 bytes
    //
    _m79(sdk::unknown_ptr) mincryp_k_update_catalog_cache;
    
    // [MincryptGetOpusProgramNameFromAuthenticatedAttributes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x3d2bc, 0x8dc0 bytes
    //
    _m80(sdk::unknown_ptr) mincrypt_get_opus_program_name_from_authenticated_attributes;
    
    // [mod_exp2006]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xcb1c, 0x8dc0 bytes
    //
    _m81(sdk::unknown_ptr) mod_exp2006;
    
    // [mod_exp_x64]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x83070, 0x8dc0 bytes
    //
    _m82(sdk::unknown_ptr) mod_exp_x64;
    
    // [mod_exp_x64_1024]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x821c0, 0x8dc0 bytes
    //
    _m83(sdk::unknown_ptr) mod_exp_x64_1024;
    
    // [mod_exp_x64_2048]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x828d0, 0x8dc0 bytes
    //
    _m84(sdk::unknown_ptr) mod_exp_x64_2048;
    
    // [mod_mul_no_range_checks]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb13c, 0x8dc0 bytes
    //
    _m85(sdk::unknown_ptr) mod_mul_no_range_checks;
    
    // [mod_shift]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb1f0, 0x8dc0 bytes
    //
    _m86(sdk::unknown_ptr) mod_shift;
    
    // [modmul_choices1]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xca34, 0x8dc0 bytes
    //
    _m87(sdk::unknown_ptr) modmul_choices1;
    
    // [modmul_from_right_CIOS]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xc720, 0x8dc0 bytes
    //
    _m88(sdk::unknown_ptr) modmul_from_right_cios;
    
    // [modular_exponentiation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbe44, 0x8dc0 bytes
    //
    _m89(sdk::unknown_ptr) modular_exponentiation;
    
    // [ModularMultiplication_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xdbc0, 0x8dc0 bytes
    //
    _m90(sdk::unknown_ptr) modular_multiplication_amd64_asm;
    
    // [ModularMultiplication_amd64_asm_1024]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xddf0, 0x8dc0 bytes
    //
    _m91(sdk::unknown_ptr) modular_multiplication_amd64_asm_1024;
    
    // [ModularMultiplication_amd64_asm_256]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xe440, 0x8dc0 bytes
    //
    _m92(sdk::unknown_ptr) modular_multiplication_amd64_asm_256;
    
    // [mp_alloc_temp]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x3a108, 0x8dc0 bytes
    //
    _m93(sdk::unknown_ptr) mp_alloc_temp;
    
    // [mp_copybits]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb724, 0x8dc0 bytes
    //
    _m94(sdk::unknown_ptr) mp_copybits;
    
    // [mp_free_temp]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x3a120, 0x8dc0 bytes
    //
    _m95(sdk::unknown_ptr) mp_free_temp;
    
    // [mp_population_count]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb5d0, 0x8dc0 bytes
    //
    _m96(sdk::unknown_ptr) mp_population_count;
    
    // [mp_scrambled_fetch]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd2d8, 0x8dc0 bytes
    //
    _m97(sdk::unknown_ptr) mp_scrambled_fetch;
    
    // [mp_scrambled_setup]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd180, 0x8dc0 bytes
    //
    _m98(sdk::unknown_ptr) mp_scrambled_setup;
    
    // [mp_scrambled_store]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd1ec, 0x8dc0 bytes
    //
    _m99(sdk::unknown_ptr) mp_scrambled_store;
    
    // [mp_shift_lost]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb920, 0x8dc0 bytes
    //
    _n00(sdk::unknown_ptr) mp_shift_lost;
    
    // [mp_significant_bit_count]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb800, 0x8dc0 bytes
    //
    _n01(sdk::unknown_ptr) mp_significant_bit_count;
    
    // [multiply]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xba74, 0x8dc0 bytes
    //
    _n02(sdk::unknown_ptr) multiply;
    
    // [Multiply_256x256_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xdac0, 0x8dc0 bytes
    //
    _n03(sdk::unknown_ptr) multiply_256x256_amd64_asm;
    
    // [possible_digit_allocate_named]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xbea8, 0x8dc0 bytes
    //
    _n04(sdk::unknown_ptr) possible_digit_allocate_named;
    
    // [ProtectedValuesKeyValue]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x10080, 0x8dc0 bytes
    //
    _n05(sdk::unknown_ptr) protected_values_key_value;
    
    // [ProtectionVariableName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x101c0, 0x8dc0 bytes
    //
    _n06(sdk::unknown_ptr) protection_variable_name;
    
    // [CiQueryLoadLegacyDisplayDriversExt]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x10a4, 0x8dc0 bytes
    //
    _n07(sdk::unknown_ptr) query_load_legacy_display_drivers_ext;
    
    // [rsa_allocate_fields]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xa544, 0x8dc0 bytes
    //
    _n08(sdk::unknown_ptr) rsa_allocate_fields;
    
    // [rsa_destruction]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xa6f4, 0x8dc0 bytes
    //
    _n09(sdk::unknown_ptr) rsa_destruction;
    
    // [rsa_encryption]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xa7ac, 0x8dc0 bytes
    //
    _n10(sdk::unknown_ptr) rsa_encryption;
    
    // [rsa_import]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xa938, 0x8dc0 bytes
    //
    _n11(sdk::unknown_ptr) rsa_import;
    
    // [CiSaveCatalogCacheComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11f20, 0x8dc0 bytes
    //
    _n12(sdk::unknown_ptr) save_catalog_cache_complete;
    
    // [CiSaveCatalogCacheEntry]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11bd0, 0x8dc0 bytes
    //
    _n13(sdk::unknown_ptr) save_catalog_cache_entry;
    
    // [CiSaveCatalogCacheStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11f70, 0x8dc0 bytes
    //
    _n14(sdk::unknown_ptr) save_catalog_cache_start;
    
    // [SbValidateAndParseSupplementalPolicyAuthorizationToken]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .text:0xa820, 0x13a78 bytes
    //
    _n15(sdk::unknown_ptr) sb_validate_and_parse_supplemental_policy_authorization_token;
    
    // [CiSetCachedOriginClaim]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5f0c0, 0x13a78 bytes
    //
    _n16(sdk::unknown_ptr) set_cached_origin_claim;
    
    // [SetMpErrno_clue1]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x3a12c, 0x8dc0 bytes
    //
    _n17(sdk::unknown_ptr) set_mp_errno_clue1;
    
    // [significant_bit_count]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb680, 0x8dc0 bytes
    //
    _n18(sdk::unknown_ptr) significant_bit_count;
    
    // [SSCatDBQueryChainByCerts]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .text:0x97cc, 0x13a78 bytes
    //
    _n19(sdk::unknown_ptr) ss_cat_db_query_chain_by_certs;
    
    // [sub_256_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xda80, 0x8dc0 bytes
    //
    _n20(sdk::unknown_ptr) sub_256_amd64_asm;
    
    // [sub_mod_256_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd970, 0x8dc0 bytes
    //
    _n21(sdk::unknown_ptr) sub_mod_256_amd64_asm;
    
    // [sub_same_amd64_asm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xda50, 0x8dc0 bytes
    //
    _n22(sdk::unknown_ptr) sub_same_amd64_asm;
    
    // [SymCryptSha1Selftest]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x79a4, 0x8dc0 bytes
    //
    _n23(sdk::unknown_ptr) sym_crypt_sha1_selftest;
    
    // [SymCryptSha256Selftest]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x34b8, 0x8dc0 bytes
    //
    _n24(sdk::unknown_ptr) sym_crypt_sha256_selftest;
    
    // [SymCryptSha512Selftest]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x4f18, 0x8dc0 bytes
    //
    _n25(sdk::unknown_ptr) sym_crypt_sha512_selftest;
    
    // [to_modular]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb454, 0x8dc0 bytes
    //
    _n26(sdk::unknown_ptr) to_modular;
    
    // [two_adic_inverse]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb6bc, 0x8dc0 bytes
    //
    _n27(sdk::unknown_ptr) two_adic_inverse;
    
    // [uncreate_modulus]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xb594, 0x8dc0 bytes
    //
    _n28(sdk::unknown_ptr) uncreate_modulus;
    
    // [CiUpdateCatalogCacheFailed]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11c00, 0x8dc0 bytes
    //
    _n29(sdk::unknown_ptr) update_catalog_cache_failed;
    
    // [validate_modular_data1a]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xacf4, 0x8dc0 bytes
    //
    _n30(sdk::unknown_ptr) validate_modular_data1a;
    
    // [CiValidateNonHeaderImagePages]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x4bb80, 0x13a78 bytes
    //
    _n31(sdk::unknown_ptr) validate_non_header_image_pages;
    
    // [CiVerifyHashInCatalogOrUnsignedCache]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x459bc, 0x13a78 bytes
    //
    _n32(sdk::unknown_ptr) verify_hash_in_catalog_or_unsigned_cache;
    
    // [XciInitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x10b4, 0x8dc0 bytes
    //
    _n33(sdk::unknown_ptr) xci_initialize;
    
    // [XciQueryInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x10bc, 0x8dc0 bytes
    //
    _n34(sdk::unknown_ptr) xci_query_information;
    
    // [XciSupported]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x10ac, 0x8dc0 bytes
    //
    _n35(sdk::unknown_ptr) xci_supported;
    
    // [XciValidateImageData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x10cc, 0x8dc0 bytes
    //
    _n36(sdk::unknown_ptr) xci_validate_image_data;
    
    // [XciValidateImageHeader]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x10c4, 0x8dc0 bytes
    //
    _n37(sdk::unknown_ptr) xci_validate_image_header;
    
    // [CiCreateSyntheticEaCacheContents]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x60808, 0x13a78 bytes
    // ci.dll PAGE:0x60808, 0x13a78 bytes
    //
    _n38(sdk::unknown_ptr) create_synthetic_ea_cache_contents;
    
    // [Feature_20H2_Enablement__private_featureState]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x37348, 0x13a78 bytes
    // ci.dll .data:0x37348, 0x13a78 bytes
    //
    _n39(sdk::unknown_ptr) feature_20h2_enablement_private_feature_state;
    
    // [Feature_20H2_Rollback__private_featureState]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x37340, 0x13a78 bytes
    // ci.dll .data:0x37340, 0x13a78 bytes
    //
    _n40(sdk::unknown_ptr) feature_20h2_rollback_private_feature_state;
    
    // [Feature_CodeIntegrityReplayEAs_logged_traits]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .rdata:0x2e0b8, 0x13a78 bytes
    // ci.dll .rdata:0x2e0b8, 0x13a78 bytes
    //
    _n41(sdk::unknown_ptr) feature_code_integrity_replay_e_as_logged_traits;
    
    // [Feature_CodeIntegrityReplayEAs__private_reporting]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x373c8, 0x13a78 bytes
    // ci.dll .data:0x373c8, 0x13a78 bytes
    //
    _n42(sdk::unknown_ptr) feature_code_integrity_replay_e_as_private_reporting;
    
    // [Feature_Hub_20H2_WLDP_logged_traits]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .rdata:0x2db68, 0x13a78 bytes
    // ci.dll .rdata:0x2db68, 0x13a78 bytes
    //
    _n43(sdk::unknown_ptr) feature_hub_20h2_wldp_logged_traits;
    
    // [Feature_Hub_20H2_WLDP__private_featureState]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x37368, 0x13a78 bytes
    // ci.dll .data:0x37368, 0x13a78 bytes
    //
    _n44(sdk::unknown_ptr) feature_hub_20h2_wldp_private_feature_state;
    
    // [Feature_Hub_20H2_WLDP__private_IsEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .text:0x1ee0, 0x13a78 bytes
    // ci.dll .text:0x1e50, 0x13a78 bytes
    //
    _n45(sdk::unknown_ptr) feature_hub_20h2_wldp_private_is_enabled;
    
    // [Feature_Hub_20H2_WLDP__private_reporting]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x37380, 0x13a78 bytes
    // ci.dll .data:0x37380, 0x13a78 bytes
    //
    _n46(sdk::unknown_ptr) feature_hub_20h2_wldp_private_reporting;
    
    // [g_CipPolicyStatusLock]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x383f0, 0x13a78 bytes
    // ci.dll .data:0x383f0, 0x13a78 bytes
    //
    _n47(sdk::unknown_ptr) g_cip_policy_status_lock;
    
    // [MinAsn1FindAttribute]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 11
    // ci.dll PAGE:0x3bd54, 0x8dc0 bytes
    // ci.dll PAGE:0x68fc0, 0x13a78 bytes
    //
    _n48(sdk::unknown_ptr) min_asn1_find_attribute;
    
    // [MinAsn1ParseAttributes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 11
    // ci.dll PAGE:0x3cf48, 0x8dc0 bytes
    // ci.dll PAGE:0x68654, 0x13a78 bytes
    //
    _n49(sdk::unknown_ptr) min_asn1_parse_attributes;
    
    // [SbValidateAndParseSModePolicyToken]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .text:0xaf20, 0x13a78 bytes
    // ci.dll .text:0xaea0, 0x13a78 bytes
    //
    _n50(sdk::unknown_ptr) sb_validate_and_parse_s_mode_policy_token;
    
    // [CiScheduleMemoryTrim]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 11
    // ci.dll PAGE:0x237a8, 0x8dc0 bytes
    // ci.dll PAGE:0x3fc68, 0x13a78 bytes
    //
    _n51(sdk::unknown_ptr) schedule_memory_trim;
    
    // [CiAddDynamicCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4965c, 0x13a78 bytes
    // ci.dll PAGE:0x45f9c, 0x13a78 bytes
    // ci.dll PAGE:0x4965c, 0x13a78 bytes
    //
    _n52(sdk::unknown_ptr) add_dynamic_catalog;
    
    // [AllocAndReadStringFromRegistry]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x79b64, 0x13a78 bytes
    // ci.dll PAGE:0x79814, 0x13a78 bytes
    // ci.dll PAGE:0x79c74, 0x13a78 bytes
    //
    _n53(sdk::unknown_ptr) alloc_and_read_string_from_registry;
    
    // [CiAllowExpiredAndRevokedCertWithUMCI]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2de10, 0x13a78 bytes
    // ci.dll .rdata:0x264a8, 0x13a78 bytes
    // ci.dll .rdata:0x2de10, 0x13a78 bytes
    //
    _n54(sdk::unknown_ptr) allow_expired_and_revoked_cert_with_umci;
    
    // [CiApplyPolicyToSyntheticEa]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6094c, 0x13a78 bytes
    // ci.dll PAGE:0x5f54c, 0x13a78 bytes
    // ci.dll PAGE:0x6094c, 0x13a78 bytes
    //
    _n55(sdk::unknown_ptr) apply_policy_to_synthetic_ea;
    
    // [CiAuditCrossChainSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x57be4, 0x13a78 bytes
    // ci.dll PAGE:0x55130, 0x13a78 bytes
    // ci.dll PAGE:0x57be4, 0x13a78 bytes
    //
    _n56(sdk::unknown_ptr) audit_cross_chain_signature;
    
    // [CiBlackBoxInitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x23a0, 0x13a78 bytes
    // ci.dll .text:0x15a0, 0x13a78 bytes
    // ci.dll .text:0x2320, 0x13a78 bytes
    //
    _n57(sdk::unknown_ptr) black_box_initialize;
    
    // [CiBlackBoxValidateImageDataFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x465ec, 0x13a78 bytes
    // ci.dll PAGE:0x42d90, 0x13a78 bytes
    // ci.dll PAGE:0x465ec, 0x13a78 bytes
    //
    _n58(sdk::unknown_ptr) black_box_validate_image_data_failure;
    
    // [CiBlackboxValidateImageHeaderFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x466b4, 0x13a78 bytes
    // ci.dll PAGE:0x42e58, 0x13a78 bytes
    // ci.dll PAGE:0x466b4, 0x13a78 bytes
    //
    _n59(sdk::unknown_ptr) blackbox_validate_image_header_failure;
    
    // [CiBuildEaCacheContents]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x47478, 0x13a78 bytes
    // ci.dll PAGE:0x43bbc, 0x13a78 bytes
    // ci.dll PAGE:0x47478, 0x13a78 bytes
    //
    _n60(sdk::unknown_ptr) build_ea_cache_contents;
    
    // [CiCatDbAlwaysUseResults]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4d864, 0x13a78 bytes
    // ci.dll PAGE:0x4a4b4, 0x13a78 bytes
    // ci.dll PAGE:0x4d864, 0x13a78 bytes
    //
    _n61(sdk::unknown_ptr) cat_db_always_use_results;
    
    // [CiCatDbSmartlockerDefenderCheck]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x2514, 0x13a78 bytes
    // ci.dll .text:0x1708, 0x13a78 bytes
    // ci.dll .text:0x2494, 0x13a78 bytes
    //
    _n62(sdk::unknown_ptr) cat_db_smartlocker_defender_check;
    
    // [CiCheckNtHeaderForHvciCompliance]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9960, 0x13a78 bytes
    // ci.dll .text:0x9214, 0x13a78 bytes
    // ci.dll .text:0x98e0, 0x13a78 bytes
    //
    _n63(sdk::unknown_ptr) check_nt_header_for_hvci_compliance;
    
    // [CiCheckProcessDebugAccessEnumCallback]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4e024, 0x13a78 bytes
    // ci.dll PAGE:0x4b064, 0x13a78 bytes
    // ci.dll PAGE:0x4e024, 0x13a78 bytes
    //
    _n64(sdk::unknown_ptr) check_process_debug_access_enum_callback;
    
    // [CiCheckProcessDebugAccessPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4e080, 0x13a78 bytes
    // ci.dll PAGE:0x4b0c0, 0x13a78 bytes
    // ci.dll PAGE:0x4e080, 0x13a78 bytes
    //
    _n65(sdk::unknown_ptr) check_process_debug_access_policy;
    
    // [CiConvertRtlTimeToSystemTime]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x57f80, 0x13a78 bytes
    // ci.dll PAGE:0x55500, 0x13a78 bytes
    // ci.dll PAGE:0x57f80, 0x13a78 bytes
    //
    _n66(sdk::unknown_ptr) convert_rtl_time_to_system_time;
    
    // [CiCreateHvciComplianceStatusCode]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9b1c, 0x13a78 bytes
    // ci.dll .text:0x93d0, 0x13a78 bytes
    // ci.dll .text:0x9a9c, 0x13a78 bytes
    //
    _n67(sdk::unknown_ptr) create_hvci_compliance_status_code;
    
    // [CiCreateProcessNotifyRoutine]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4dd40, 0x13a78 bytes
    // ci.dll PAGE:0x4ad90, 0x13a78 bytes
    // ci.dll PAGE:0x4dd40, 0x13a78 bytes
    //
    _n68(sdk::unknown_ptr) create_process_notify_routine;
    
    // [CiDebugAuthInitRunOnce]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4dd10, 0x13a78 bytes
    // ci.dll PAGE:0x4ad60, 0x13a78 bytes
    // ci.dll PAGE:0x4dd10, 0x13a78 bytes
    //
    _n69(sdk::unknown_ptr) debug_auth_init_run_once;
    
    // [CiDeinitializeCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x48b58, 0x13a78 bytes
    // ci.dll PAGE:0x453ec, 0x13a78 bytes
    // ci.dll PAGE:0x48b58, 0x13a78 bytes
    //
    _n70(sdk::unknown_ptr) deinitialize_catalogs;
    
    // [g_BlockedDllsForPPL]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2bcb0, 0x13a78 bytes
    // ci.dll .rdata:0x23d00, 0x13a78 bytes
    // ci.dll .rdata:0x2bce0, 0x13a78 bytes
    //
    _n71(sdk::unknown_ptr) g_blocked_dlls_for_ppl;
    
    // [g_CatalogStoreListLock]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x383d8, 0x13a78 bytes
    // ci.dll .data:0x32478, 0x13a78 bytes
    // ci.dll .data:0x383d8, 0x13a78 bytes
    //
    _n72(sdk::unknown_ptr) g_catalog_store_list_lock;
    
    // [g_CiPolicyState]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37810, 0x13a78 bytes
    // ci.dll .data:0x318d0, 0x13a78 bytes
    // ci.dll .data:0x37810, 0x13a78 bytes
    //
    _n73(sdk::unknown_ptr) g_ci_policy_state;
    
    // [g_CiTrustClaimEaName]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2c0f8, 0x13a78 bytes
    // ci.dll .rdata:0x242a8, 0x13a78 bytes
    // ci.dll .rdata:0x2c128, 0x13a78 bytes
    //
    _n74(sdk::unknown_ptr) g_ci_trust_claim_ea_name;
    
    // [g_CiWimList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x198d8, 0x8dc0 bytes
    // ci.dll .data:0x37c78, 0x13a78 bytes
    // ci.dll .data:0x37c78, 0x13a78 bytes
    //
    _n75(sdk::unknown_ptr) g_ci_wim_list;
    
    // [g_CiWimListCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x198d0, 0x8dc0 bytes
    // ci.dll .data:0x37c74, 0x13a78 bytes
    // ci.dll .data:0x37c74, 0x13a78 bytes
    //
    _n76(sdk::unknown_ptr) g_ci_wim_list_count;
    
    // [g_CiWimListLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll .data:0x19ad0, 0x8dc0 bytes
    // ci.dll .data:0x38340, 0x13a78 bytes
    // ci.dll .data:0x38340, 0x13a78 bytes
    //
    _n77(sdk::unknown_ptr) g_ci_wim_list_lock;
    
    // [g_CipPolicyHashLock]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x383b0, 0x13a78 bytes
    // ci.dll .data:0x32450, 0x13a78 bytes
    // ci.dll .data:0x383b0, 0x13a78 bytes
    //
    _n78(sdk::unknown_ptr) g_cip_policy_hash_lock;
    
    // [g_CipPolicyLock]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x383c0, 0x13a78 bytes
    // ci.dll .data:0x32460, 0x13a78 bytes
    // ci.dll .data:0x383c0, 0x13a78 bytes
    //
    _n79(sdk::unknown_ptr) g_cip_policy_lock;
    
    // [g_EmptyString]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2ca10, 0x13a78 bytes
    // ci.dll .rdata:0x24c60, 0x13a78 bytes
    // ci.dll .rdata:0x2ca40, 0x13a78 bytes
    //
    _n80(sdk::unknown_ptr) g_empty_string;
    
    // [g_EnclaveEncodedOid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2bbe0, 0x13a78 bytes
    // ci.dll .rdata:0x23c10, 0x13a78 bytes
    // ci.dll .rdata:0x2bc10, 0x13a78 bytes
    //
    _n81(sdk::unknown_ptr) g_enclave_encoded_oid;
    
    // [g_EnclaveEncodedOidBuffer]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2e808, 0x13a78 bytes
    // ci.dll .rdata:0x27158, 0x13a78 bytes
    // ci.dll .rdata:0x2e808, 0x13a78 bytes
    //
    _n82(sdk::unknown_ptr) g_enclave_encoded_oid_buffer;
    
    // [g_IumEncodedOid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2bed0, 0x13a78 bytes
    // ci.dll .rdata:0x23f40, 0x13a78 bytes
    // ci.dll .rdata:0x2bf00, 0x13a78 bytes
    //
    _n83(sdk::unknown_ptr) g_ium_encoded_oid;
    
    // [g_IumEncodedOidBuffer]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2f570, 0x13a78 bytes
    // ci.dll .rdata:0x27fe0, 0x13a78 bytes
    // ci.dll .rdata:0x2f570, 0x13a78 bytes
    //
    _n84(sdk::unknown_ptr) g_ium_encoded_oid_buffer;
    
    // [g_LegacyFileNames]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37000, 0x13a78 bytes
    // ci.dll .data:0x31000, 0x13a78 bytes
    // ci.dll .data:0x37000, 0x13a78 bytes
    //
    _n85(sdk::unknown_ptr) g_legacy_file_names;
    
    // [g_PlatformSecureSettingProviderString]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2c9f0, 0x13a78 bytes
    // ci.dll .rdata:0x24bc0, 0x13a78 bytes
    // ci.dll .rdata:0x2ca20, 0x13a78 bytes
    //
    _n86(sdk::unknown_ptr) g_platform_secure_setting_provider_string;
    
    // [g_SiPolicyCtx]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37d90, 0x13a78 bytes
    // ci.dll .data:0x31e40, 0x13a78 bytes
    // ci.dll .data:0x37d90, 0x13a78 bytes
    //
    _n87(sdk::unknown_ptr) g_si_policy_ctx;
    
    // [g_SiPolicyDebuggingFlags]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37258, 0x13a78 bytes
    // ci.dll .data:0x31d2c, 0x13a78 bytes
    // ci.dll .data:0x37258, 0x13a78 bytes
    //
    _n88(sdk::unknown_ptr) g_si_policy_debugging_flags;
    
    // [g_SiPolicyIsUefiSystem]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37d98, 0x13a78 bytes
    // ci.dll .data:0x31e48, 0x13a78 bytes
    // ci.dll .data:0x37d98, 0x13a78 bytes
    //
    _n89(sdk::unknown_ptr) g_si_policy_is_uefi_system;
    
    // [g_SiPolicyLegacyIDs]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x371e0, 0x13a78 bytes
    // ci.dll .data:0x31220, 0x13a78 bytes
    // ci.dll .data:0x371e0, 0x13a78 bytes
    //
    _n90(sdk::unknown_ptr) g_si_policy_legacy_i_ds;
    
    // [g_SiPolicyTokens]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37120, 0x13a78 bytes
    // ci.dll .data:0x31150, 0x13a78 bytes
    // ci.dll .data:0x37120, 0x13a78 bytes
    //
    _n91(sdk::unknown_ptr) g_si_policy_tokens;
    
    // [g_SIPolicyWellKnownSids]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37fa0, 0x13a78 bytes
    // ci.dll .data:0x32040, 0x13a78 bytes
    // ci.dll .data:0x37fa0, 0x13a78 bytes
    //
    _n92(sdk::unknown_ptr) g_si_policy_well_known_sids;
    
    // [g_SIPolicyWinPolicyTrialMode]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37d99, 0x13a78 bytes
    // ci.dll .data:0x31e49, 0x13a78 bytes
    // ci.dll .data:0x37d99, 0x13a78 bytes
    //
    _n93(sdk::unknown_ptr) g_si_policy_win_policy_trial_mode;
    
    // [g_SiSessionStore]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37f90, 0x13a78 bytes
    // ci.dll .data:0x32030, 0x13a78 bytes
    // ci.dll .data:0x37f90, 0x13a78 bytes
    //
    _n94(sdk::unknown_ptr) g_si_session_store;
    
    // [g_trustedOriginClaimId]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x37c70, 0x13a78 bytes
    // ci.dll .data:0x31d20, 0x13a78 bytes
    // ci.dll .data:0x37c70, 0x13a78 bytes
    //
    _n95(sdk::unknown_ptr) g_trusted_origin_claim_id;
    
    // [CiGetActionsForImage]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x46518, 0x13a78 bytes
    // ci.dll PAGE:0x41934, 0x13a78 bytes
    // ci.dll PAGE:0x46518, 0x13a78 bytes
    //
    _n96(sdk::unknown_ptr) get_actions_for_image;
    
    // [CiGetBuildExpiryTime]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4e660, 0x13a78 bytes
    // ci.dll PAGE:0x4b720, 0x13a78 bytes
    // ci.dll PAGE:0x4e660, 0x13a78 bytes
    //
    _n97(sdk::unknown_ptr) get_build_expiry_time;
    
    // [CiGetCertPublisherName]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5ff60, 0x13a78 bytes
    // ci.dll PAGE:0x5df00, 0x13a78 bytes
    // ci.dll PAGE:0x5ff60, 0x13a78 bytes
    //
    _n98(sdk::unknown_ptr) get_cert_publisher_name;
    
    // [CiGetFileResourceInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x55b0c, 0x13a78 bytes
    // ci.dll PAGE:0x52d78, 0x13a78 bytes
    // ci.dll PAGE:0x55b0c, 0x13a78 bytes
    //
    _n99(sdk::unknown_ptr) get_file_resource_information;
    
    // [CiGetRegistryDWORD]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x60040, 0x13a78 bytes
    // ci.dll PAGE:0x5dfe0, 0x13a78 bytes
    // ci.dll PAGE:0x60040, 0x13a78 bytes
    //
    _o00(sdk::unknown_ptr) get_registry_dword;
    
    // [CiGetRegistryValue]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x600fc, 0x13a78 bytes
    // ci.dll PAGE:0x5e09c, 0x13a78 bytes
    // ci.dll PAGE:0x600fc, 0x13a78 bytes
    //
    _o01(sdk::unknown_ptr) get_registry_value;
    
    // [CiGetUnlockInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x61794, 0x13a78 bytes
    // ci.dll PAGE:0x602fc, 0x13a78 bytes
    // ci.dll PAGE:0x61794, 0x13a78 bytes
    //
    _o02(sdk::unknown_ptr) get_unlock_information;
    
    // [HashpSelfTest]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x7694, 0x13a78 bytes
    // ci.dll .text:0x6f74, 0x13a78 bytes
    // ci.dll .text:0x7614, 0x13a78 bytes
    //
    _o03(sdk::unknown_ptr) hashp_self_test;
    
    // [CiHvciAuditFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2df78, 0x13a78 bytes
    // ci.dll .rdata:0x26608, 0x13a78 bytes
    // ci.dll .rdata:0x2df78, 0x13a78 bytes
    //
    _o04(sdk::unknown_ptr) hvci_audit_failure;
    
    // [CiHvciFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2db80, 0x13a78 bytes
    // ci.dll .rdata:0x26200, 0x13a78 bytes
    // ci.dll .rdata:0x2db80, 0x13a78 bytes
    //
    _o05(sdk::unknown_ptr) hvci_failure;
    
    // [CiHvciLogIncompatibility]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x64730, 0x13a78 bytes
    // ci.dll PAGE:0x63220, 0x13a78 bytes
    // ci.dll PAGE:0x64730, 0x13a78 bytes
    //
    _o06(sdk::unknown_ptr) hvci_log_incompatibility;
    
    // [CiHvciSetValidationContextForHvci]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x64560, 0x13a78 bytes
    // ci.dll PAGE:0x62fb0, 0x13a78 bytes
    // ci.dll PAGE:0x64560, 0x13a78 bytes
    //
    _o07(sdk::unknown_ptr) hvci_set_validation_context_for_hvci;
    
    // [I_FindFileOrHeaderHashInCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x2597c, 0x8dc0 bytes
    // ci.dll PAGE:0x491d0, 0x13a78 bytes
    // ci.dll PAGE:0x491d0, 0x13a78 bytes
    //
    _o08(sdk::unknown_ptr) i_find_file_or_header_hash_in_catalogs;
    
    // [I_MinAsn1ParseSingleAttribute]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6ab90, 0x13a78 bytes
    // ci.dll PAGE:0x6874c, 0x13a78 bytes
    // ci.dll PAGE:0x6ab90, 0x13a78 bytes
    //
    _o09(sdk::unknown_ptr) i_min_asn1_parse_single_attribute;
    
    // [I_MinCryptFindRootByKey]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6874c, 0x13a78 bytes
    // ci.dll PAGE:0x671b4, 0x13a78 bytes
    // ci.dll PAGE:0x6874c, 0x13a78 bytes
    //
    _o10(sdk::unknown_ptr) i_min_crypt_find_root_by_key;
    
    // [I_ReloadCatalogDirectory]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4b03c, 0x13a78 bytes
    // ci.dll PAGE:0x47c10, 0x13a78 bytes
    // ci.dll PAGE:0x4b03c, 0x13a78 bytes
    //
    _o11(sdk::unknown_ptr) i_reload_catalog_directory;
    
    // [CiInstrumentHVCI]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x58014, 0x13a78 bytes
    // ci.dll PAGE:0x55594, 0x13a78 bytes
    // ci.dll PAGE:0x58014, 0x13a78 bytes
    //
    _o12(sdk::unknown_ptr) instrument_hvci;
    
    // [CiInstrumentPPLBypassBlocked]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x58350, 0x13a78 bytes
    // ci.dll PAGE:0x5595c, 0x13a78 bytes
    // ci.dll PAGE:0x58350, 0x13a78 bytes
    //
    _o13(sdk::unknown_ptr) instrument_ppl_bypass_blocked;
    
    // [CiInstrumentSiPolicyInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x56638, 0x13a78 bytes
    // ci.dll PAGE:0x53974, 0x13a78 bytes
    // ci.dll PAGE:0x56638, 0x13a78 bytes
    //
    _o14(sdk::unknown_ptr) instrument_si_policy_info;
    
    // [CiInstrumentSmartlockerInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x2a84, 0x13a78 bytes
    // ci.dll .text:0x1c60, 0x13a78 bytes
    // ci.dll .text:0x2a04, 0x13a78 bytes
    //
    _o15(sdk::unknown_ptr) instrument_smartlocker_information;
    
    // [CiInstrumentWindowsLockdownModeChange]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5829c, 0x13a78 bytes
    // ci.dll PAGE:0x55888, 0x13a78 bytes
    // ci.dll PAGE:0x5829c, 0x13a78 bytes
    //
    _o16(sdk::unknown_ptr) instrument_windows_lockdown_mode_change;
    
    // [CiIsFileWimBacked]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x35610, 0x8dc0 bytes
    // ci.dll PAGE:0x62658, 0x13a78 bytes
    // ci.dll PAGE:0x62658, 0x13a78 bytes
    //
    _o17(sdk::unknown_ptr) is_file_wim_backed;
    
    // [CiIsPermissionsElevatedOrSystem]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45914, 0x13a78 bytes
    // ci.dll PAGE:0x40bcc, 0x13a78 bytes
    // ci.dll PAGE:0x45914, 0x13a78 bytes
    //
    _o18(sdk::unknown_ptr) is_permissions_elevated_or_system;
    
    // [CiIsSignatureTrustedForIum]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5df58, 0x13a78 bytes
    // ci.dll PAGE:0x5bc90, 0x13a78 bytes
    // ci.dll PAGE:0x5df58, 0x13a78 bytes
    //
    _o19(sdk::unknown_ptr) is_signature_trusted_for_ium;
    
    // [KappxDeriveCatalogPathFromPackageFile]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x76698, 0x13a78 bytes
    // ci.dll PAGE:0x763a8, 0x13a78 bytes
    // ci.dll PAGE:0x767a8, 0x13a78 bytes
    //
    _o20(sdk::unknown_ptr) kappx_derive_catalog_path_from_package_file;
    
    // [KappxParseVersion]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x76b48, 0x13a78 bytes
    // ci.dll PAGE:0x76858, 0x13a78 bytes
    // ci.dll PAGE:0x76c58, 0x13a78 bytes
    //
    _o21(sdk::unknown_ptr) kappx_parse_version;
    
    // [KappxpGetFileNameInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x8918, 0x13a78 bytes
    // ci.dll .text:0x8200, 0x13a78 bytes
    // ci.dll .text:0x8898, 0x13a78 bytes
    //
    _o22(sdk::unknown_ptr) kappxp_get_file_name_information;
    
    // [KappxpStoreNonPackageFileInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x93a4, 0x13a78 bytes
    // ci.dll .text:0x8c6c, 0x13a78 bytes
    // ci.dll .text:0x9324, 0x13a78 bytes
    //
    _o23(sdk::unknown_ptr) kappxp_store_non_package_file_information;
    
    // [CiLogSIPolicyGetPolicyIDs]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x59ce4, 0x13a78 bytes
    // ci.dll PAGE:0x5746c, 0x13a78 bytes
    // ci.dll PAGE:0x59ce4, 0x13a78 bytes
    //
    _o24(sdk::unknown_ptr) log_si_policy_get_policy_i_ds;
    
    // [CiLogSIPolicyGetPolicyNameAndID]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5a014, 0x13a78 bytes
    // ci.dll PAGE:0x577a4, 0x13a78 bytes
    // ci.dll PAGE:0x5a014, 0x13a78 bytes
    //
    _o25(sdk::unknown_ptr) log_si_policy_get_policy_name_and_id;
    
    // [CiLogSIPolicyRefresh]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5a824, 0x13a78 bytes
    // ci.dll PAGE:0x57fd8, 0x13a78 bytes
    // ci.dll PAGE:0x5a824, 0x13a78 bytes
    //
    _o26(sdk::unknown_ptr) log_si_policy_refresh;
    
    // [CiLogSIPolicyRefreshIgnored]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5a774, 0x13a78 bytes
    // ci.dll PAGE:0x57f28, 0x13a78 bytes
    // ci.dll PAGE:0x5a774, 0x13a78 bytes
    //
    _o27(sdk::unknown_ptr) log_si_policy_refresh_ignored;
    
    // [CiLogSIPolicySmartlockerEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x598b8, 0x13a78 bytes
    // ci.dll PAGE:0x57028, 0x13a78 bytes
    // ci.dll PAGE:0x598b8, 0x13a78 bytes
    //
    _o28(sdk::unknown_ptr) log_si_policy_smartlocker_event;
    
    // [CiLogSignatureInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5a370, 0x13a78 bytes
    // ci.dll PAGE:0x57afc, 0x13a78 bytes
    // ci.dll PAGE:0x5a370, 0x13a78 bytes
    //
    _o29(sdk::unknown_ptr) log_signature_information;
    
    // [CiLogStatusEventWithCorrelationId]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x58818, 0x13a78 bytes
    // ci.dll PAGE:0x55f70, 0x13a78 bytes
    // ci.dll PAGE:0x58818, 0x13a78 bytes
    //
    _o30(sdk::unknown_ptr) log_status_event_with_correlation_id;
    
    // [MinAsn1ParseCTL]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6ad6c, 0x13a78 bytes
    // ci.dll PAGE:0x688c8, 0x13a78 bytes
    // ci.dll PAGE:0x6ad6c, 0x13a78 bytes
    //
    _o31(sdk::unknown_ptr) min_asn1_parse_ctl;
    
    // [MinCrypK_DisableEcdsa]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x782c, 0x13a78 bytes
    // ci.dll .text:0x710c, 0x13a78 bytes
    // ci.dll .text:0x77ac, 0x13a78 bytes
    //
    _o32(sdk::unknown_ptr) min_cryp_k_disable_ecdsa;
    
    // [MinCrypK_FindPageHashesInCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x258c0, 0x8dc0 bytes
    // ci.dll PAGE:0x49110, 0x13a78 bytes
    // ci.dll PAGE:0x49110, 0x13a78 bytes
    //
    _o33(sdk::unknown_ptr) min_cryp_k_find_page_hashes_in_catalog;
    
    // [MinCrypK_GetHashLengthLegacyCrypto]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6797c, 0x13a78 bytes
    // ci.dll PAGE:0x676c8, 0x13a78 bytes
    // ci.dll PAGE:0x6797c, 0x13a78 bytes
    //
    _o34(sdk::unknown_ptr) min_cryp_k_get_hash_length_legacy_crypto;
    
    // [MinCryptCheckSignedData]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x66fdc, 0x13a78 bytes
    // ci.dll PAGE:0x65bf4, 0x13a78 bytes
    // ci.dll PAGE:0x66fdc, 0x13a78 bytes
    //
    _o35(sdk::unknown_ptr) min_crypt_check_signed_data;
    
    // [MinCryptDecodeOid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x67494, 0x13a78 bytes
    // ci.dll PAGE:0x66094, 0x13a78 bytes
    // ci.dll PAGE:0x67494, 0x13a78 bytes
    //
    _o36(sdk::unknown_ptr) min_crypt_decode_oid;
    
    // [MinCryptIsFileRevoked]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6737c, 0x13a78 bytes
    // ci.dll PAGE:0x65f7c, 0x13a78 bytes
    // ci.dll PAGE:0x6737c, 0x13a78 bytes
    //
    _o37(sdk::unknown_ptr) min_crypt_is_file_revoked;
    
    // [MincryptParseRDNComponents]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x68aa0, 0x13a78 bytes
    // ci.dll PAGE:0x675c8, 0x13a78 bytes
    // ci.dll PAGE:0x68aa0, 0x13a78 bytes
    //
    _o38(sdk::unknown_ptr) mincrypt_parse_rdn_components;
    
    // [OidDecodeTable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2bf40, 0x13a78 bytes
    // ci.dll .rdata:0x23fb0, 0x13a78 bytes
    // ci.dll .rdata:0x2bf70, 0x13a78 bytes
    //
    _o39(sdk::unknown_ptr) oid_decode_table;
    
    // [OidPrefixTable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2bf00, 0x13a78 bytes
    // ci.dll .rdata:0x23f70, 0x13a78 bytes
    // ci.dll .rdata:0x2bf30, 0x13a78 bytes
    //
    _o40(sdk::unknown_ptr) oid_prefix_table;
    
    // [CiPolicyRefreshActivatePolicyFailed]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2df38, 0x13a78 bytes
    // ci.dll .rdata:0x265c8, 0x13a78 bytes
    // ci.dll .rdata:0x2df38, 0x13a78 bytes
    //
    _o41(sdk::unknown_ptr) policy_refresh_activate_policy_failed;
    
    // [CiPolicyRefreshActivatePolicySucceded]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2db28, 0x13a78 bytes
    // ci.dll .rdata:0x261a8, 0x13a78 bytes
    // ci.dll .rdata:0x2db28, 0x13a78 bytes
    //
    _o42(sdk::unknown_ptr) policy_refresh_activate_policy_succeded;
    
    // [CiPolicyRefreshAttempted]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dc20, 0x13a78 bytes
    // ci.dll .rdata:0x262b0, 0x13a78 bytes
    // ci.dll .rdata:0x2dc20, 0x13a78 bytes
    //
    _o43(sdk::unknown_ptr) policy_refresh_attempted;
    
    // [CiPolicyRefreshFinished]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dcb0, 0x13a78 bytes
    // ci.dll .rdata:0x26348, 0x13a78 bytes
    // ci.dll .rdata:0x2dcb0, 0x13a78 bytes
    //
    _o44(sdk::unknown_ptr) policy_refresh_finished;
    
    // [CiPolicyRefreshIgnored]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2ded8, 0x13a78 bytes
    // ci.dll .rdata:0x26568, 0x13a78 bytes
    // ci.dll .rdata:0x2ded8, 0x13a78 bytes
    //
    _o45(sdk::unknown_ptr) policy_refresh_ignored;
    
    // [CiPolicyRefreshNoChange]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dae8, 0x13a78 bytes
    // ci.dll .rdata:0x26168, 0x13a78 bytes
    // ci.dll .rdata:0x2dae8, 0x13a78 bytes
    //
    _o46(sdk::unknown_ptr) policy_refresh_no_change;
    
    // [CiPolicyRefreshNonRebootless]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dc90, 0x13a78 bytes
    // ci.dll .rdata:0x26328, 0x13a78 bytes
    // ci.dll .rdata:0x2dc90, 0x13a78 bytes
    //
    _o47(sdk::unknown_ptr) policy_refresh_non_rebootless;
    
    // [CiPolicyRefreshNotAllowed]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dd60, 0x13a78 bytes
    // ci.dll .rdata:0x263f8, 0x13a78 bytes
    // ci.dll .rdata:0x2dd60, 0x13a78 bytes
    //
    _o48(sdk::unknown_ptr) policy_refresh_not_allowed;
    
    // [CiPolicyRefreshStarted]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dd00, 0x13a78 bytes
    // ci.dll .rdata:0x26398, 0x13a78 bytes
    // ci.dll .rdata:0x2dd00, 0x13a78 bytes
    //
    _o49(sdk::unknown_ptr) policy_refresh_started;
    
    // [CiPPLRevokedImageNotLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2df90, 0x13a78 bytes
    // ci.dll .rdata:0x26618, 0x13a78 bytes
    // ci.dll .rdata:0x2df90, 0x13a78 bytes
    //
    _o50(sdk::unknown_ptr) ppl_revoked_image_not_loaded;
    
    // [CiQuerySecurityPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x455f0, 0x13a78 bytes
    // ci.dll PAGE:0x40890, 0x13a78 bytes
    // ci.dll PAGE:0x455f0, 0x13a78 bytes
    //
    _o51(sdk::unknown_ptr) query_security_policy;
    
    // [CiReleaseValidationContext]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x624a0, 0x13a78 bytes
    // ci.dll PAGE:0x61280, 0x13a78 bytes
    // ci.dll PAGE:0x624a0, 0x13a78 bytes
    //
    _o52(sdk::unknown_ptr) release_validation_context;
    
    // [CiRemoveDynamicCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4997c, 0x13a78 bytes
    // ci.dll PAGE:0x462c0, 0x13a78 bytes
    // ci.dll PAGE:0x4997c, 0x13a78 bytes
    //
    _o53(sdk::unknown_ptr) remove_dynamic_catalogs;
    
    // [CiRemoveProcessDebugAuthEntries]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4dd5c, 0x13a78 bytes
    // ci.dll PAGE:0x4adac, 0x13a78 bytes
    // ci.dll PAGE:0x4dd5c, 0x13a78 bytes
    //
    _o54(sdk::unknown_ptr) remove_process_debug_auth_entries;
    
    // [CiSanitizeFileName]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x56118, 0x13a78 bytes
    // ci.dll PAGE:0x532e8, 0x13a78 bytes
    // ci.dll PAGE:0x56118, 0x13a78 bytes
    //
    _o55(sdk::unknown_ptr) sanitize_file_name;
    
    // [SbFreeKeys]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb7b8, 0x13a78 bytes
    // ci.dll .text:0xb444, 0x13a78 bytes
    // ci.dll .text:0xb738, 0x13a78 bytes
    //
    _o56(sdk::unknown_ptr) sb_free_keys;
    
    // [SbFreePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb328, 0x13a78 bytes
    // ci.dll .text:0xad58, 0x13a78 bytes
    // ci.dll .text:0xb2a8, 0x13a78 bytes
    //
    _o57(sdk::unknown_ptr) sb_free_policy;
    
    // [SbGetRegistryBinaryInPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb950, 0x13a78 bytes
    // ci.dll .text:0xaef4, 0x13a78 bytes
    // ci.dll .text:0xb8d0, 0x13a78 bytes
    //
    _o58(sdk::unknown_ptr) sb_get_registry_binary_in_policy;
    
    // [SbGetRegistryDWordInPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb90c, 0x13a78 bytes
    // ci.dll .text:0xaeb0, 0x13a78 bytes
    // ci.dll .text:0xb88c, 0x13a78 bytes
    //
    _o59(sdk::unknown_ptr) sb_get_registry_d_word_in_policy;
    
    // [SbGetRegistryGuidInPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb9a0, 0x13a78 bytes
    // ci.dll .text:0xaf44, 0x13a78 bytes
    // ci.dll .text:0xb920, 0x13a78 bytes
    //
    _o60(sdk::unknown_ptr) sb_get_registry_guid_in_policy;
    
    // [SbGetRegistryStringInPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb8b0, 0x13a78 bytes
    // ci.dll .text:0xae54, 0x13a78 bytes
    // ci.dll .text:0xb830, 0x13a78 bytes
    //
    _o61(sdk::unknown_ptr) sb_get_registry_string_in_policy;
    
    // [SbGetUnlockID]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0xb9d50, 0x13a78 bytes
    // ci.dll PAGE:0xb9660, 0x13a78 bytes
    // ci.dll PAGE:0xb9e60, 0x13a78 bytes
    //
    _o62(sdk::unknown_ptr) sb_get_unlock_id;
    
    // [SbIsSupplementalPolicyBoundToDevice]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xabe8, 0x13a78 bytes
    // ci.dll .text:0xa4e8, 0x13a78 bytes
    // ci.dll .text:0xab68, 0x13a78 bytes
    //
    _o63(sdk::unknown_ptr) sb_is_supplemental_policy_bound_to_device;
    
    // [SbLoadFile]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0xb9bc0, 0x13a78 bytes
    // ci.dll PAGE:0xb94d0, 0x13a78 bytes
    // ci.dll PAGE:0xb9cd0, 0x13a78 bytes
    //
    _o64(sdk::unknown_ptr) sb_load_file;
    
    // [SbParseAndVerifySignedSupplementalPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xaca8, 0x13a78 bytes
    // ci.dll .text:0xa5a8, 0x13a78 bytes
    // ci.dll .text:0xac28, 0x13a78 bytes
    //
    _o65(sdk::unknown_ptr) sb_parse_and_verify_signed_supplemental_policy;
    
    // [SbParseKEK]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb778, 0x13a78 bytes
    // ci.dll .text:0xb404, 0x13a78 bytes
    // ci.dll .text:0xb6f8, 0x13a78 bytes
    //
    _o66(sdk::unknown_ptr) sb_parse_kek;
    
    // [SbParsePK]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb738, 0x13a78 bytes
    // ci.dll .text:0xb3c4, 0x13a78 bytes
    // ci.dll .text:0xb6b8, 0x13a78 bytes
    //
    _o67(sdk::unknown_ptr) sb_parse_pk;
    
    // [SbParseSignedPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa960, 0x13a78 bytes
    // ci.dll .text:0xa28c, 0x13a78 bytes
    // ci.dll .text:0xa8e0, 0x13a78 bytes
    //
    _o68(sdk::unknown_ptr) sb_parse_signed_policy;
    
    // [SbParseUnsignedPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb224, 0x13a78 bytes
    // ci.dll .text:0xac58, 0x13a78 bytes
    // ci.dll .text:0xb1a4, 0x13a78 bytes
    //
    _o69(sdk::unknown_ptr) sb_parse_unsigned_policy;
    
    // [SbValidateAndParseDebugAuthToken]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xae2c, 0x13a78 bytes
    // ci.dll .text:0xa72c, 0x13a78 bytes
    // ci.dll .text:0xadac, 0x13a78 bytes
    //
    _o70(sdk::unknown_ptr) sb_validate_and_parse_debug_auth_token;
    
    // [SbValidateSkuUnlockToken]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xad84, 0x13a78 bytes
    // ci.dll .text:0xa684, 0x13a78 bytes
    // ci.dll .text:0xad04, 0x13a78 bytes
    //
    _o71(sdk::unknown_ptr) sb_validate_sku_unlock_token;
    
    // [SbeAlloc]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0xb9b7c, 0x13a78 bytes
    // ci.dll PAGE:0xb948c, 0x13a78 bytes
    // ci.dll PAGE:0xb9c8c, 0x13a78 bytes
    //
    _o72(sdk::unknown_ptr) sbe_alloc;
    
    // [SbeFree]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0xb9ba0, 0x13a78 bytes
    // ci.dll PAGE:0xb94b0, 0x13a78 bytes
    // ci.dll PAGE:0xb9cb0, 0x13a78 bytes
    //
    _o73(sdk::unknown_ptr) sbe_free;
    
    // [SbpFillPolicyDescriptor]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb138, 0x13a78 bytes
    // ci.dll .text:0xab68, 0x13a78 bytes
    // ci.dll .text:0xb0b8, 0x13a78 bytes
    //
    _o74(sdk::unknown_ptr) sbp_fill_policy_descriptor;
    
    // [SbpFindMatchingRegistryRule]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb7d0, 0x13a78 bytes
    // ci.dll .text:0xad74, 0x13a78 bytes
    // ci.dll .text:0xb750, 0x13a78 bytes
    //
    _o75(sdk::unknown_ptr) sbp_find_matching_registry_rule;
    
    // [SbpParseSignatureDatabase]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xb344, 0x13a78 bytes
    // ci.dll .text:0xafc0, 0x13a78 bytes
    // ci.dll .text:0xb2c4, 0x13a78 bytes
    //
    _o76(sdk::unknown_ptr) sbp_parse_signature_database;
    
    // [SbpTRSDataCount]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2b8d0, 0x13a78 bytes
    // ci.dll .rdata:0x238d0, 0x13a78 bytes
    // ci.dll .rdata:0x2b8e0, 0x13a78 bytes
    //
    _o77(sdk::unknown_ptr) sbp_trs_data_count;
    
    // [SbpTRSDataKey]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2b8b0, 0x13a78 bytes
    // ci.dll .rdata:0x238b0, 0x13a78 bytes
    // ci.dll .rdata:0x2b8c0, 0x13a78 bytes
    //
    _o78(sdk::unknown_ptr) sbp_trs_data_key;
    
    // [SbpTRSDataTestFrameworksValue]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2b810, 0x13a78 bytes
    // ci.dll .rdata:0x23810, 0x13a78 bytes
    // ci.dll .rdata:0x2b810, 0x13a78 bytes
    //
    _o79(sdk::unknown_ptr) sbp_trs_data_test_frameworks_value;
    
    // [CiSerializePolicyFileData]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5ec28, 0x13a78 bytes
    // ci.dll PAGE:0x5c8b4, 0x13a78 bytes
    // ci.dll PAGE:0x5ec28, 0x13a78 bytes
    //
    _o80(sdk::unknown_ptr) serialize_policy_file_data;
    
    // [CiSetDebugAuthInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4de18, 0x13a78 bytes
    // ci.dll PAGE:0x4ae68, 0x13a78 bytes
    // ci.dll PAGE:0x4de18, 0x13a78 bytes
    //
    _o81(sdk::unknown_ptr) set_debug_auth_information;
    
    // [CiSetDynamicCodeTrustClaim]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x60db4, 0x13a78 bytes
    // ci.dll PAGE:0x5f940, 0x13a78 bytes
    // ci.dll PAGE:0x60db4, 0x13a78 bytes
    //
    _o82(sdk::unknown_ptr) set_dynamic_code_trust_claim;
    
    // [CiSetFileCacheFailedSigningLevel]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dbb0, 0x13a78 bytes
    // ci.dll .rdata:0x26230, 0x13a78 bytes
    // ci.dll .rdata:0x2dbb0, 0x13a78 bytes
    //
    _o83(sdk::unknown_ptr) set_file_cache_failed_signing_level;
    
    // [CiSetFileCacheFailedValidation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dc60, 0x13a78 bytes
    // ci.dll .rdata:0x262f0, 0x13a78 bytes
    // ci.dll .rdata:0x2dc60, 0x13a78 bytes
    //
    _o84(sdk::unknown_ptr) set_file_cache_failed_validation;
    
    // [CiSetInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45760, 0x13a78 bytes
    // ci.dll PAGE:0x40a00, 0x13a78 bytes
    // ci.dll PAGE:0x45760, 0x13a78 bytes
    //
    _o85(sdk::unknown_ptr) set_information;
    
    // [CiSetInformationProcess]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45820, 0x13a78 bytes
    // ci.dll PAGE:0x40ac0, 0x13a78 bytes
    // ci.dll PAGE:0x45820, 0x13a78 bytes
    //
    _o86(sdk::unknown_ptr) set_information_process;
    
    // [CiSetPolicyInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4584c, 0x13a78 bytes
    // ci.dll PAGE:0x40aec, 0x13a78 bytes
    // ci.dll PAGE:0x4584c, 0x13a78 bytes
    //
    _o87(sdk::unknown_ptr) set_policy_information;
    
    // [CiSetRuntimeUmciSigningLevel]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5ed90, 0x13a78 bytes
    // ci.dll PAGE:0x5ca1c, 0x13a78 bytes
    // ci.dll PAGE:0x5ed90, 0x13a78 bytes
    //
    _o88(sdk::unknown_ptr) set_runtime_umci_signing_level;
    
    // [CiSetTrustedOriginClaimId]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x60320, 0x13a78 bytes
    // ci.dll PAGE:0x5e500, 0x13a78 bytes
    // ci.dll PAGE:0x60320, 0x13a78 bytes
    //
    _o89(sdk::unknown_ptr) set_trusted_origin_claim_id;
    
    // [CiSetUnlockInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x61590, 0x13a78 bytes
    // ci.dll PAGE:0x600c8, 0x13a78 bytes
    // ci.dll PAGE:0x61590, 0x13a78 bytes
    //
    _o90(sdk::unknown_ptr) set_unlock_information;
    
    // [CiSignatureInformationEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dea8, 0x13a78 bytes
    // ci.dll .rdata:0x26538, 0x13a78 bytes
    // ci.dll .rdata:0x2dea8, 0x13a78 bytes
    //
    _o91(sdk::unknown_ptr) signature_information_event;
    
    // [SmartlockerOperationalAudit]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2de00, 0x13a78 bytes
    // ci.dll .rdata:0x26498, 0x13a78 bytes
    // ci.dll .rdata:0x2de00, 0x13a78 bytes
    //
    _o92(sdk::unknown_ptr) smartlocker_operational_audit;
    
    // [SmartlockerOperationalFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dc40, 0x13a78 bytes
    // ci.dll .rdata:0x262d0, 0x13a78 bytes
    // ci.dll .rdata:0x2dc40, 0x13a78 bytes
    //
    _o93(sdk::unknown_ptr) smartlocker_operational_failure;
    
    // [SmartlockerOperationalSuccess]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dd20, 0x13a78 bytes
    // ci.dll .rdata:0x263b8, 0x13a78 bytes
    // ci.dll .rdata:0x2dd20, 0x13a78 bytes
    //
    _o94(sdk::unknown_ptr) smartlocker_operational_success;
    
    // [SmartlockerVerbose]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dc70, 0x13a78 bytes
    // ci.dll .rdata:0x26300, 0x13a78 bytes
    // ci.dll .rdata:0x2dc70, 0x13a78 bytes
    //
    _o95(sdk::unknown_ptr) smartlocker_verbose;
    
    // [SymCryptFdefMontgomerReduce256AsmInternal]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x1d7d2, 0x13a78 bytes
    // ci.dll .text:0x1a652, 0x13a78 bytes
    // ci.dll .text:0x1d752, 0x13a78 bytes
    //
    _o96(sdk::unknown_ptr) sym_crypt_fdef_montgomer_reduce256_asm_internal;
    
    // [CiUnpackPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5ab8c, 0x13a78 bytes
    // ci.dll PAGE:0x58344, 0x13a78 bytes
    // ci.dll PAGE:0x5ab8c, 0x13a78 bytes
    //
    _o97(sdk::unknown_ptr) unpack_policy;
    
    // [CiUpdatePersistentVariablesAndUnregisterSigners]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5eb84, 0x13a78 bytes
    // ci.dll PAGE:0x5c810, 0x13a78 bytes
    // ci.dll PAGE:0x5eb84, 0x13a78 bytes
    //
    _o98(sdk::unknown_ptr) update_persistent_variables_and_unregister_signers;
    
    // [CiUpdatePolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5f720, 0x13a78 bytes
    // ci.dll PAGE:0x5d484, 0x13a78 bytes
    // ci.dll PAGE:0x5f720, 0x13a78 bytes
    //
    _o99(sdk::unknown_ptr) update_policies;
    
    // [CiUpdateValidationContextWithFilePath]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x55288, 0x13a78 bytes
    // ci.dll PAGE:0x52428, 0x13a78 bytes
    // ci.dll PAGE:0x55288, 0x13a78 bytes
    //
    _p00(sdk::unknown_ptr) update_validation_context_with_file_path;
    
    // [CiWindowsModeSwitchFailed]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dc10, 0x13a78 bytes
    // ci.dll .rdata:0x262a0, 0x13a78 bytes
    // ci.dll .rdata:0x2dc10, 0x13a78 bytes
    //
    _p01(sdk::unknown_ptr) windows_mode_switch_failed;
    
    // [CiWindowsModeSwitchSuccess]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2df28, 0x13a78 bytes
    // ci.dll .rdata:0x265b8, 0x13a78 bytes
    // ci.dll .rdata:0x2df28, 0x13a78 bytes
    //
    _p02(sdk::unknown_ptr) windows_mode_switch_success;
    
    // [CiWindowsModeSwitchSwitched]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dca0, 0x13a78 bytes
    // ci.dll .rdata:0x26338, 0x13a78 bytes
    // ci.dll .rdata:0x2dca0, 0x13a78 bytes
    //
    _p03(sdk::unknown_ptr) windows_mode_switch_switched;
    
    // [CiAllocateImageDataForHvci]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35b44, 0x8dc0 bytes
    // ci.dll PAGE:0x62c78, 0x13a78 bytes
    // ci.dll PAGE:0x61628, 0x13a78 bytes
    // ci.dll PAGE:0x62c78, 0x13a78 bytes
    //
    _p04(sdk::unknown_ptr) allocate_image_data_for_hvci;
    
    // [CiAudit]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31d60, 0x8dc0 bytes
    // ci.dll PAGE:0x58ac4, 0x13a78 bytes
    // ci.dll PAGE:0x56240, 0x13a78 bytes
    // ci.dll PAGE:0x58ac4, 0x13a78 bytes
    //
    _p05(sdk::unknown_ptr) audit;
    
    // [CiAuditImageForHvci]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31fa0, 0x8dc0 bytes
    // ci.dll PAGE:0x55820, 0x13a78 bytes
    // ci.dll PAGE:0x52a50, 0x13a78 bytes
    // ci.dll PAGE:0x55820, 0x13a78 bytes
    //
    _p06(sdk::unknown_ptr) audit_image_for_hvci;
    
    // [CiCalculateFirstPageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2b288, 0x8dc0 bytes
    // ci.dll PAGE:0x4efcc, 0x13a78 bytes
    // ci.dll PAGE:0x4c18c, 0x13a78 bytes
    // ci.dll PAGE:0x4efcc, 0x13a78 bytes
    //
    _p07(sdk::unknown_ptr) calculate_first_page_hash;
    
    // [CiCatDbQueryFileHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2a358, 0x8dc0 bytes
    // ci.dll PAGE:0x4d3d4, 0x13a78 bytes
    // ci.dll PAGE:0x4a02c, 0x13a78 bytes
    // ci.dll PAGE:0x4d3d4, 0x13a78 bytes
    //
    _p08(sdk::unknown_ptr) cat_db_query_file_hash;
    
    // [CatNameValueOIDBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x10468, 0x8dc0 bytes
    // ci.dll .rdata:0x2b9b0, 0x13a78 bytes
    // ci.dll .rdata:0x239e0, 0x13a78 bytes
    // ci.dll .rdata:0x2b9d8, 0x13a78 bytes
    //
    _p09(sdk::unknown_ptr) cat_name_value_oid_blob;
    
    // [CiCatalogLoadComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11b70, 0x8dc0 bytes
    // ci.dll .rdata:0x2db38, 0x13a78 bytes
    // ci.dll .rdata:0x261b8, 0x13a78 bytes
    // ci.dll .rdata:0x2db38, 0x13a78 bytes
    //
    _p10(sdk::unknown_ptr) catalog_load_complete;
    
    // [CiCatalogLoadStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d30, 0x8dc0 bytes
    // ci.dll .rdata:0x2dd40, 0x13a78 bytes
    // ci.dll .rdata:0x263d8, 0x13a78 bytes
    // ci.dll .rdata:0x2dd40, 0x13a78 bytes
    //
    _p11(sdk::unknown_ptr) catalog_load_start;
    
    // [CiCheckPolicyBits]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35460, 0x8dc0 bytes
    // ci.dll PAGE:0x62364, 0x13a78 bytes
    // ci.dll PAGE:0x61154, 0x13a78 bytes
    // ci.dll PAGE:0x62364, 0x13a78 bytes
    //
    _p12(sdk::unknown_ptr) check_policy_bits;
    
    // [CiCheckSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23660, 0x8dc0 bytes
    // ci.dll PAGE:0x44910, 0x13a78 bytes
    // ci.dll PAGE:0x3fab0, 0x13a78 bytes
    // ci.dll PAGE:0x44910, 0x13a78 bytes
    //
    _p13(sdk::unknown_ptr) check_signed_file;
    
    // [CiCleanGlobalState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34e70, 0x8dc0 bytes
    // ci.dll PAGE:0x607f0, 0x13a78 bytes
    // ci.dll PAGE:0x5f4c0, 0x13a78 bytes
    // ci.dll PAGE:0x607f0, 0x13a78 bytes
    //
    _p14(sdk::unknown_ptr) clean_global_state;
    
    // [CiCleanupCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x256fc, 0x8dc0 bytes
    // ci.dll PAGE:0x48c38, 0x13a78 bytes
    // ci.dll PAGE:0x454cc, 0x13a78 bytes
    // ci.dll PAGE:0x48c38, 0x13a78 bytes
    //
    _p15(sdk::unknown_ptr) cleanup_catalogs;
    
    // [CodeIntegrityEventProviderId]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11ba0, 0x8dc0 bytes
    // ci.dll .rdata:0x2db70, 0x13a78 bytes
    // ci.dll .rdata:0x261f0, 0x13a78 bytes
    // ci.dll .rdata:0x2db70, 0x13a78 bytes
    //
    _p16(sdk::unknown_ptr) code_integrity_event_provider_id;
    
    // [CiCompareSigningLevels]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x33a90, 0x8dc0 bytes
    // ci.dll PAGE:0x5c0e0, 0x13a78 bytes
    // ci.dll PAGE:0x59860, 0x13a78 bytes
    // ci.dll PAGE:0x5c0e0, 0x13a78 bytes
    //
    _p17(sdk::unknown_ptr) compare_signing_levels;
    
    // [CiCreateSiloNotification]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34df0, 0x8dc0 bytes
    // ci.dll PAGE:0x60760, 0x13a78 bytes
    // ci.dll PAGE:0x5f430, 0x13a78 bytes
    // ci.dll PAGE:0x60760, 0x13a78 bytes
    //
    _p18(sdk::unknown_ptr) create_silo_notification;
    
    // [dwXOR]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGEDATA:0x8607c, 0x8dc0 bytes
    // ci.dll PAGEDATA:0xbc07c, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc07c, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc07c, 0x13a78 bytes
    //
    _p19(sdk::unknown_ptr) dw_xor;
    
    // [CiEvaluatePolicyInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35318, 0x8dc0 bytes
    // ci.dll PAGE:0x620d8, 0x13a78 bytes
    // ci.dll PAGE:0x60e84, 0x13a78 bytes
    // ci.dll PAGE:0x620d8, 0x13a78 bytes
    //
    _p20(sdk::unknown_ptr) evaluate_policy_info;
    
    // [CiFindPageHashesInCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23710, 0x8dc0 bytes
    // ci.dll PAGE:0x449d0, 0x13a78 bytes
    // ci.dll PAGE:0x3fb70, 0x13a78 bytes
    // ci.dll PAGE:0x449d0, 0x13a78 bytes
    //
    _p21(sdk::unknown_ptr) find_page_hashes_in_catalog;
    
    // [CiFindPageHashesInSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23790, 0x8dc0 bytes
    // ci.dll PAGE:0x44a50, 0x13a78 bytes
    // ci.dll PAGE:0x3fc10, 0x13a78 bytes
    // ci.dll PAGE:0x44a50, 0x13a78 bytes
    //
    _p22(sdk::unknown_ptr) find_page_hashes_in_signed_file;
    
    // [FlightSignedNotBeforeVariableName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x10090, 0x8dc0 bytes
    // ci.dll .rdata:0x2b820, 0x13a78 bytes
    // ci.dll .rdata:0x23820, 0x13a78 bytes
    // ci.dll .rdata:0x2b830, 0x13a78 bytes
    //
    _p23(sdk::unknown_ptr) flight_signed_not_before_variable_name;
    
    // [CiFreeImageVerificationInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35590, 0x8dc0 bytes
    // ci.dll PAGE:0x625ec, 0x13a78 bytes
    // ci.dll PAGE:0x613d4, 0x13a78 bytes
    // ci.dll PAGE:0x625ec, 0x13a78 bytes
    //
    _p24(sdk::unknown_ptr) free_image_verification_info;
    
    // [CiFreePolicyInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x237a0, 0x8dc0 bytes
    // ci.dll PAGE:0x44a90, 0x13a78 bytes
    // ci.dll PAGE:0x3fc50, 0x13a78 bytes
    // ci.dll PAGE:0x44a90, 0x13a78 bytes
    //
    _p25(sdk::unknown_ptr) free_policy_info;
    
    // [CiFreeValidationContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2fa40, 0x8dc0 bytes
    // ci.dll PAGE:0x54b58, 0x13a78 bytes
    // ci.dll PAGE:0x51f00, 0x13a78 bytes
    // ci.dll PAGE:0x54b58, 0x13a78 bytes
    //
    _p26(sdk::unknown_ptr) free_validation_context;
    
    // [g_AnyFileWildCardString]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11290, 0x8dc0 bytes
    // ci.dll .rdata:0x2ca60, 0x13a78 bytes
    // ci.dll .rdata:0x24d00, 0x13a78 bytes
    // ci.dll .rdata:0x2ca90, 0x13a78 bytes
    //
    _p27(sdk::unknown_ptr) g_any_file_wild_card_string;
    
    // [g_BootCacheDelay]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190b4, 0x8dc0 bytes
    // ci.dll .data:0x37230, 0x13a78 bytes
    // ci.dll .data:0x31270, 0x13a78 bytes
    // ci.dll .data:0x37230, 0x13a78 bytes
    //
    _p28(sdk::unknown_ptr) g_boot_cache_delay;
    
    // [g_BootDriverList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19cc0, 0x8dc0 bytes
    // ci.dll .data:0x384b0, 0x13a78 bytes
    // ci.dll .data:0x32520, 0x13a78 bytes
    // ci.dll .data:0x384b0, 0x13a78 bytes
    //
    _p29(sdk::unknown_ptr) g_boot_driver_list;
    
    // [g_CatDbAlwaysUseResultsRunOnce]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19450, 0x8dc0 bytes
    // ci.dll .data:0x377d0, 0x13a78 bytes
    // ci.dll .data:0x31898, 0x13a78 bytes
    // ci.dll .data:0x377d0, 0x13a78 bytes
    //
    _p30(sdk::unknown_ptr) g_cat_db_always_use_results_run_once;
    
    // [g_CatalogFileHashAlgorithm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190c0, 0x8dc0 bytes
    // ci.dll .data:0x3723c, 0x13a78 bytes
    // ci.dll .data:0x312b0, 0x13a78 bytes
    // ci.dll .data:0x3723c, 0x13a78 bytes
    //
    _p31(sdk::unknown_ptr) g_catalog_file_hash_algorithm;
    
    // [g_CatalogFileHashLength]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190bc, 0x8dc0 bytes
    // ci.dll .data:0x37238, 0x13a78 bytes
    // ci.dll .data:0x312ac, 0x13a78 bytes
    // ci.dll .data:0x37238, 0x13a78 bytes
    //
    _p32(sdk::unknown_ptr) g_catalog_file_hash_length;
    
    // [g_CatalogListModifierCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19444, 0x8dc0 bytes
    // ci.dll .data:0x377c4, 0x13a78 bytes
    // ci.dll .data:0x31890, 0x13a78 bytes
    // ci.dll .data:0x377c4, 0x13a78 bytes
    //
    _p33(sdk::unknown_ptr) g_catalog_list_modifier_count;
    
    // [g_CiBlocklistUpdateTime]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19b48, 0x8dc0 bytes
    // ci.dll .data:0x383a8, 0x13a78 bytes
    // ci.dll .data:0x32448, 0x13a78 bytes
    // ci.dll .data:0x383a8, 0x13a78 bytes
    //
    _p34(sdk::unknown_ptr) g_ci_blocklist_update_time;
    
    // [g_CiDeveloperMode]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194b4, 0x8dc0 bytes
    // ci.dll .data:0x3782c, 0x13a78 bytes
    // ci.dll CiPolicy:0x3d010, 0x13a78 bytes
    // ci.dll .data:0x3782c, 0x13a78 bytes
    //
    _p35(sdk::unknown_ptr) g_ci_developer_mode;
    
    // [g_CiEaCacheLookasideList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19180, 0x8dc0 bytes
    // ci.dll .data:0x37400, 0x13a78 bytes
    // ci.dll .data:0x31480, 0x13a78 bytes
    // ci.dll .data:0x37400, 0x13a78 bytes
    //
    _p36(sdk::unknown_ptr) g_ci_ea_cache_lookaside_list;
    
    // [g_CiExclusionList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19c28, 0x8dc0 bytes
    // ci.dll .data:0x383e8, 0x13a78 bytes
    // ci.dll .data:0x32458, 0x13a78 bytes
    // ci.dll .data:0x383e8, 0x13a78 bytes
    //
    _p37(sdk::unknown_ptr) g_ci_exclusion_list;
    
    // [g_CiExclusionListCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19cb8, 0x8dc0 bytes
    // ci.dll .data:0x384a0, 0x13a78 bytes
    // ci.dll CiPolicy:0x3d000, 0x13a78 bytes
    // ci.dll .data:0x384a0, 0x13a78 bytes
    //
    _p38(sdk::unknown_ptr) g_ci_exclusion_list_count;
    
    // [g_CiFirmwareType]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19144, 0x8dc0 bytes
    // ci.dll .data:0x37360, 0x13a78 bytes
    // ci.dll .data:0x31404, 0x13a78 bytes
    // ci.dll .data:0x37360, 0x13a78 bytes
    //
    _p39(sdk::unknown_ptr) g_ci_firmware_type;
    
    // [g_CiFlightSignedNotBefore]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19148, 0x8dc0 bytes
    // ci.dll .data:0x37370, 0x13a78 bytes
    // ci.dll .data:0x31408, 0x13a78 bytes
    // ci.dll .data:0x37370, 0x13a78 bytes
    //
    _p40(sdk::unknown_ptr) g_ci_flight_signed_not_before;
    
    // [g_CiHvciDisallowedImages]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19cb0, 0x8dc0 bytes
    // ci.dll .data:0x38498, 0x13a78 bytes
    // ci.dll .data:0x32518, 0x13a78 bytes
    // ci.dll .data:0x38498, 0x13a78 bytes
    //
    _p41(sdk::unknown_ptr) g_ci_hvci_disallowed_images;
    
    // [g_CiHvciDisallowedImagesCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19cd0, 0x8dc0 bytes
    // ci.dll .data:0x384c0, 0x13a78 bytes
    // ci.dll .data:0x32530, 0x13a78 bytes
    // ci.dll .data:0x384c0, 0x13a78 bytes
    //
    _p42(sdk::unknown_ptr) g_ci_hvci_disallowed_images_count;
    
    // [g_CiInitLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19c38, 0x8dc0 bytes
    // ci.dll .data:0x38400, 0x13a78 bytes
    // ci.dll .data:0x32498, 0x13a78 bytes
    // ci.dll .data:0x38400, 0x13a78 bytes
    //
    _p43(sdk::unknown_ptr) g_ci_init_lock;
    
    // [g_CiIsWinPE]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194b8, 0x8dc0 bytes
    // ci.dll .data:0x37830, 0x13a78 bytes
    // ci.dll .data:0x318e8, 0x13a78 bytes
    // ci.dll .data:0x37830, 0x13a78 bytes
    //
    _p44(sdk::unknown_ptr) g_ci_is_win_pe;
    
    // [g_CiLowResourceText]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x106f0, 0x8dc0 bytes
    // ci.dll .rdata:0x2bc90, 0x13a78 bytes
    // ci.dll .rdata:0x23ce0, 0x13a78 bytes
    // ci.dll .rdata:0x2bcc0, 0x13a78 bytes
    //
    _p45(sdk::unknown_ptr) g_ci_low_resource_text;
    
    // [g_CiMemoryTrimScheduled]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19158, 0x8dc0 bytes
    // ci.dll .data:0x37398, 0x13a78 bytes
    // ci.dll .data:0x31414, 0x13a78 bytes
    // ci.dll .data:0x37398, 0x13a78 bytes
    //
    _p46(sdk::unknown_ptr) g_ci_memory_trim_scheduled;
    
    // [g_CiMinimumHashAlgorithm]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190c8, 0x8dc0 bytes
    // ci.dll .data:0x37240, 0x13a78 bytes
    // ci.dll CiPolicy:0x3d00c, 0x13a78 bytes
    // ci.dll .data:0x37240, 0x13a78 bytes
    //
    _p47(sdk::unknown_ptr) g_ci_minimum_hash_algorithm;
    
    // [g_CiOptions]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19b50, 0x8dc0 bytes
    // ci.dll .data:0x383b8, 0x13a78 bytes
    // ci.dll CiPolicy:0x3d004, 0x13a78 bytes
    // ci.dll .data:0x383b8, 0x13a78 bytes
    //
    _p48(sdk::unknown_ptr) g_ci_options;
    
    // [g_CiParallelPageHashContexts]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19458, 0x8dc0 bytes
    // ci.dll .data:0x377e8, 0x13a78 bytes
    // ci.dll .data:0x318a8, 0x13a78 bytes
    // ci.dll .data:0x377e8, 0x13a78 bytes
    //
    _p49(sdk::unknown_ptr) g_ci_parallel_page_hash_contexts;
    
    // [g_CiParallelPageHashContextsAvailableMask]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19460, 0x8dc0 bytes
    // ci.dll .data:0x377f0, 0x13a78 bytes
    // ci.dll .data:0x318b0, 0x13a78 bytes
    // ci.dll .data:0x377f0, 0x13a78 bytes
    //
    _p50(sdk::unknown_ptr) g_ci_parallel_page_hash_contexts_available_mask;
    
    // [g_CiPerfFrequency]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19468, 0x8dc0 bytes
    // ci.dll .data:0x377f8, 0x13a78 bytes
    // ci.dll .data:0x318b8, 0x13a78 bytes
    // ci.dll .data:0x377f8, 0x13a78 bytes
    //
    _p51(sdk::unknown_ptr) g_ci_perf_frequency;
    
    // [g_CiPrivateNtosApis]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19ce0, 0x8dc0 bytes
    // ci.dll .data:0x384e0, 0x13a78 bytes
    // ci.dll .data:0x32540, 0x13a78 bytes
    // ci.dll .data:0x384e0, 0x13a78 bytes
    //
    _p52(sdk::unknown_ptr) g_ci_private_ntos_apis;
    
    // [g_CiProtectedContent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x10130, 0x8dc0 bytes
    // ci.dll .rdata:0x2b8e0, 0x13a78 bytes
    // ci.dll .rdata:0x238e0, 0x13a78 bytes
    // ci.dll .rdata:0x2b8f0, 0x13a78 bytes
    //
    _p53(sdk::unknown_ptr) g_ci_protected_content;
    
    // [g_CiScenarios]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19540, 0x8dc0 bytes
    // ci.dll .data:0x378e0, 0x13a78 bytes
    // ci.dll .data:0x31990, 0x13a78 bytes
    // ci.dll .data:0x378e0, 0x13a78 bytes
    //
    _p54(sdk::unknown_ptr) g_ci_scenarios;
    
    // [g_CiSignerTypeMax]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194bc, 0x8dc0 bytes
    // ci.dll .data:0x37858, 0x13a78 bytes
    // ci.dll .data:0x31910, 0x13a78 bytes
    // ci.dll .data:0x37858, 0x13a78 bytes
    //
    _p55(sdk::unknown_ptr) g_ci_signer_type_max;
    
    // [g_CiSigners]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194c8, 0x8dc0 bytes
    // ci.dll .data:0x37860, 0x13a78 bytes
    // ci.dll .data:0x31918, 0x13a78 bytes
    // ci.dll .data:0x37860, 0x13a78 bytes
    //
    _p56(sdk::unknown_ptr) g_ci_signers;
    
    // [g_CiSignersCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19530, 0x8dc0 bytes
    // ci.dll .data:0x378d0, 0x13a78 bytes
    // ci.dll .data:0x31988, 0x13a78 bytes
    // ci.dll .data:0x378d0, 0x13a78 bytes
    //
    _p57(sdk::unknown_ptr) g_ci_signers_count;
    
    // [g_CiSiloContextSlot]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190d8, 0x8dc0 bytes
    // ci.dll .data:0x37250, 0x13a78 bytes
    // ci.dll .data:0x312c0, 0x13a78 bytes
    // ci.dll .data:0x37250, 0x13a78 bytes
    //
    _p58(sdk::unknown_ptr) g_ci_silo_context_slot;
    
    // [g_CiSiloMonitor]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19ad8, 0x8dc0 bytes
    // ci.dll .data:0x38348, 0x13a78 bytes
    // ci.dll .data:0x323e0, 0x13a78 bytes
    // ci.dll .data:0x38348, 0x13a78 bytes
    //
    _p59(sdk::unknown_ptr) g_ci_silo_monitor;
    
    // [g_CiSysDevWhqlEnforcementDateTime]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190d0, 0x8dc0 bytes
    // ci.dll .data:0x37248, 0x13a78 bytes
    // ci.dll .data:0x312b8, 0x13a78 bytes
    // ci.dll .data:0x37248, 0x13a78 bytes
    //
    _p60(sdk::unknown_ptr) g_ci_sys_dev_whql_enforcement_date_time;
    
    // [g_CiSystemProcess]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19c30, 0x8dc0 bytes
    // ci.dll .data:0x383f8, 0x13a78 bytes
    // ci.dll .data:0x32490, 0x13a78 bytes
    // ci.dll .data:0x383f8, 0x13a78 bytes
    //
    _p61(sdk::unknown_ptr) g_ci_system_process;
    
    // [g_CiSystemProcessText]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x106e0, 0x8dc0 bytes
    // ci.dll .rdata:0x2bc80, 0x13a78 bytes
    // ci.dll .rdata:0x23cd0, 0x13a78 bytes
    // ci.dll .rdata:0x2bcb0, 0x13a78 bytes
    //
    _p62(sdk::unknown_ptr) g_ci_system_process_text;
    
    // [g_CiTestFlags]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19150, 0x8dc0 bytes
    // ci.dll .data:0x37378, 0x13a78 bytes
    // ci.dll .data:0x31410, 0x13a78 bytes
    // ci.dll .data:0x37378, 0x13a78 bytes
    //
    _p63(sdk::unknown_ptr) g_ci_test_flags;
    
    // [g_CiTotalPerfTime]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19478, 0x8dc0 bytes
    // ci.dll .data:0x37808, 0x13a78 bytes
    // ci.dll .data:0x318c8, 0x13a78 bytes
    // ci.dll .data:0x37808, 0x13a78 bytes
    //
    _p64(sdk::unknown_ptr) g_ci_total_perf_time;
    
    // [g_CiUpgradeInProgress]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194b0, 0x8dc0 bytes
    // ci.dll .data:0x37828, 0x13a78 bytes
    // ci.dll CiPolicy:0x3d008, 0x13a78 bytes
    // ci.dll .data:0x37828, 0x13a78 bytes
    //
    _p65(sdk::unknown_ptr) g_ci_upgrade_in_progress;
    
    // [g_CiValidationLookasideList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19280, 0x8dc0 bytes
    // ci.dll .data:0x37480, 0x13a78 bytes
    // ci.dll .data:0x31500, 0x13a78 bytes
    // ci.dll .data:0x37480, 0x13a78 bytes
    //
    _p66(sdk::unknown_ptr) g_ci_validation_lookaside_list;
    
    // [g_CiVslHvciInterface]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19c40, 0x8dc0 bytes
    // ci.dll .data:0x38420, 0x13a78 bytes
    // ci.dll .data:0x324a0, 0x13a78 bytes
    // ci.dll .data:0x38420, 0x13a78 bytes
    //
    _p67(sdk::unknown_ptr) g_ci_vsl_hvci_interface;
    
    // [g_CiWeakCryptoPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194a0, 0x8dc0 bytes
    // ci.dll .data:0x37818, 0x13a78 bytes
    // ci.dll .data:0x318d8, 0x13a78 bytes
    // ci.dll .data:0x37818, 0x13a78 bytes
    //
    _p68(sdk::unknown_ptr) g_ci_weak_crypto_policies;
    
    // [g_CiWeakCryptoPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194d0, 0x8dc0 bytes
    // ci.dll .data:0x37870, 0x13a78 bytes
    // ci.dll .data:0x31920, 0x13a78 bytes
    // ci.dll .data:0x37870, 0x13a78 bytes
    //
    _p69(sdk::unknown_ptr) g_ci_weak_crypto_policy;
    
    // [g_CipCheckedPlatformManifestActive]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19b55, 0x8dc0 bytes
    // ci.dll .data:0x383c9, 0x13a78 bytes
    // ci.dll .data:0x32469, 0x13a78 bytes
    // ci.dll .data:0x383c9, 0x13a78 bytes
    //
    _p70(sdk::unknown_ptr) g_cip_checked_platform_manifest_active;
    
    // [g_CipCustomLevelComparisons]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19b00, 0x8dc0 bytes
    // ci.dll .data:0x38360, 0x13a78 bytes
    // ci.dll .data:0x32400, 0x13a78 bytes
    // ci.dll .data:0x38360, 0x13a78 bytes
    //
    _p71(sdk::unknown_ptr) g_cip_custom_level_comparisons;
    
    // [g_CipIsPlatformManifestActive]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19b54, 0x8dc0 bytes
    // ci.dll .data:0x383c8, 0x13a78 bytes
    // ci.dll .data:0x32468, 0x13a78 bytes
    // ci.dll .data:0x383c8, 0x13a78 bytes
    //
    _p72(sdk::unknown_ptr) g_cip_is_platform_manifest_active;
    
    // [g_CipMinimumTimeOfTrustForDriverStl]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12860, 0x8dc0 bytes
    // ci.dll .rdata:0x2f4e8, 0x13a78 bytes
    // ci.dll .rdata:0x27f48, 0x13a78 bytes
    // ci.dll .rdata:0x2f4e8, 0x13a78 bytes
    //
    _p73(sdk::unknown_ptr) g_cip_minimum_time_of_trust_for_driver_stl;
    
    // [g_CipPerfLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19b58, 0x8dc0 bytes
    // ci.dll .data:0x383d0, 0x13a78 bytes
    // ci.dll .data:0x32470, 0x13a78 bytes
    // ci.dll .data:0x383d0, 0x13a78 bytes
    //
    _p74(sdk::unknown_ptr) g_cip_perf_lock;
    
    // [g_CipRuntimeSignersCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x194c0, 0x8dc0 bytes
    // ci.dll .data:0x3785c, 0x13a78 bytes
    // ci.dll .data:0x31914, 0x13a78 bytes
    // ci.dll .data:0x3785c, 0x13a78 bytes
    //
    _p75(sdk::unknown_ptr) g_cip_runtime_signers_count;
    
    // [g_CipRuntimeSignersList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19ae0, 0x8dc0 bytes
    // ci.dll .data:0x38350, 0x13a78 bytes
    // ci.dll .data:0x323f0, 0x13a78 bytes
    // ci.dll .data:0x38350, 0x13a78 bytes
    //
    _p76(sdk::unknown_ptr) g_cip_runtime_signers_list;
    
    // [g_CipRuntimeSignersLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19b40, 0x8dc0 bytes
    // ci.dll .data:0x383a0, 0x13a78 bytes
    // ci.dll .data:0x32440, 0x13a78 bytes
    // ci.dll .data:0x383a0, 0x13a78 bytes
    //
    _p77(sdk::unknown_ptr) g_cip_runtime_signers_lock;
    
    // [g_CipWhichLevelComparisons]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190a0, 0x8dc0 bytes
    // ci.dll .data:0x370c0, 0x13a78 bytes
    // ci.dll .data:0x310f8, 0x13a78 bytes
    // ci.dll .data:0x370c0, 0x13a78 bytes
    //
    _p78(sdk::unknown_ptr) g_cip_which_level_comparisons;
    
    // [g_DbgComponent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190b0, 0x8dc0 bytes
    // ci.dll .data:0x371d0, 0x13a78 bytes
    // ci.dll .data:0x31210, 0x13a78 bytes
    // ci.dll .data:0x371d0, 0x13a78 bytes
    //
    _p79(sdk::unknown_ptr) g_dbg_component;
    
    // [g_DbgLevel]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19140, 0x8dc0 bytes
    // ci.dll .data:0x37350, 0x13a78 bytes
    // ci.dll .data:0x31400, 0x13a78 bytes
    // ci.dll .data:0x37350, 0x13a78 bytes
    //
    _p80(sdk::unknown_ptr) g_dbg_level;
    
    // [g_DebugPolicyPublisher]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12768, 0x8dc0 bytes
    // ci.dll .rdata:0x2f370, 0x13a78 bytes
    // ci.dll .rdata:0x27dc8, 0x13a78 bytes
    // ci.dll .rdata:0x2f370, 0x13a78 bytes
    //
    _p81(sdk::unknown_ptr) g_debug_policy_publisher;
    
    // [g_EtwEventHandle]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19ca8, 0x8dc0 bytes
    // ci.dll .data:0x38490, 0x13a78 bytes
    // ci.dll .data:0x32510, 0x13a78 bytes
    // ci.dll .data:0x38490, 0x13a78 bytes
    //
    _p82(sdk::unknown_ptr) g_etw_event_handle;
    
    // [g_fGRLLoadFailed]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x1992c, 0x8dc0 bytes
    // ci.dll .data:0x37dc4, 0x13a78 bytes
    // ci.dll .data:0x31e74, 0x13a78 bytes
    // ci.dll .data:0x37dc4, 0x13a78 bytes
    //
    _p83(sdk::unknown_ptr) g_f_grl_load_failed;
    
    // [g_GRLContextLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x199c0, 0x8dc0 bytes
    // ci.dll .data:0x37ea0, 0x13a78 bytes
    // ci.dll .data:0x31f40, 0x13a78 bytes
    // ci.dll .data:0x37ea0, 0x13a78 bytes
    //
    _p84(sdk::unknown_ptr) g_grl_context_lock;
    
    // [g_HashCacheLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19a40, 0x8dc0 bytes
    // ci.dll .data:0x37f20, 0x13a78 bytes
    // ci.dll .data:0x31fc0, 0x13a78 bytes
    // ci.dll .data:0x37f20, 0x13a78 bytes
    //
    _p85(sdk::unknown_ptr) g_hash_cache_lock;
    
    // [g_HvciCatalogLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19c20, 0x8dc0 bytes
    // ci.dll .data:0x383e0, 0x13a78 bytes
    // ci.dll .data:0x32480, 0x13a78 bytes
    // ci.dll .data:0x383e0, 0x13a78 bytes
    //
    _p86(sdk::unknown_ptr) g_hvci_catalog_lock;
    
    // [g_HvciImageValidateInterface]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x10250, 0x8dc0 bytes
    // ci.dll .rdata:0x2b080, 0x13a78 bytes
    // ci.dll .rdata:0x23080, 0x13a78 bytes
    // ci.dll .rdata:0x2b080, 0x13a78 bytes
    //
    _p87(sdk::unknown_ptr) g_hvci_image_validate_interface;
    
    // [g_HvciSupported]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19cf0, 0x8dc0 bytes
    // ci.dll .data:0x38520, 0x13a78 bytes
    // ci.dll .data:0x32580, 0x13a78 bytes
    // ci.dll .data:0x38520, 0x13a78 bytes
    //
    _p88(sdk::unknown_ptr) g_hvci_supported;
    
    // [g_KernelHashBucketList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGEDATA:0x86080, 0x8dc0 bytes
    // ci.dll PAGEDATA:0xbc080, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc080, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc080, 0x13a78 bytes
    //
    _p89(sdk::unknown_ptr) g_kernel_hash_bucket_list;
    
    // [g_MsitTestCodeSignCA3Hash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12810, 0x8dc0 bytes
    // ci.dll .rdata:0x2f410, 0x13a78 bytes
    // ci.dll .rdata:0x27e70, 0x13a78 bytes
    // ci.dll .rdata:0x2f410, 0x13a78 bytes
    //
    _p90(sdk::unknown_ptr) g_msit_test_code_sign_ca3_hash;
    
    // [g_NumberOfSiPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x198e8, 0x8dc0 bytes
    // ci.dll .data:0x37c88, 0x13a78 bytes
    // ci.dll .data:0x31d30, 0x13a78 bytes
    // ci.dll .data:0x37c88, 0x13a78 bytes
    //
    _p91(sdk::unknown_ptr) g_number_of_si_policies;
    
    // [g_pStore]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19938, 0x8dc0 bytes
    // ci.dll .data:0x37dd0, 0x13a78 bytes
    // ci.dll .data:0x31e80, 0x13a78 bytes
    // ci.dll .data:0x37dd0, 0x13a78 bytes
    //
    _p92(sdk::unknown_ptr) g_p_store;
    
    // [g_PEAuthConfigOptions]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19928, 0x8dc0 bytes
    // ci.dll .data:0x37dc0, 0x13a78 bytes
    // ci.dll .data:0x31e70, 0x13a78 bytes
    // ci.dll .data:0x37dc0, 0x13a78 bytes
    //
    _p93(sdk::unknown_ptr) g_pe_auth_config_options;
    
    // [g_PEAuthEtwHandle]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x199a8, 0x8dc0 bytes
    // ci.dll .data:0x37e88, 0x13a78 bytes
    // ci.dll .data:0x31f28, 0x13a78 bytes
    // ci.dll .data:0x37e88, 0x13a78 bytes
    //
    _p94(sdk::unknown_ptr) g_pe_auth_etw_handle;
    
    // [g_PEAuthStateVariables]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190e8, 0x8dc0 bytes
    // ci.dll .data:0x37260, 0x13a78 bytes
    // ci.dll .data:0x312c8, 0x13a78 bytes
    // ci.dll .data:0x37260, 0x13a78 bytes
    //
    _p95(sdk::unknown_ptr) g_pe_auth_state_variables;
    
    // [g_PEBootDriverList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x199b0, 0x8dc0 bytes
    // ci.dll .data:0x37e90, 0x13a78 bytes
    // ci.dll .data:0x31f30, 0x13a78 bytes
    // ci.dll .data:0x37e90, 0x13a78 bytes
    //
    _p96(sdk::unknown_ptr) g_pe_boot_driver_list;
    
    // [g_PEProcessHashBucketList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGEDATA:0x86070, 0x8dc0 bytes
    // ci.dll PAGEDATA:0xbc070, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc070, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc070, 0x13a78 bytes
    //
    _p97(sdk::unknown_ptr) g_pe_process_hash_bucket_list;
    
    // [g_PEProcessList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGEDATA:0x86088, 0x8dc0 bytes
    // ci.dll PAGEDATA:0xbc088, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc088, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc088, 0x13a78 bytes
    //
    _p98(sdk::unknown_ptr) g_pe_process_list;
    
    // [g_PERunOnce]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19930, 0x8dc0 bytes
    // ci.dll .data:0x37dc8, 0x13a78 bytes
    // ci.dll .data:0x31e78, 0x13a78 bytes
    // ci.dll .data:0x37dc8, 0x13a78 bytes
    //
    _p99(sdk::unknown_ptr) g_pe_run_once;
    
    // [g_ReloadInProgressCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19448, 0x8dc0 bytes
    // ci.dll .data:0x377c8, 0x13a78 bytes
    // ci.dll .data:0x31894, 0x13a78 bytes
    // ci.dll .data:0x377c8, 0x13a78 bytes
    //
    _q00(sdk::unknown_ptr) g_reload_in_progress_count;
    
    // [g_rgEmptyHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x13220, 0x8dc0 bytes
    // ci.dll .rdata:0x30d28, 0x13a78 bytes
    // ci.dll .rdata:0x29bf8, 0x13a78 bytes
    // ci.dll .rdata:0x30d28, 0x13a78 bytes
    //
    _q01(sdk::unknown_ptr) g_rg_empty_hash;
    
    // [g_SiPolicyHandles]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x198f0, 0x8dc0 bytes
    // ci.dll .data:0x37c90, 0x13a78 bytes
    // ci.dll .data:0x31d40, 0x13a78 bytes
    // ci.dll .data:0x37c90, 0x13a78 bytes
    //
    _q02(sdk::unknown_ptr) g_si_policy_handles;
    
    // [g_SiPolicyHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19480, 0x8dc0 bytes
    // ci.dll .data:0x37838, 0x13a78 bytes
    // ci.dll .data:0x318f0, 0x13a78 bytes
    // ci.dll .data:0x37838, 0x13a78 bytes
    //
    _q03(sdk::unknown_ptr) g_si_policy_hash;
    
    // [g_SiTotalPerfTime]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19470, 0x8dc0 bytes
    // ci.dll .data:0x37800, 0x13a78 bytes
    // ci.dll .data:0x318c0, 0x13a78 bytes
    // ci.dll .data:0x37800, 0x13a78 bytes
    //
    _q04(sdk::unknown_ptr) g_si_total_perf_time;
    
    // [g_StoreLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19940, 0x8dc0 bytes
    // ci.dll .data:0x37e20, 0x13a78 bytes
    // ci.dll .data:0x31ec0, 0x13a78 bytes
    // ci.dll .data:0x37e20, 0x13a78 bytes
    //
    _q05(sdk::unknown_ptr) g_store_lock;
    
    // [g_TrimBootCacheCatalogEntries]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19cd4, 0x8dc0 bytes
    // ci.dll .data:0x384c4, 0x13a78 bytes
    // ci.dll .data:0x32534, 0x13a78 bytes
    // ci.dll .data:0x384c4, 0x13a78 bytes
    //
    _q06(sdk::unknown_ptr) g_trim_boot_cache_catalog_entries;
    
    // [g_ulPEFailedComponentsCount]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGEDATA:0x86004, 0x8dc0 bytes
    // ci.dll PAGEDATA:0xbc06c, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc06c, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc06c, 0x13a78 bytes
    //
    _q07(sdk::unknown_ptr) g_ul_pe_failed_components_count;
    
    // [g_V1CatalogsSupported]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x190b8, 0x8dc0 bytes
    // ci.dll .data:0x37234, 0x13a78 bytes
    // ci.dll .data:0x312a8, 0x13a78 bytes
    // ci.dll .data:0x37234, 0x13a78 bytes
    //
    _q08(sdk::unknown_ptr) g_v1_catalogs_supported;
    
    // [g_WeakCryptoPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGEDATA:0x86008, 0x8dc0 bytes
    // ci.dll PAGEDATA:0xbc060, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc060, 0x13a78 bytes
    // ci.dll PAGEDATA:0xbc060, 0x13a78 bytes
    //
    _q09(sdk::unknown_ptr) g_weak_crypto_policies;
    
    // [CiGetCatalogHint]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x25260, 0x8dc0 bytes
    // ci.dll PAGE:0x48620, 0x13a78 bytes
    // ci.dll PAGE:0x44e28, 0x13a78 bytes
    // ci.dll PAGE:0x48620, 0x13a78 bytes
    //
    _q10(sdk::unknown_ptr) get_catalog_hint;
    
    // [CiGetCurrentSiloState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x19c4, 0x8dc0 bytes
    // ci.dll .text:0x3a08, 0x13a78 bytes
    // ci.dll .text:0x3404, 0x13a78 bytes
    // ci.dll .text:0x3988, 0x13a78 bytes
    //
    _q11(sdk::unknown_ptr) get_current_silo_state;
    
    // [GetDPLForInterrupt]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa238, 0x8dc0 bytes
    // ci.dll .text:0x9944, 0x13a78 bytes
    // ci.dll .text:0x91f8, 0x13a78 bytes
    // ci.dll .text:0x98c4, 0x13a78 bytes
    //
    _q12(sdk::unknown_ptr) get_dpl_for_interrupt;
    
    // [GetDR7Value]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa224, 0x8dc0 bytes
    // ci.dll .text:0x9928, 0x13a78 bytes
    // ci.dll .text:0x91dc, 0x13a78 bytes
    // ci.dll .text:0x98a8, 0x13a78 bytes
    //
    _q13(sdk::unknown_ptr) get_dr7_value;
    
    // [CiGetFileCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x25210, 0x8dc0 bytes
    // ci.dll PAGE:0x48370, 0x13a78 bytes
    // ci.dll PAGE:0x44a80, 0x13a78 bytes
    // ci.dll PAGE:0x48370, 0x13a78 bytes
    //
    _q14(sdk::unknown_ptr) get_file_cache;
    
    // [CiGetFileCacheComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d90, 0x8dc0 bytes
    // ci.dll .rdata:0x2dda0, 0x13a78 bytes
    // ci.dll .rdata:0x26438, 0x13a78 bytes
    // ci.dll .rdata:0x2dda0, 0x13a78 bytes
    //
    _q15(sdk::unknown_ptr) get_file_cache_complete;
    
    // [CiGetFileCacheStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11cc0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dc80, 0x13a78 bytes
    // ci.dll .rdata:0x26310, 0x13a78 bytes
    // ci.dll .rdata:0x2dc80, 0x13a78 bytes
    //
    _q16(sdk::unknown_ptr) get_file_cache_start;
    
    // [GetGRLFileName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43700, 0x8dc0 bytes
    // ci.dll PAGE:0x79d40, 0x13a78 bytes
    // ci.dll PAGE:0x799f0, 0x13a78 bytes
    // ci.dll PAGE:0x79e50, 0x13a78 bytes
    //
    _q17(sdk::unknown_ptr) get_grl_file_name;
    
    // [CiGetNextSignatureVerification]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35428, 0x8dc0 bytes
    // ci.dll PAGE:0x62320, 0x13a78 bytes
    // ci.dll PAGE:0x61110, 0x13a78 bytes
    // ci.dll PAGE:0x62320, 0x13a78 bytes
    //
    _q18(sdk::unknown_ptr) get_next_signature_verification;
    
    // [CiGetPEInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23530, 0x8dc0 bytes
    // ci.dll PAGE:0x447f0, 0x13a78 bytes
    // ci.dll PAGE:0x3f9a0, 0x13a78 bytes
    // ci.dll PAGE:0x447f0, 0x13a78 bytes
    //
    _q19(sdk::unknown_ptr) get_pe_information;
    
    // [CiGetSortedImageSectionTable]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2ab7c, 0x8dc0 bytes
    // ci.dll PAGE:0x4e844, 0x13a78 bytes
    // ci.dll PAGE:0x4b904, 0x13a78 bytes
    // ci.dll PAGE:0x4e844, 0x13a78 bytes
    //
    _q20(sdk::unknown_ptr) get_sorted_image_section_table;
    
    // [CiGetStrongImageReference]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35b20, 0x8dc0 bytes
    // ci.dll PAGE:0x62c50, 0x13a78 bytes
    // ci.dll PAGE:0x61600, 0x13a78 bytes
    // ci.dll PAGE:0x62c50, 0x13a78 bytes
    //
    _q21(sdk::unknown_ptr) get_strong_image_reference;
    
    // [HashKComputeFirstPageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x37a04, 0x8dc0 bytes
    // ci.dll PAGE:0x65670, 0x13a78 bytes
    // ci.dll PAGE:0x642f0, 0x13a78 bytes
    // ci.dll PAGE:0x65670, 0x13a78 bytes
    //
    _q22(sdk::unknown_ptr) hash_k_compute_first_page_hash;
    
    // [HashKComputeImageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x370b8, 0x8dc0 bytes
    // ci.dll PAGE:0x64c5c, 0x13a78 bytes
    // ci.dll PAGE:0x638e4, 0x13a78 bytes
    // ci.dll PAGE:0x64c5c, 0x13a78 bytes
    //
    _q23(sdk::unknown_ptr) hash_k_compute_image_hash;
    
    // [HashKComputeMemoryHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x37188, 0x8dc0 bytes
    // ci.dll PAGE:0x64dc4, 0x13a78 bytes
    // ci.dll PAGE:0x63a4c, 0x13a78 bytes
    // ci.dll PAGE:0x64dc4, 0x13a78 bytes
    //
    _q24(sdk::unknown_ptr) hash_k_compute_memory_hash;
    
    // [CiHashMemory]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23a50, 0x8dc0 bytes
    // ci.dll PAGE:0x44cd0, 0x13a78 bytes
    // ci.dll PAGE:0x3fec0, 0x13a78 bytes
    // ci.dll PAGE:0x44cd0, 0x13a78 bytes
    //
    _q25(sdk::unknown_ptr) hash_memory;
    
    // [HashpAddExcludeRange]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x37438, 0x8dc0 bytes
    // ci.dll PAGE:0x65088, 0x13a78 bytes
    // ci.dll PAGE:0x63d10, 0x13a78 bytes
    // ci.dll PAGE:0x65088, 0x13a78 bytes
    //
    _q26(sdk::unknown_ptr) hashp_add_exclude_range;
    
    // [HashpEmitExcludeRange]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x374b8, 0x8dc0 bytes
    // ci.dll PAGE:0x65110, 0x13a78 bytes
    // ci.dll PAGE:0x63d98, 0x13a78 bytes
    // ci.dll PAGE:0x65110, 0x13a78 bytes
    //
    _q27(sdk::unknown_ptr) hashp_emit_exclude_range;
    
    // [HashpFinalizeHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3733c, 0x8dc0 bytes
    // ci.dll PAGE:0x64f94, 0x13a78 bytes
    // ci.dll PAGE:0x63c1c, 0x13a78 bytes
    // ci.dll PAGE:0x64f94, 0x13a78 bytes
    //
    _q28(sdk::unknown_ptr) hashp_finalize_hash;
    
    // [HashpImageGetDigestStream]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x37938, 0x8dc0 bytes
    // ci.dll PAGE:0x655ac, 0x13a78 bytes
    // ci.dll PAGE:0x6422c, 0x13a78 bytes
    // ci.dll PAGE:0x655ac, 0x13a78 bytes
    //
    _q29(sdk::unknown_ptr) hashp_image_get_digest_stream;
    
    // [HashpPadHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x373a8, 0x8dc0 bytes
    // ci.dll PAGE:0x65000, 0x13a78 bytes
    // ci.dll PAGE:0x63c88, 0x13a78 bytes
    // ci.dll PAGE:0x65000, 0x13a78 bytes
    //
    _q30(sdk::unknown_ptr) hashp_pad_hash;
    
    // [HashpParsePEHeader]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x37580, 0x8dc0 bytes
    // ci.dll PAGE:0x651dc, 0x13a78 bytes
    // ci.dll PAGE:0x63e60, 0x13a78 bytes
    // ci.dll PAGE:0x651dc, 0x13a78 bytes
    //
    _q31(sdk::unknown_ptr) hashp_parse_pe_header;
    
    // [CiHvciAddNonSectionDataToFileHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3688c, 0x8dc0 bytes
    // ci.dll PAGE:0x63ba0, 0x13a78 bytes
    // ci.dll PAGE:0x625c8, 0x13a78 bytes
    // ci.dll PAGE:0x63ba0, 0x13a78 bytes
    //
    _q32(sdk::unknown_ptr) hvci_add_non_section_data_to_file_hash;
    
    // [CiHvciCalculateHeaderHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36210, 0x8dc0 bytes
    // ci.dll PAGE:0x633b0, 0x13a78 bytes
    // ci.dll PAGE:0x61d80, 0x13a78 bytes
    // ci.dll PAGE:0x633b0, 0x13a78 bytes
    //
    _q33(sdk::unknown_ptr) hvci_calculate_header_hash;
    
    // [CiHvciCalculateImageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36000, 0x8dc0 bytes
    // ci.dll PAGE:0x631a0, 0x13a78 bytes
    // ci.dll PAGE:0x61b70, 0x13a78 bytes
    // ci.dll PAGE:0x631a0, 0x13a78 bytes
    //
    _q34(sdk::unknown_ptr) hvci_calculate_image_hash;
    
    // [CiHvciFreeSecureImageAndUnlockImage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35fb0, 0x8dc0 bytes
    // ci.dll PAGE:0x63140, 0x13a78 bytes
    // ci.dll PAGE:0x61b00, 0x13a78 bytes
    // ci.dll PAGE:0x63140, 0x13a78 bytes
    //
    _q35(sdk::unknown_ptr) hvci_free_secure_image_and_unlock_image;
    
    // [CiHvciLockImageIfNotVerified]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35ef0, 0x8dc0 bytes
    // ci.dll PAGE:0x63070, 0x13a78 bytes
    // ci.dll PAGE:0x61a10, 0x13a78 bytes
    // ci.dll PAGE:0x63070, 0x13a78 bytes
    //
    _q36(sdk::unknown_ptr) hvci_lock_image_if_not_verified;
    
    // [CiHvciPageVerificationFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d40, 0x8dc0 bytes
    // ci.dll .rdata:0x2dd50, 0x13a78 bytes
    // ci.dll .rdata:0x263e8, 0x13a78 bytes
    // ci.dll .rdata:0x2dd50, 0x13a78 bytes
    //
    _q37(sdk::unknown_ptr) hvci_page_verification_failure;
    
    // [CiHvciReleaseResourcesInValidationContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35ec0, 0x8dc0 bytes
    // ci.dll PAGE:0x63030, 0x13a78 bytes
    // ci.dll PAGE:0x619d0, 0x13a78 bytes
    // ci.dll PAGE:0x63030, 0x13a78 bytes
    //
    _q38(sdk::unknown_ptr) hvci_release_resources_in_validation_context;
    
    // [CiHvciSetFileVersionInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36b70, 0x8dc0 bytes
    // ci.dll PAGE:0x641e0, 0x13a78 bytes
    // ci.dll PAGE:0x62c20, 0x13a78 bytes
    // ci.dll PAGE:0x641e0, 0x13a78 bytes
    //
    _q39(sdk::unknown_ptr) hvci_set_file_version_information;
    
    // [CiHvciSetImageBaseAddress]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36a10, 0x8dc0 bytes
    // ci.dll PAGE:0x63d40, 0x13a78 bytes
    // ci.dll PAGE:0x62770, 0x13a78 bytes
    // ci.dll PAGE:0x63d40, 0x13a78 bytes
    //
    _q40(sdk::unknown_ptr) hvci_set_image_base_address;
    
    // [CiHvciTransferRelocationInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36a80, 0x8dc0 bytes
    // ci.dll PAGE:0x63fe0, 0x13a78 bytes
    // ci.dll PAGE:0x62a20, 0x13a78 bytes
    // ci.dll PAGE:0x63fe0, 0x13a78 bytes
    //
    _q41(sdk::unknown_ptr) hvci_transfer_relocation_information;
    
    // [CiHvciTransformStatusSuccess]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36e80, 0x8dc0 bytes
    // ci.dll PAGE:0x64550, 0x13a78 bytes
    // ci.dll PAGE:0x62fa0, 0x13a78 bytes
    // ci.dll PAGE:0x64550, 0x13a78 bytes
    //
    _q42(sdk::unknown_ptr) hvci_transform_status_success;
    
    // [CiHvciUnalignedSection]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11f10, 0x8dc0 bytes
    // ci.dll .rdata:0x2df18, 0x13a78 bytes
    // ci.dll .rdata:0x265a8, 0x13a78 bytes
    // ci.dll .rdata:0x2df18, 0x13a78 bytes
    //
    _q43(sdk::unknown_ptr) hvci_unaligned_section;
    
    // [CiHvciUpdateSePoolForFileHashAndUnlockImage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36800, 0x8dc0 bytes
    // ci.dll PAGE:0x63ac0, 0x13a78 bytes
    // ci.dll PAGE:0x624b0, 0x13a78 bytes
    // ci.dll PAGE:0x63ac0, 0x13a78 bytes
    //
    _q44(sdk::unknown_ptr) hvci_update_se_pool_for_file_hash_and_unlock_image;
    
    // [CiHvciUpdateSePoolWithPageHashesAndUnlockImage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x367f0, 0x8dc0 bytes
    // ci.dll PAGE:0x63aa0, 0x13a78 bytes
    // ci.dll PAGE:0x62490, 0x13a78 bytes
    // ci.dll PAGE:0x63aa0, 0x13a78 bytes
    //
    _q45(sdk::unknown_ptr) hvci_update_se_pool_with_page_hashes_and_unlock_image;
    
    // [CiHvciValidateDynamicCodePages]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36ce4, 0x8dc0 bytes
    // ci.dll PAGE:0x643a0, 0x13a78 bytes
    // ci.dll PAGE:0x62de0, 0x13a78 bytes
    // ci.dll PAGE:0x643a0, 0x13a78 bytes
    //
    _q46(sdk::unknown_ptr) hvci_validate_dynamic_code_pages;
    
    // [CiHvciValidateImageData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x366c0, 0x8dc0 bytes
    // ci.dll PAGE:0x63914, 0x13a78 bytes
    // ci.dll PAGE:0x62304, 0x13a78 bytes
    // ci.dll PAGE:0x63914, 0x13a78 bytes
    //
    _q47(sdk::unknown_ptr) hvci_validate_image_data;
    
    // [CiHvciVerifyFileHashInCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36650, 0x8dc0 bytes
    // ci.dll PAGE:0x63860, 0x13a78 bytes
    // ci.dll PAGE:0x62270, 0x13a78 bytes
    // ci.dll PAGE:0x63860, 0x13a78 bytes
    //
    _q48(sdk::unknown_ptr) hvci_verify_file_hash_in_catalogs;
    
    // [CiHvciVerifyFileHashSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36310, 0x8dc0 bytes
    // ci.dll PAGE:0x634e0, 0x13a78 bytes
    // ci.dll PAGE:0x61eb0, 0x13a78 bytes
    // ci.dll PAGE:0x634e0, 0x13a78 bytes
    //
    _q49(sdk::unknown_ptr) hvci_verify_file_hash_signed_file;
    
    // [CiHvciVerifyPageHashInCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36660, 0x8dc0 bytes
    // ci.dll PAGE:0x638b0, 0x13a78 bytes
    // ci.dll PAGE:0x622b0, 0x13a78 bytes
    // ci.dll PAGE:0x638b0, 0x13a78 bytes
    //
    _q50(sdk::unknown_ptr) hvci_verify_page_hash_in_catalogs;
    
    // [CiHvciVerifyPageHashSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36480, 0x8dc0 bytes
    // ci.dll PAGE:0x63680, 0x13a78 bytes
    // ci.dll PAGE:0x62070, 0x13a78 bytes
    // ci.dll PAGE:0x63680, 0x13a78 bytes
    //
    _q51(sdk::unknown_ptr) hvci_verify_page_hash_signed_file;
    
    // [I_AllocatePageHashes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x28094, 0x8dc0 bytes
    // ci.dll PAGE:0x4c490, 0x13a78 bytes
    // ci.dll PAGE:0x490d4, 0x13a78 bytes
    // ci.dll PAGE:0x4c490, 0x13a78 bytes
    //
    _q52(sdk::unknown_ptr) i_allocate_page_hashes;
    
    // [I_Base64Decode]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x391a0, 0x8dc0 bytes
    // ci.dll PAGE:0x66ea8, 0x13a78 bytes
    // ci.dll PAGE:0x65ac0, 0x13a78 bytes
    // ci.dll PAGE:0x66ea8, 0x13a78 bytes
    //
    _q53(sdk::unknown_ptr) i_base64_decode;
    
    // [I_FindFileOrHeaderHashInLoadedCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x25da8, 0x8dc0 bytes
    // ci.dll PAGE:0x49bb8, 0x13a78 bytes
    // ci.dll PAGE:0x464fc, 0x13a78 bytes
    // ci.dll PAGE:0x49bb8, 0x13a78 bytes
    //
    _q54(sdk::unknown_ptr) i_find_file_or_header_hash_in_loaded_catalogs;
    
    // [I_FindPETrustedAttribute]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x28238, 0x8dc0 bytes
    // ci.dll PAGE:0x4c648, 0x13a78 bytes
    // ci.dll PAGE:0x4928c, 0x13a78 bytes
    // ci.dll PAGE:0x4c648, 0x13a78 bytes
    //
    _q55(sdk::unknown_ptr) i_find_pe_trusted_attribute;
    
    // [I_FreeCatalogData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x26a48, 0x8dc0 bytes
    // ci.dll PAGE:0x4aae8, 0x13a78 bytes
    // ci.dll PAGE:0x47584, 0x13a78 bytes
    // ci.dll PAGE:0x4aae8, 0x13a78 bytes
    //
    _q56(sdk::unknown_ptr) i_free_catalog_data;
    
    // [I_GetNamedCatalogAttributeValue]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27e30, 0x8dc0 bytes
    // ci.dll PAGE:0x4c1cc, 0x13a78 bytes
    // ci.dll PAGE:0x48e04, 0x13a78 bytes
    // ci.dll PAGE:0x4c1cc, 0x13a78 bytes
    //
    _q57(sdk::unknown_ptr) i_get_named_catalog_attribute_value;
    
    // [I_HashSearchCompareRoutineSHA256]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27f60, 0x8dc0 bytes
    // ci.dll PAGE:0x4c300, 0x13a78 bytes
    // ci.dll PAGE:0x48f30, 0x13a78 bytes
    // ci.dll PAGE:0x4c300, 0x13a78 bytes
    //
    _q58(sdk::unknown_ptr) i_hash_search_compare_routine_sha256;
    
    // [I_LocateCatalogPageHashesBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27608, 0x8dc0 bytes
    // ci.dll PAGE:0x4b9cc, 0x13a78 bytes
    // ci.dll PAGE:0x4864c, 0x13a78 bytes
    // ci.dll PAGE:0x4b9cc, 0x13a78 bytes
    //
    _q59(sdk::unknown_ptr) i_locate_catalog_page_hashes_blob;
    
    // [I_MapAndSizeDataFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x26478, 0x8dc0 bytes
    // ci.dll PAGE:0x4a2f0, 0x13a78 bytes
    // ci.dll PAGE:0x46d64, 0x13a78 bytes
    // ci.dll PAGE:0x4a2f0, 0x13a78 bytes
    //
    _q60(sdk::unknown_ptr) i_map_and_size_data_file;
    
    // [I_MapCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x266e0, 0x8dc0 bytes
    // ci.dll PAGE:0x4a5b0, 0x13a78 bytes
    // ci.dll PAGE:0x47030, 0x13a78 bytes
    // ci.dll PAGE:0x4a5b0, 0x13a78 bytes
    //
    _q61(sdk::unknown_ptr) i_map_catalog;
    
    // [I_MapFileHashes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x276a8, 0x8dc0 bytes
    // ci.dll PAGE:0x4ba4c, 0x13a78 bytes
    // ci.dll PAGE:0x486d0, 0x13a78 bytes
    // ci.dll PAGE:0x4ba4c, 0x13a78 bytes
    //
    _q62(sdk::unknown_ptr) i_map_file_hashes;
    
    // [I_MapPageHashes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27a28, 0x8dc0 bytes
    // ci.dll PAGE:0x4bdb4, 0x13a78 bytes
    // ci.dll PAGE:0x48a18, 0x13a78 bytes
    // ci.dll PAGE:0x4bdb4, 0x13a78 bytes
    //
    _q63(sdk::unknown_ptr) i_map_page_hashes;
    
    // [I_MinCryptCheckCertHashWeakCrypto]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x390dc, 0x8dc0 bytes
    // ci.dll PAGE:0x66dd8, 0x13a78 bytes
    // ci.dll PAGE:0x659fc, 0x13a78 bytes
    // ci.dll PAGE:0x66dd8, 0x13a78 bytes
    //
    _q64(sdk::unknown_ptr) i_min_crypt_check_cert_hash_weak_crypto;
    
    // [I_MinCryptFindSignerCertificateByIssuerAndSerialNumber]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x387e8, 0x8dc0 bytes
    // ci.dll PAGE:0x665c4, 0x13a78 bytes
    // ci.dll PAGE:0x651f4, 0x13a78 bytes
    // ci.dll PAGE:0x665c4, 0x13a78 bytes
    //
    _q65(sdk::unknown_ptr) i_min_crypt_find_signer_certificate_by_issuer_and_serial_number;
    
    // [I_MinCryptGetHashAlgorithmFromSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x38fb0, 0x8dc0 bytes
    // ci.dll PAGE:0x66cd4, 0x13a78 bytes
    // ci.dll PAGE:0x658f8, 0x13a78 bytes
    // ci.dll PAGE:0x66cd4, 0x13a78 bytes
    //
    _q66(sdk::unknown_ptr) i_min_crypt_get_hash_algorithm_from_signature;
    
    // [I_MinCryptGetSigningTime]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x38db8, 0x8dc0 bytes
    // ci.dll PAGE:0x66b34, 0x13a78 bytes
    // ci.dll PAGE:0x65758, 0x13a78 bytes
    // ci.dll PAGE:0x66b34, 0x13a78 bytes
    //
    _q67(sdk::unknown_ptr) i_min_crypt_get_signing_time;
    
    // [I_MinCryptIsHashAlgPossiblyWeak]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x39f68, 0x8dc0 bytes
    // ci.dll PAGE:0x68b58, 0x13a78 bytes
    // ci.dll PAGE:0x677c8, 0x13a78 bytes
    // ci.dll PAGE:0x68b58, 0x13a78 bytes
    //
    _q68(sdk::unknown_ptr) i_min_crypt_is_hash_alg_possibly_weak;
    
    // [I_MinCryptVerifyAuthenticodeTimeStamp]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x389fc, 0x8dc0 bytes
    // ci.dll PAGE:0x66784, 0x13a78 bytes
    // ci.dll PAGE:0x653a8, 0x13a78 bytes
    // ci.dll PAGE:0x66784, 0x13a78 bytes
    //
    _q69(sdk::unknown_ptr) i_min_crypt_verify_authenticode_time_stamp;
    
    // [I_MinCryptVerifyRFC3161TimeStamp]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x38c2c, 0x8dc0 bytes
    // ci.dll PAGE:0x6699c, 0x13a78 bytes
    // ci.dll PAGE:0x655c0, 0x13a78 bytes
    // ci.dll PAGE:0x6699c, 0x13a78 bytes
    //
    _q70(sdk::unknown_ptr) i_min_crypt_verify_rfc3161_time_stamp;
    
    // [I_MinCryptVerifySignerAuthenticatedAttributes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x38898, 0x8dc0 bytes
    // ci.dll PAGE:0x6667c, 0x13a78 bytes
    // ci.dll PAGE:0x652ac, 0x13a78 bytes
    // ci.dll PAGE:0x6667c, 0x13a78 bytes
    //
    _q71(sdk::unknown_ptr) i_min_crypt_verify_signer_authenticated_attributes;
    
    // [I_MincryptRebaseChainInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3b5fc, 0x8dc0 bytes
    // ci.dll PAGE:0x690ac, 0x13a78 bytes
    // ci.dll PAGE:0x67d1c, 0x13a78 bytes
    // ci.dll PAGE:0x690ac, 0x13a78 bytes
    //
    _q72(sdk::unknown_ptr) i_mincrypt_rebase_chain_info;
    
    // [I_ParseCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x26b08, 0x8dc0 bytes
    // ci.dll PAGE:0x4abd4, 0x13a78 bytes
    // ci.dll PAGE:0x47684, 0x13a78 bytes
    // ci.dll PAGE:0x4abd4, 0x13a78 bytes
    //
    _q73(sdk::unknown_ptr) i_parse_catalog;
    
    // [I_ParseCatalogAndMapHashes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29950, 0x8dc0 bytes
    // ci.dll PAGE:0x4ca6c, 0x13a78 bytes
    // ci.dll PAGE:0x495c8, 0x13a78 bytes
    // ci.dll PAGE:0x4ca6c, 0x13a78 bytes
    //
    _q74(sdk::unknown_ptr) i_parse_catalog_and_map_hashes;
    
    // [I_PECheckMincryptPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x420bc, 0x8dc0 bytes
    // ci.dll PAGE:0x78214, 0x13a78 bytes
    // ci.dll PAGE:0x77ed8, 0x13a78 bytes
    // ci.dll PAGE:0x78324, 0x13a78 bytes
    //
    _q75(sdk::unknown_ptr) i_pe_check_mincrypt_policy;
    
    // [I_PEGetComponentList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x434e0, 0x8dc0 bytes
    // ci.dll PAGE:0x798e4, 0x13a78 bytes
    // ci.dll PAGE:0x79598, 0x13a78 bytes
    // ci.dll PAGE:0x799f4, 0x13a78 bytes
    //
    _q76(sdk::unknown_ptr) i_pe_get_component_list;
    
    // [I_PEGetComponentListEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43650, 0x8dc0 bytes
    // ci.dll PAGE:0x79a74, 0x13a78 bytes
    // ci.dll PAGE:0x79728, 0x13a78 bytes
    // ci.dll PAGE:0x79b84, 0x13a78 bytes
    //
    _q77(sdk::unknown_ptr) i_pe_get_component_list_ex;
    
    // [I_PELoadGRL]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x42f64, 0x8dc0 bytes
    // ci.dll PAGE:0x792a0, 0x13a78 bytes
    // ci.dll PAGE:0x78f20, 0x13a78 bytes
    // ci.dll PAGE:0x793b0, 0x13a78 bytes
    //
    _q78(sdk::unknown_ptr) i_pe_load_grl;
    
    // [I_PEProcessNotify]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x436d0, 0x8dc0 bytes
    // ci.dll PAGE:0x79b20, 0x13a78 bytes
    // ci.dll PAGE:0x797d0, 0x13a78 bytes
    // ci.dll PAGE:0x79c30, 0x13a78 bytes
    //
    _q79(sdk::unknown_ptr) i_pe_process_notify;
    
    // [I_PESaveCertificates]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x413ac, 0x8dc0 bytes
    // ci.dll PAGE:0x77314, 0x13a78 bytes
    // ci.dll PAGE:0x7706c, 0x13a78 bytes
    // ci.dll PAGE:0x77424, 0x13a78 bytes
    //
    _q80(sdk::unknown_ptr) i_pe_save_certificates;
    
    // [I_PESetTrustState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4230c, 0x8dc0 bytes
    // ci.dll PAGE:0x78494, 0x13a78 bytes
    // ci.dll PAGE:0x78194, 0x13a78 bytes
    // ci.dll PAGE:0x785a4, 0x13a78 bytes
    //
    _q81(sdk::unknown_ptr) i_pe_set_trust_state;
    
    // [I_PEUpdateHashCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43144, 0x8dc0 bytes
    // ci.dll PAGE:0x794cc, 0x13a78 bytes
    // ci.dll PAGE:0x7919c, 0x13a78 bytes
    // ci.dll PAGE:0x795dc, 0x13a78 bytes
    //
    _q82(sdk::unknown_ptr) i_pe_update_hash_cache;
    
    // [I_PEUpdatePEHashBucket]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43374, 0x8dc0 bytes
    // ci.dll PAGE:0x79738, 0x13a78 bytes
    // ci.dll PAGE:0x793ec, 0x13a78 bytes
    // ci.dll PAGE:0x79848, 0x13a78 bytes
    //
    _q83(sdk::unknown_ptr) i_pe_update_pe_hash_bucket;
    
    // [I_PEVerifyAndLogPEAuthCerts]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41478, 0x8dc0 bytes
    // ci.dll PAGE:0x773f4, 0x13a78 bytes
    // ci.dll PAGE:0x7714c, 0x13a78 bytes
    // ci.dll PAGE:0x77504, 0x13a78 bytes
    //
    _q84(sdk::unknown_ptr) i_pe_verify_and_log_pe_auth_certs;
    
    // [I_PEVerifyBootDrivers]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x426b0, 0x8dc0 bytes
    // ci.dll PAGE:0x78890, 0x13a78 bytes
    // ci.dll PAGE:0x78590, 0x13a78 bytes
    // ci.dll PAGE:0x789a0, 0x13a78 bytes
    //
    _q85(sdk::unknown_ptr) i_pe_verify_boot_drivers;
    
    // [I_PEVerifyCertificates]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43064, 0x8dc0 bytes
    // ci.dll PAGE:0x793bc, 0x13a78 bytes
    // ci.dll PAGE:0x79078, 0x13a78 bytes
    // ci.dll PAGE:0x794cc, 0x13a78 bytes
    //
    _q86(sdk::unknown_ptr) i_pe_verify_certificates;
    
    // [I_PEWriteComponentLoadExEvents]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x42360, 0x8dc0 bytes
    // ci.dll PAGE:0x784ec, 0x13a78 bytes
    // ci.dll PAGE:0x781ec, 0x13a78 bytes
    // ci.dll PAGE:0x785fc, 0x13a78 bytes
    //
    _q87(sdk::unknown_ptr) i_pe_write_component_load_ex_events;
    
    // [I_ReloadCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x271e4, 0x8dc0 bytes
    // ci.dll PAGE:0x4b4c4, 0x13a78 bytes
    // ci.dll PAGE:0x48098, 0x13a78 bytes
    // ci.dll PAGE:0x4b4c4, 0x13a78 bytes
    //
    _q88(sdk::unknown_ptr) i_reload_catalog;
    
    // [I_ReloadCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x26d74, 0x8dc0 bytes
    // ci.dll PAGE:0x4adf4, 0x13a78 bytes
    // ci.dll PAGE:0x479bc, 0x13a78 bytes
    // ci.dll PAGE:0x4adf4, 0x13a78 bytes
    //
    _q89(sdk::unknown_ptr) i_reload_catalogs;
    
    // [I_RemapCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x274ac, 0x8dc0 bytes
    // ci.dll PAGE:0x4b850, 0x13a78 bytes
    // ci.dll PAGE:0x484d0, 0x13a78 bytes
    // ci.dll PAGE:0x4b850, 0x13a78 bytes
    //
    _q90(sdk::unknown_ptr) i_remap_catalog;
    
    // [I_SetSecurityState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x42400, 0x8dc0 bytes
    // ci.dll PAGE:0x78598, 0x13a78 bytes
    // ci.dll PAGE:0x78298, 0x13a78 bytes
    // ci.dll PAGE:0x786a8, 0x13a78 bytes
    //
    _q91(sdk::unknown_ptr) i_set_security_state;
    
    // [I_SortDirectoryInfoByFileId]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x26d40, 0x8dc0 bytes
    // ci.dll PAGE:0x4adc0, 0x13a78 bytes
    // ci.dll PAGE:0x47860, 0x13a78 bytes
    // ci.dll PAGE:0x4adc0, 0x13a78 bytes
    //
    _q92(sdk::unknown_ptr) i_sort_directory_info_by_file_id;
    
    // [I_TransferCatalogToHvci]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2a118, 0x8dc0 bytes
    // ci.dll PAGE:0x4d120, 0x13a78 bytes
    // ci.dll PAGE:0x49cf4, 0x13a78 bytes
    // ci.dll PAGE:0x4d120, 0x13a78 bytes
    //
    _q93(sdk::unknown_ptr) i_transfer_catalog_to_hvci;
    
    // [I_TruncatePageHashesBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29ad0, 0x8dc0 bytes
    // ci.dll PAGE:0x4cc2c, 0x13a78 bytes
    // ci.dll PAGE:0x4978c, 0x13a78 bytes
    // ci.dll PAGE:0x4cc2c, 0x13a78 bytes
    //
    _q94(sdk::unknown_ptr) i_truncate_page_hashes_blob;
    
    // [I_ValidatePageHashesBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27fa4, 0x8dc0 bytes
    // ci.dll PAGE:0x4c374, 0x13a78 bytes
    // ci.dll PAGE:0x48fbc, 0x13a78 bytes
    // ci.dll PAGE:0x4c374, 0x13a78 bytes
    //
    _q95(sdk::unknown_ptr) i_validate_page_hashes_blob;
    
    // [CiImageFileHashFoundInCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11e70, 0x8dc0 bytes
    // ci.dll .rdata:0x2de88, 0x13a78 bytes
    // ci.dll .rdata:0x26518, 0x13a78 bytes
    // ci.dll .rdata:0x2de88, 0x13a78 bytes
    //
    _q96(sdk::unknown_ptr) image_file_hash_found_in_catalog;
    
    // [CiImageFileHashFoundInHintCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11dc0, 0x8dc0 bytes
    // ci.dll .rdata:0x2ddd0, 0x13a78 bytes
    // ci.dll .rdata:0x26468, 0x13a78 bytes
    // ci.dll .rdata:0x2ddd0, 0x13a78 bytes
    //
    _q97(sdk::unknown_ptr) image_file_hash_found_in_hint_catalog;
    
    // [CiImageFileHashFoundInImageCertificate]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11db0, 0x8dc0 bytes
    // ci.dll .rdata:0x2ddc0, 0x13a78 bytes
    // ci.dll .rdata:0x26458, 0x13a78 bytes
    // ci.dll .rdata:0x2ddc0, 0x13a78 bytes
    //
    _q98(sdk::unknown_ptr) image_file_hash_found_in_image_certificate;
    
    // [CiImageFileHashNotFound]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d00, 0x8dc0 bytes
    // ci.dll .rdata:0x2dce0, 0x13a78 bytes
    // ci.dll .rdata:0x26378, 0x13a78 bytes
    // ci.dll .rdata:0x2dce0, 0x13a78 bytes
    //
    _q99(sdk::unknown_ptr) image_file_hash_not_found;
    
    // [CiImageFileHashNotFoundDebuggerAttached]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11da0, 0x8dc0 bytes
    // ci.dll .rdata:0x2ddb0, 0x13a78 bytes
    // ci.dll .rdata:0x26448, 0x13a78 bytes
    // ci.dll .rdata:0x2ddb0, 0x13a78 bytes
    //
    _r00(sdk::unknown_ptr) image_file_hash_not_found_debugger_attached;
    
    // [CiImageFileHashSetCatalogHint]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11cf0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dcd0, 0x13a78 bytes
    // ci.dll .rdata:0x26368, 0x13a78 bytes
    // ci.dll .rdata:0x2dcd0, 0x13a78 bytes
    //
    _r01(sdk::unknown_ptr) image_file_hash_set_catalog_hint;
    
    // [CiImagePageHashFoundInCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11de0, 0x8dc0 bytes
    // ci.dll .rdata:0x2de20, 0x13a78 bytes
    // ci.dll .rdata:0x264b8, 0x13a78 bytes
    // ci.dll .rdata:0x2de20, 0x13a78 bytes
    //
    _r02(sdk::unknown_ptr) image_page_hash_found_in_catalog;
    
    // [CiImagePageHashFoundInHintCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11c90, 0x8dc0 bytes
    // ci.dll .rdata:0x2dc30, 0x13a78 bytes
    // ci.dll .rdata:0x262c0, 0x13a78 bytes
    // ci.dll .rdata:0x2dc30, 0x13a78 bytes
    //
    _r03(sdk::unknown_ptr) image_page_hash_found_in_hint_catalog;
    
    // [CiImagePageHashFoundInImageCertificate]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11c50, 0x8dc0 bytes
    // ci.dll .rdata:0x2dbf0, 0x13a78 bytes
    // ci.dll .rdata:0x26278, 0x13a78 bytes
    // ci.dll .rdata:0x2dbf0, 0x13a78 bytes
    //
    _r04(sdk::unknown_ptr) image_page_hash_found_in_image_certificate;
    
    // [CiImagePageHashNotFound]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11e80, 0x8dc0 bytes
    // ci.dll .rdata:0x2de98, 0x13a78 bytes
    // ci.dll .rdata:0x26528, 0x13a78 bytes
    // ci.dll .rdata:0x2de98, 0x13a78 bytes
    //
    _r05(sdk::unknown_ptr) image_page_hash_not_found;
    
    // [CiImagePageHashNotFoundDebuggerAttached]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11ec0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dec8, 0x13a78 bytes
    // ci.dll .rdata:0x26558, 0x13a78 bytes
    // ci.dll .rdata:0x2dec8, 0x13a78 bytes
    //
    _r06(sdk::unknown_ptr) image_page_hash_not_found_debugger_attached;
    
    // [CiImagePageHashSetCatalogHint]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11e20, 0x8dc0 bytes
    // ci.dll .rdata:0x2de40, 0x13a78 bytes
    // ci.dll .rdata:0x264d8, 0x13a78 bytes
    // ci.dll .rdata:0x2de40, 0x13a78 bytes
    //
    _r07(sdk::unknown_ptr) image_page_hash_set_catalog_hint;
    
    // [CiImageSdlRequirementNotMet]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11dd0, 0x8dc0 bytes
    // ci.dll .rdata:0x2ddf0, 0x13a78 bytes
    // ci.dll .rdata:0x26488, 0x13a78 bytes
    // ci.dll .rdata:0x2ddf0, 0x13a78 bytes
    //
    _r08(sdk::unknown_ptr) image_sdl_requirement_not_met;
    
    // [CiImageSdlRequirementNotMetAudit]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11f30, 0x8dc0 bytes
    // ci.dll .rdata:0x2df48, 0x13a78 bytes
    // ci.dll .rdata:0x265d8, 0x13a78 bytes
    // ci.dll .rdata:0x2df48, 0x13a78 bytes
    //
    _r09(sdk::unknown_ptr) image_sdl_requirement_not_met_audit;
    
    // [CiImageSdlRequirementNotMetIgnored]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11f00, 0x8dc0 bytes
    // ci.dll .rdata:0x2df08, 0x13a78 bytes
    // ci.dll .rdata:0x26598, 0x13a78 bytes
    // ci.dll .rdata:0x2df08, 0x13a78 bytes
    //
    _r10(sdk::unknown_ptr) image_sdl_requirement_not_met_ignored;
    
    // [IndirectDataEncodedOIDBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x10448, 0x8dc0 bytes
    // ci.dll .rdata:0x2b990, 0x13a78 bytes
    // ci.dll .rdata:0x239b0, 0x13a78 bytes
    // ci.dll .rdata:0x2b9b8, 0x13a78 bytes
    //
    _r11(sdk::unknown_ptr) indirect_data_encoded_oid_blob;
    
    // [CiInitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x22110, 0x8dc0 bytes
    // ci.dll PAGE:0x43130, 0x13a78 bytes
    // ci.dll PAGE:0x3e140, 0x13a78 bytes
    // ci.dll PAGE:0x43130, 0x13a78 bytes
    //
    _r12(sdk::unknown_ptr) initialize;
    
    // [CiInitializeGlobalState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x11d4, 0x8dc0 bytes
    // ci.dll .text:0x24d0, 0x13a78 bytes
    // ci.dll .text:0x16bc, 0x13a78 bytes
    // ci.dll .text:0x2450, 0x13a78 bytes
    //
    _r13(sdk::unknown_ptr) initialize_global_state;
    
    // [CiInitializeParallelHashingContexts]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2b33c, 0x8dc0 bytes
    // ci.dll PAGE:0x4f088, 0x13a78 bytes
    // ci.dll PAGE:0x4c248, 0x13a78 bytes
    // ci.dll PAGE:0x4f088, 0x13a78 bytes
    //
    _r14(sdk::unknown_ptr) initialize_parallel_hashing_contexts;
    
    // [CiInitializePhase2]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x222a0, 0x8dc0 bytes
    // ci.dll PAGE:0x4345c, 0x13a78 bytes
    // ci.dll PAGE:0x3e4b8, 0x13a78 bytes
    // ci.dll PAGE:0x4345c, 0x13a78 bytes
    //
    _r15(sdk::unknown_ptr) initialize_phase2;
    
    // [CiInitializePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x22130, 0x8dc0 bytes
    // ci.dll PAGE:0x43180, 0x13a78 bytes
    // ci.dll PAGE:0x3e190, 0x13a78 bytes
    // ci.dll PAGE:0x43180, 0x13a78 bytes
    //
    _r16(sdk::unknown_ptr) initialize_policy;
    
    // [CiInitializePolicyFromPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x156c, 0x8dc0 bytes
    // ci.dll .text:0x3520, 0x13a78 bytes
    // ci.dll .text:0x28e8, 0x13a78 bytes
    // ci.dll .text:0x34a0, 0x13a78 bytes
    //
    _r17(sdk::unknown_ptr) initialize_policy_from_policies;
    
    // [CiInitializeValidationContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x354e4, 0x8dc0 bytes
    // ci.dll PAGE:0x623f8, 0x13a78 bytes
    // ci.dll PAGE:0x611dc, 0x13a78 bytes
    // ci.dll PAGE:0x623f8, 0x13a78 bytes
    //
    _r18(sdk::unknown_ptr) initialize_validation_context;
    
    // [CiInstrumentHstiInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x305b8, 0x8dc0 bytes
    // ci.dll PAGE:0x56b8c, 0x13a78 bytes
    // ci.dll PAGE:0x53f98, 0x13a78 bytes
    // ci.dll PAGE:0x56b8c, 0x13a78 bytes
    //
    _r19(sdk::unknown_ptr) instrument_hsti_info;
    
    // [CiInstrumentInitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x30288, 0x8dc0 bytes
    // ci.dll PAGE:0x56384, 0x13a78 bytes
    // ci.dll PAGE:0x53550, 0x13a78 bytes
    // ci.dll PAGE:0x56384, 0x13a78 bytes
    //
    _r20(sdk::unknown_ptr) instrument_initialize;
    
    // [CiInstrumentSignatureFailures]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x30aec, 0x8dc0 bytes
    // ci.dll PAGE:0x570a0, 0x13a78 bytes
    // ci.dll PAGE:0x54500, 0x13a78 bytes
    // ci.dll PAGE:0x570a0, 0x13a78 bytes
    //
    _r21(sdk::unknown_ptr) instrument_signature_failures;
    
    // [CiInvalidCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11b60, 0x8dc0 bytes
    // ci.dll .rdata:0x2db18, 0x13a78 bytes
    // ci.dll .rdata:0x26198, 0x13a78 bytes
    // ci.dll .rdata:0x2db18, 0x13a78 bytes
    //
    _r22(sdk::unknown_ptr) invalid_catalog;
    
    // [CiIsFlightRootTrustDisabled]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34c78, 0x8dc0 bytes
    // ci.dll PAGE:0x5e034, 0x13a78 bytes
    // ci.dll PAGE:0x5bd6c, 0x13a78 bytes
    // ci.dll PAGE:0x5e034, 0x13a78 bytes
    //
    _r23(sdk::unknown_ptr) is_flight_root_trust_disabled;
    
    // [IsNgenPackageFileOnDesktopOrServer]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa0cc, 0x8dc0 bytes
    // ci.dll .text:0x97c0, 0x13a78 bytes
    // ci.dll .text:0x9074, 0x13a78 bytes
    // ci.dll .text:0x9740, 0x13a78 bytes
    //
    _r24(sdk::unknown_ptr) is_ngen_package_file_on_desktop_or_server;
    
    // [IsNgenPackageFileOnPhone]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa15c, 0x8dc0 bytes
    // ci.dll .text:0x9858, 0x13a78 bytes
    // ci.dll .text:0x910c, 0x13a78 bytes
    // ci.dll .text:0x97d8, 0x13a78 bytes
    //
    _r25(sdk::unknown_ptr) is_ngen_package_file_on_phone;
    
    // [IsNgenPackageFileOnPhoneSDCard]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa1c0, 0x8dc0 bytes
    // ci.dll .text:0x98c0, 0x13a78 bytes
    // ci.dll .text:0x9174, 0x13a78 bytes
    // ci.dll .text:0x9840, 0x13a78 bytes
    //
    _r26(sdk::unknown_ptr) is_ngen_package_file_on_phone_sd_card;
    
    // [CiIumPolicyFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11ee0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dee8, 0x13a78 bytes
    // ci.dll .rdata:0x26578, 0x13a78 bytes
    // ci.dll .rdata:0x2dee8, 0x13a78 bytes
    //
    _r27(sdk::unknown_ptr) ium_policy_failure;
    
    // [KappxDerivePackageFullNameFromPackageFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x40cb8, 0x8dc0 bytes
    // ci.dll PAGE:0x76858, 0x13a78 bytes
    // ci.dll PAGE:0x76568, 0x13a78 bytes
    // ci.dll PAGE:0x76968, 0x13a78 bytes
    //
    _r28(sdk::unknown_ptr) kappx_derive_package_full_name_from_package_file;
    
    // [KappxIsPackageFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x40bd0, 0x8dc0 bytes
    // ci.dll PAGE:0x76590, 0x13a78 bytes
    // ci.dll PAGE:0x762a0, 0x13a78 bytes
    // ci.dll PAGE:0x766a0, 0x13a78 bytes
    //
    _r29(sdk::unknown_ptr) kappx_is_package_file;
    
    // [KappxNotifyIntegrityFailureInPackagedProcess]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x40d90, 0x8dc0 bytes
    // ci.dll PAGE:0x76948, 0x13a78 bytes
    // ci.dll PAGE:0x76658, 0x13a78 bytes
    // ci.dll PAGE:0x76a58, 0x13a78 bytes
    //
    _r30(sdk::unknown_ptr) kappx_notify_integrity_failure_in_packaged_process;
    
    // [KappxpDeriveVolumeRelativePathFromFileNameInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x94d8, 0x8dc0 bytes
    // ci.dll .text:0x88b4, 0x13a78 bytes
    // ci.dll .text:0x819c, 0x13a78 bytes
    // ci.dll .text:0x8834, 0x13a78 bytes
    //
    _r31(sdk::unknown_ptr) kappxp_derive_volume_relative_path_from_file_name_information;
    
    // [KappxpDetermineRepositoryPathForFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x980c, 0x8dc0 bytes
    // ci.dll .text:0x8c84, 0x13a78 bytes
    // ci.dll .text:0x8540, 0x13a78 bytes
    // ci.dll .text:0x8c04, 0x13a78 bytes
    //
    _r32(sdk::unknown_ptr) kappxp_determine_repository_path_for_file;
    
    // [KappxpFindSubString]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x997c, 0x8dc0 bytes
    // ci.dll .text:0x8e10, 0x13a78 bytes
    // ci.dll .text:0x86cc, 0x13a78 bytes
    // ci.dll .text:0x8d90, 0x13a78 bytes
    //
    _r33(sdk::unknown_ptr) kappxp_find_sub_string;
    
    // [KappxpFreeRepositoryList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9450, 0x8dc0 bytes
    // ci.dll .text:0x8810, 0x13a78 bytes
    // ci.dll .text:0x80f8, 0x13a78 bytes
    // ci.dll .text:0x8790, 0x13a78 bytes
    //
    _r34(sdk::unknown_ptr) kappxp_free_repository_list;
    
    // [KappxpGeneratePackageRootDirectoryEntry]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9370, 0x8dc0 bytes
    // ci.dll .text:0x871c, 0x13a78 bytes
    // ci.dll .text:0x7fe0, 0x13a78 bytes
    // ci.dll .text:0x869c, 0x13a78 bytes
    //
    _r35(sdk::unknown_ptr) kappxp_generate_package_root_directory_entry;
    
    // [KappxpIncrementPackageStatusVersion]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9c88, 0x8dc0 bytes
    // ci.dll .text:0x91a8, 0x13a78 bytes
    // ci.dll .text:0x8a6c, 0x13a78 bytes
    // ci.dll .text:0x9128, 0x13a78 bytes
    //
    _r36(sdk::unknown_ptr) kappxp_increment_package_status_version;
    
    // [KappxpInitializeRepositoryPath]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x97c8, 0x8dc0 bytes
    // ci.dll .text:0x8c34, 0x13a78 bytes
    // ci.dll .text:0x84f0, 0x13a78 bytes
    // ci.dll .text:0x8bb4, 0x13a78 bytes
    //
    _r37(sdk::unknown_ptr) kappxp_initialize_repository_path;
    
    // [KappxpNotifyNonPackagedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9f68, 0x8dc0 bytes
    // ci.dll .text:0x973c, 0x13a78 bytes
    // ci.dll .text:0x8ff0, 0x13a78 bytes
    // ci.dll .text:0x96bc, 0x13a78 bytes
    //
    _r38(sdk::unknown_ptr) kappxp_notify_non_packaged_file;
    
    // [KappxpNotifyPackagedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9df8, 0x8dc0 bytes
    // ci.dll .text:0x9580, 0x13a78 bytes
    // ci.dll .text:0x8e4c, 0x13a78 bytes
    // ci.dll .text:0x9500, 0x13a78 bytes
    //
    _r39(sdk::unknown_ptr) kappxp_notify_packaged_file;
    
    // [KappxpParsePackageFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9884, 0x8dc0 bytes
    // ci.dll .text:0x8d08, 0x13a78 bytes
    // ci.dll .text:0x85c4, 0x13a78 bytes
    // ci.dll .text:0x8c88, 0x13a78 bytes
    //
    _r40(sdk::unknown_ptr) kappxp_parse_package_file;
    
    // [KappxpQueryNormalizedPackageRepositoryDirPaths]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x9534, 0x8dc0 bytes
    // ci.dll .text:0x8940, 0x13a78 bytes
    // ci.dll .text:0x8228, 0x13a78 bytes
    // ci.dll .text:0x88c0, 0x13a78 bytes
    //
    _r41(sdk::unknown_ptr) kappxp_query_normalized_package_repository_dir_paths;
    
    // [KappxpSetPackageStatus]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x99f4, 0x8dc0 bytes
    // ci.dll .text:0x8e90, 0x13a78 bytes
    // ci.dll .text:0x874c, 0x13a78 bytes
    // ci.dll .text:0x8e10, 0x13a78 bytes
    //
    _r42(sdk::unknown_ptr) kappxp_set_package_status;
    
    // [CiLogCacheEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31ca8, 0x8dc0 bytes
    // ci.dll PAGE:0x589e4, 0x13a78 bytes
    // ci.dll PAGE:0x56160, 0x13a78 bytes
    // ci.dll PAGE:0x589e4, 0x13a78 bytes
    //
    _r43(sdk::unknown_ptr) log_cache_event;
    
    // [CiLogCatalogReload]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3082c, 0x8dc0 bytes
    // ci.dll PAGE:0x56e74, 0x13a78 bytes
    // ci.dll PAGE:0x542b8, 0x13a78 bytes
    // ci.dll PAGE:0x56e74, 0x13a78 bytes
    //
    _r44(sdk::unknown_ptr) log_catalog_reload;
    
    // [CiLogFileAndCatalogEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31a7c, 0x8dc0 bytes
    // ci.dll PAGE:0x5873c, 0x13a78 bytes
    // ci.dll PAGE:0x55e60, 0x13a78 bytes
    // ci.dll PAGE:0x5873c, 0x13a78 bytes
    //
    _r45(sdk::unknown_ptr) log_file_and_catalog_event;
    
    // [CiLogFileEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31874, 0x8dc0 bytes
    // ci.dll PAGE:0x5844c, 0x13a78 bytes
    // ci.dll PAGE:0x55b48, 0x13a78 bytes
    // ci.dll PAGE:0x5844c, 0x13a78 bytes
    //
    _r46(sdk::unknown_ptr) log_file_event;
    
    // [CiLogFileEventWithStatus]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x318ec, 0x8dc0 bytes
    // ci.dll PAGE:0x58514, 0x13a78 bytes
    // ci.dll PAGE:0x55c10, 0x13a78 bytes
    // ci.dll PAGE:0x58514, 0x13a78 bytes
    //
    _r47(sdk::unknown_ptr) log_file_event_with_status;
    
    // [CiLogFileRequestedValidationEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x319a8, 0x8dc0 bytes
    // ci.dll PAGE:0x585cc, 0x13a78 bytes
    // ci.dll PAGE:0x55cf0, 0x13a78 bytes
    // ci.dll PAGE:0x585cc, 0x13a78 bytes
    //
    _r48(sdk::unknown_ptr) log_file_requested_validation_event;
    
    // [CiLogPolicyEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31bb0, 0x8dc0 bytes
    // ci.dll PAGE:0x588cc, 0x13a78 bytes
    // ci.dll PAGE:0x56024, 0x13a78 bytes
    // ci.dll PAGE:0x588cc, 0x13a78 bytes
    //
    _r49(sdk::unknown_ptr) log_policy_event;
    
    // [CiLogSIPolicyEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x1254, 0x8dc0 bytes
    // ci.dll .text:0x2d38, 0x13a78 bytes
    // ci.dll .text:0x2100, 0x13a78 bytes
    // ci.dll .text:0x2cb8, 0x13a78 bytes
    //
    _r50(sdk::unknown_ptr) log_si_policy_event;
    
    // [CiLogSIPolicyEvent2]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32bb8, 0x8dc0 bytes
    // ci.dll PAGE:0x5a268, 0x13a78 bytes
    // ci.dll PAGE:0x579f0, 0x13a78 bytes
    // ci.dll PAGE:0x5a268, 0x13a78 bytes
    //
    _r51(sdk::unknown_ptr) log_si_policy_event2;
    
    // [CiLogWhqlDriverExemption]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x30764, 0x8dc0 bytes
    // ci.dll PAGE:0x56d50, 0x13a78 bytes
    // ci.dll PAGE:0x54174, 0x13a78 bytes
    // ci.dll PAGE:0x56d50, 0x13a78 bytes
    //
    _r52(sdk::unknown_ptr) log_whql_driver_exemption;
    
    // [CiLogWhqlSettingsEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3291c, 0x8dc0 bytes
    // ci.dll PAGE:0x59bcc, 0x13a78 bytes
    // ci.dll PAGE:0x57364, 0x13a78 bytes
    // ci.dll PAGE:0x59bcc, 0x13a78 bytes
    //
    _r53(sdk::unknown_ptr) log_whql_settings_event;
    
    // [MFFreeGRL]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43eac, 0x8dc0 bytes
    // ci.dll PAGE:0x7a480, 0x13a78 bytes
    // ci.dll PAGE:0x7a128, 0x13a78 bytes
    // ci.dll PAGE:0x7a590, 0x13a78 bytes
    //
    _r54(sdk::unknown_ptr) mf_free_grl;
    
    // [MFGetGRL]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43b6c, 0x8dc0 bytes
    // ci.dll PAGE:0x7a0dc, 0x13a78 bytes
    // ci.dll PAGE:0x79d8c, 0x13a78 bytes
    // ci.dll PAGE:0x7a1ec, 0x13a78 bytes
    //
    _r55(sdk::unknown_ptr) mf_get_grl;
    
    // [MFIsHashInGRL]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43f0c, 0x8dc0 bytes
    // ci.dll PAGE:0x7a4fc, 0x13a78 bytes
    // ci.dll PAGE:0x7a1b0, 0x13a78 bytes
    // ci.dll PAGE:0x7a60c, 0x13a78 bytes
    //
    _r56(sdk::unknown_ptr) mf_is_hash_in_grl;
    
    // [MFKeyIsTrustedRootKey]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x43fe8, 0x8dc0 bytes
    // ci.dll PAGE:0x7a5e8, 0x13a78 bytes
    // ci.dll PAGE:0x7a29c, 0x13a78 bytes
    // ci.dll PAGE:0x7a6f8, 0x13a78 bytes
    //
    _r57(sdk::unknown_ptr) mf_key_is_trusted_root_key;
    
    // [MinAsn1FindExtensionMatchingValue]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3bdcc, 0x8dc0 bytes
    // ci.dll PAGE:0x69820, 0x13a78 bytes
    // ci.dll PAGE:0x68ef4, 0x13a78 bytes
    // ci.dll PAGE:0x69820, 0x13a78 bytes
    //
    _r58(sdk::unknown_ptr) min_asn1_find_extension_matching_value;
    
    // [MinAsn1FindPageHashesAttribute]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3bf44, 0x8dc0 bytes
    // ci.dll PAGE:0x69968, 0x13a78 bytes
    // ci.dll PAGE:0x690bc, 0x13a78 bytes
    // ci.dll PAGE:0x69968, 0x13a78 bytes
    //
    _r59(sdk::unknown_ptr) min_asn1_find_page_hashes_attribute;
    
    // [MinAsn1ParseExtensions]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3cce0, 0x8dc0 bytes
    // ci.dll PAGE:0x6a7ec, 0x13a78 bytes
    // ci.dll PAGE:0x682f4, 0x13a78 bytes
    // ci.dll PAGE:0x6a7ec, 0x13a78 bytes
    //
    _r60(sdk::unknown_ptr) min_asn1_parse_extensions;
    
    // [MinAsn1ParseIndirectData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d018, 0x8dc0 bytes
    // ci.dll PAGE:0x6adb4, 0x13a78 bytes
    // ci.dll PAGE:0x68954, 0x13a78 bytes
    // ci.dll PAGE:0x6adb4, 0x13a78 bytes
    //
    _r61(sdk::unknown_ptr) min_asn1_parse_indirect_data;
    
    // [MinAsn1ParseNestedSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d058, 0x8dc0 bytes
    // ci.dll PAGE:0x6af1c, 0x13a78 bytes
    // ci.dll PAGE:0x68ab4, 0x13a78 bytes
    // ci.dll PAGE:0x6af1c, 0x13a78 bytes
    //
    _r62(sdk::unknown_ptr) min_asn1_parse_nested_signature;
    
    // [MinAsn1ParseSignedData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3cdb0, 0x8dc0 bytes
    // ci.dll PAGE:0x6aa5c, 0x13a78 bytes
    // ci.dll PAGE:0x68520, 0x13a78 bytes
    // ci.dll PAGE:0x6aa5c, 0x13a78 bytes
    //
    _r63(sdk::unknown_ptr) min_asn1_parse_signed_data;
    
    // [MinCrypK_CheckSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x26240, 0x8dc0 bytes
    // ci.dll PAGE:0x4a0a0, 0x13a78 bytes
    // ci.dll PAGE:0x46b14, 0x13a78 bytes
    // ci.dll PAGE:0x4a0a0, 0x13a78 bytes
    //
    _r64(sdk::unknown_ptr) min_cryp_k_check_signed_file;
    
    // [MinCrypK_FindPageHashesInSignedCert]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x260a8, 0x8dc0 bytes
    // ci.dll PAGE:0x49ee8, 0x13a78 bytes
    // ci.dll PAGE:0x46968, 0x13a78 bytes
    // ci.dll PAGE:0x49ee8, 0x13a78 bytes
    //
    _r65(sdk::unknown_ptr) min_cryp_k_find_page_hashes_in_signed_cert;
    
    // [MinCrypK_FindPageHashesInSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x26374, 0x8dc0 bytes
    // ci.dll PAGE:0x4a1d8, 0x13a78 bytes
    // ci.dll PAGE:0x46c4c, 0x13a78 bytes
    // ci.dll PAGE:0x4a1d8, 0x13a78 bytes
    //
    _r66(sdk::unknown_ptr) min_cryp_k_find_page_hashes_in_signed_file;
    
    // [MinCrypK_GetHashLength]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x39f28, 0x8dc0 bytes
    // ci.dll PAGE:0x67934, 0x13a78 bytes
    // ci.dll PAGE:0x67680, 0x13a78 bytes
    // ci.dll PAGE:0x67934, 0x13a78 bytes
    //
    _r67(sdk::unknown_ptr) min_cryp_k_get_hash_length;
    
    // [MinCrypK_Initialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x396a4, 0x8dc0 bytes
    // ci.dll PAGE:0x673a0, 0x13a78 bytes
    // ci.dll PAGE:0x65fa0, 0x13a78 bytes
    // ci.dll PAGE:0x673a0, 0x13a78 bytes
    //
    _r68(sdk::unknown_ptr) min_cryp_k_initialize;
    
    // [MinCrypK_VerifyHashInCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x25798, 0x8dc0 bytes
    // ci.dll PAGE:0x48fe4, 0x13a78 bytes
    // ci.dll PAGE:0x45930, 0x13a78 bytes
    // ci.dll PAGE:0x48fe4, 0x13a78 bytes
    //
    _r69(sdk::unknown_ptr) min_cryp_k_verify_hash_in_catalog;
    
    // [MinCrypK_VerifySignedDataKModeEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x37ca4, 0x8dc0 bytes
    // ci.dll PAGE:0x65928, 0x13a78 bytes
    // ci.dll PAGE:0x645a8, 0x13a78 bytes
    // ci.dll PAGE:0x65928, 0x13a78 bytes
    //
    _r70(sdk::unknown_ptr) min_cryp_k_verify_signed_data_k_mode_ex;
    
    // [MinCryptFreeSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x387bc, 0x8dc0 bytes
    // ci.dll PAGE:0x66584, 0x13a78 bytes
    // ci.dll PAGE:0x651b4, 0x13a78 bytes
    // ci.dll PAGE:0x66584, 0x13a78 bytes
    //
    _r71(sdk::unknown_ptr) min_crypt_free_signature;
    
    // [MinCryptGetHashAlgorithmFromSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x38384, 0x8dc0 bytes
    // ci.dll PAGE:0x6614c, 0x13a78 bytes
    // ci.dll PAGE:0x64d7c, 0x13a78 bytes
    // ci.dll PAGE:0x6614c, 0x13a78 bytes
    //
    _r72(sdk::unknown_ptr) min_crypt_get_hash_algorithm_from_signature;
    
    // [MinCryptGetHashAlgorithmFromWinCertificate]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x384d8, 0x8dc0 bytes
    // ci.dll PAGE:0x66298, 0x13a78 bytes
    // ci.dll PAGE:0x64ec8, 0x13a78 bytes
    // ci.dll PAGE:0x66298, 0x13a78 bytes
    //
    _r73(sdk::unknown_ptr) min_crypt_get_hash_algorithm_from_win_certificate;
    
    // [MinCryptGetNextSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x38554, 0x8dc0 bytes
    // ci.dll PAGE:0x6631c, 0x13a78 bytes
    // ci.dll PAGE:0x64f4c, 0x13a78 bytes
    // ci.dll PAGE:0x6631c, 0x13a78 bytes
    //
    _r74(sdk::unknown_ptr) min_crypt_get_next_signature;
    
    // [MinCryptParseRevocationList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x393ac, 0x8dc0 bytes
    // ci.dll PAGE:0x67090, 0x13a78 bytes
    // ci.dll PAGE:0x65ca4, 0x13a78 bytes
    // ci.dll PAGE:0x67090, 0x13a78 bytes
    //
    _r75(sdk::unknown_ptr) min_crypt_parse_revocation_list;
    
    // [MinCryptRevokePrereleaseWindowsPCA]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x8cb0, 0x8dc0 bytes
    // ci.dll .text:0x7764, 0x13a78 bytes
    // ci.dll .text:0x7044, 0x13a78 bytes
    // ci.dll .text:0x76e4, 0x13a78 bytes
    //
    _r76(sdk::unknown_ptr) min_crypt_revoke_prerelease_windows_pca;
    
    // [MinCryptVerifySignedFileKMode]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3a138, 0x8dc0 bytes
    // ci.dll PAGE:0x679d4, 0x13a78 bytes
    // ci.dll PAGE:0x67720, 0x13a78 bytes
    // ci.dll PAGE:0x679d4, 0x13a78 bytes
    //
    _r77(sdk::unknown_ptr) min_crypt_verify_signed_file_k_mode;
    
    // [MincrypK_TestPKCS1SignVerify]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x39da4, 0x8dc0 bytes
    // ci.dll PAGE:0x67854, 0x13a78 bytes
    // ci.dll PAGE:0x66454, 0x13a78 bytes
    // ci.dll PAGE:0x67854, 0x13a78 bytes
    //
    _r78(sdk::unknown_ptr) mincryp_k_test_pkcs1_sign_verify;
    
    // [MincryptCopyPolicyInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3b33c, 0x8dc0 bytes
    // ci.dll PAGE:0x68e2c, 0x13a78 bytes
    // ci.dll PAGE:0x67aa0, 0x13a78 bytes
    // ci.dll PAGE:0x68e2c, 0x13a78 bytes
    //
    _r79(sdk::unknown_ptr) mincrypt_copy_policy_info;
    
    // [MincryptIsEKUInPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3b270, 0x8dc0 bytes
    // ci.dll PAGE:0x68d50, 0x13a78 bytes
    // ci.dll PAGE:0x679c8, 0x13a78 bytes
    // ci.dll PAGE:0x68d50, 0x13a78 bytes
    //
    _r80(sdk::unknown_ptr) mincrypt_is_eku_in_policy;
    
    // [MincryptIsWeakCertHashAllowed]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3a00c, 0x8dc0 bytes
    // ci.dll PAGE:0x68c00, 0x13a78 bytes
    // ci.dll PAGE:0x67878, 0x13a78 bytes
    // ci.dll PAGE:0x68c00, 0x13a78 bytes
    //
    _r81(sdk::unknown_ptr) mincrypt_is_weak_cert_hash_allowed;
    
    // [MincryptStringToUnicodeString]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d10c, 0x8dc0 bytes
    // ci.dll PAGE:0x6afd8, 0x13a78 bytes
    // ci.dll PAGE:0x69d7c, 0x13a78 bytes
    // ci.dll PAGE:0x6afd8, 0x13a78 bytes
    //
    _r82(sdk::unknown_ptr) mincrypt_string_to_unicode_string;
    
    // [MincryptUnpackPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3b3e4, 0x8dc0 bytes
    // ci.dll PAGE:0x68ed0, 0x13a78 bytes
    // ci.dll PAGE:0x67b44, 0x13a78 bytes
    // ci.dll PAGE:0x68ed0, 0x13a78 bytes
    //
    _r83(sdk::unknown_ptr) mincrypt_unpack_policy;
    
    // [CiNoEmbeddedSignatureDriverLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11ea0, 0x8dc0 bytes
    // ci.dll .rdata:0x2deb8, 0x13a78 bytes
    // ci.dll .rdata:0x26548, 0x13a78 bytes
    // ci.dll .rdata:0x2deb8, 0x13a78 bytes
    //
    _r84(sdk::unknown_ptr) no_embedded_signature_driver_loaded;
    
    // [CiOpenFileOnCleanStack]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23e40, 0x8dc0 bytes
    // ci.dll PAGE:0x44d08, 0x13a78 bytes
    // ci.dll PAGE:0x3fef8, 0x13a78 bytes
    // ci.dll PAGE:0x44d08, 0x13a78 bytes
    //
    _r85(sdk::unknown_ptr) open_file_on_clean_stack;
    
    // [PackageNameBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x10458, 0x8dc0 bytes
    // ci.dll .rdata:0x2b9a0, 0x13a78 bytes
    // ci.dll .rdata:0x239c0, 0x13a78 bytes
    // ci.dll .rdata:0x2b9c8, 0x13a78 bytes
    //
    _r86(sdk::unknown_ptr) package_name_blob;
    
    // [CiParseRevocationList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2977c, 0x8dc0 bytes
    // ci.dll PAGE:0x4c8a4, 0x13a78 bytes
    // ci.dll PAGE:0x49400, 0x13a78 bytes
    // ci.dll PAGE:0x4c8a4, 0x13a78 bytes
    //
    _r87(sdk::unknown_ptr) parse_revocation_list;
    
    // [PEAuthGetBootDriversVerificationData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa488, 0x8dc0 bytes
    // ci.dll .text:0x9e2c, 0x13a78 bytes
    // ci.dll .text:0x96e4, 0x13a78 bytes
    // ci.dll .text:0x9dac, 0x13a78 bytes
    //
    _r88(sdk::unknown_ptr) pe_auth_get_boot_drivers_verification_data;
    
    // [PEAuthGetDebugCredentialsData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa434, 0x8dc0 bytes
    // ci.dll .text:0x9db8, 0x13a78 bytes
    // ci.dll .text:0x9670, 0x13a78 bytes
    // ci.dll .text:0x9d38, 0x13a78 bytes
    //
    _r89(sdk::unknown_ptr) pe_auth_get_debug_credentials_data;
    
    // [PEAuthGetParameters]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa360, 0x8dc0 bytes
    // ci.dll .text:0x9ca8, 0x13a78 bytes
    // ci.dll .text:0x9560, 0x13a78 bytes
    // ci.dll .text:0x9c28, 0x13a78 bytes
    //
    _r90(sdk::unknown_ptr) pe_auth_get_parameters;
    
    // [PEAuthInitStore]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa24c, 0x8dc0 bytes
    // ci.dll .text:0x9b48, 0x13a78 bytes
    // ci.dll .text:0x93fc, 0x13a78 bytes
    // ci.dll .text:0x9ac8, 0x13a78 bytes
    //
    _r91(sdk::unknown_ptr) pe_auth_init_store;
    
    // [PEAuthSetDebugCredentialsData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa3c4, 0x8dc0 bytes
    // ci.dll .text:0x9d2c, 0x13a78 bytes
    // ci.dll .text:0x95e4, 0x13a78 bytes
    // ci.dll .text:0x9cac, 0x13a78 bytes
    //
    _r92(sdk::unknown_ptr) pe_auth_set_debug_credentials_data;
    
    // [PEAuthStoreParameter]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa2e4, 0x8dc0 bytes
    // ci.dll .text:0x9c0c, 0x13a78 bytes
    // ci.dll .text:0x94c4, 0x13a78 bytes
    // ci.dll .text:0x9b8c, 0x13a78 bytes
    //
    _r93(sdk::unknown_ptr) pe_auth_store_parameter;
    
    // [PECheckComponentLoad]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41c5c, 0x8dc0 bytes
    // ci.dll PAGE:0x77d5c, 0x13a78 bytes
    // ci.dll PAGE:0x77a88, 0x13a78 bytes
    // ci.dll PAGE:0x77e6c, 0x13a78 bytes
    //
    _r94(sdk::unknown_ptr) pe_check_component_load;
    
    // [PECheckComponentLoadEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41e0c, 0x8dc0 bytes
    // ci.dll PAGE:0x77f2c, 0x13a78 bytes
    // ci.dll PAGE:0x77c58, 0x13a78 bytes
    // ci.dll PAGE:0x7803c, 0x13a78 bytes
    //
    _r95(sdk::unknown_ptr) pe_check_component_load_ex;
    
    // [PEPerformInitializationChecks]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x415f4, 0x8dc0 bytes
    // ci.dll PAGE:0x775c8, 0x13a78 bytes
    // ci.dll PAGE:0x772f4, 0x13a78 bytes
    // ci.dll PAGE:0x776d8, 0x13a78 bytes
    //
    _r96(sdk::unknown_ptr) pe_perform_initialization_checks;
    
    // [PEProcessDispatch]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x40ec8, 0x8dc0 bytes
    // ci.dll PAGE:0x76d98, 0x13a78 bytes
    // ci.dll PAGE:0x76ab8, 0x13a78 bytes
    // ci.dll PAGE:0x76ea8, 0x13a78 bytes
    //
    _r97(sdk::unknown_ptr) pe_process_dispatch;
    
    // [PEReloadGRL]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41274, 0x8dc0 bytes
    // ci.dll PAGE:0x771c4, 0x13a78 bytes
    // ci.dll PAGE:0x76edc, 0x13a78 bytes
    // ci.dll PAGE:0x772d4, 0x13a78 bytes
    //
    _r98(sdk::unknown_ptr) pe_reload_grl;
    
    // [PEReturnComponentList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41144, 0x8dc0 bytes
    // ci.dll PAGE:0x7705c, 0x13a78 bytes
    // ci.dll PAGE:0x76d74, 0x13a78 bytes
    // ci.dll PAGE:0x7716c, 0x13a78 bytes
    //
    _r99(sdk::unknown_ptr) pe_return_component_list;
    
    // [PEReturnState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41060, 0x8dc0 bytes
    // ci.dll PAGE:0x76f48, 0x13a78 bytes
    // ci.dll PAGE:0x76c60, 0x13a78 bytes
    // ci.dll PAGE:0x77058, 0x13a78 bytes
    //
    _s00(sdk::unknown_ptr) pe_return_state;
    
    // [PESetInitialState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41a84, 0x8dc0 bytes
    // ci.dll PAGE:0x77b18, 0x13a78 bytes
    // ci.dll PAGE:0x77840, 0x13a78 bytes
    // ci.dll PAGE:0x77c28, 0x13a78 bytes
    //
    _s01(sdk::unknown_ptr) pe_set_initial_state;
    
    // [PESetPhase1Initialization]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x41774, 0x8dc0 bytes
    // ci.dll PAGE:0x7778c, 0x13a78 bytes
    // ci.dll PAGE:0x774c0, 0x13a78 bytes
    // ci.dll PAGE:0x7789c, 0x13a78 bytes
    //
    _s02(sdk::unknown_ptr) pe_set_phase1_initialization;
    
    // [PETrustedBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x105a0, 0x8dc0 bytes
    // ci.dll .rdata:0x2bb20, 0x13a78 bytes
    // ci.dll .rdata:0x23b50, 0x13a78 bytes
    // ci.dll .rdata:0x2bb50, 0x13a78 bytes
    //
    _s03(sdk::unknown_ptr) pe_trusted_blob;
    
    // [PEWorkerThread]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x425c0, 0x8dc0 bytes
    // ci.dll PAGE:0x78780, 0x13a78 bytes
    // ci.dll PAGE:0x78480, 0x13a78 bytes
    // ci.dll PAGE:0x78890, 0x13a78 bytes
    //
    _s04(sdk::unknown_ptr) pe_worker_thread;
    
    // [PEAUTH_BEGIN_COMPONENT_LOAD]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x13210, 0x8dc0 bytes
    // ci.dll .rdata:0x30d00, 0x13a78 bytes
    // ci.dll .rdata:0x29bd0, 0x13a78 bytes
    // ci.dll .rdata:0x30d00, 0x13a78 bytes
    //
    _s05(sdk::unknown_ptr) peauth_begin_component_load;
    
    // [PEAUTH_BEGIN_INITIALIZATION]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x131b0, 0x8dc0 bytes
    // ci.dll .rdata:0x30ca0, 0x13a78 bytes
    // ci.dll .rdata:0x29b70, 0x13a78 bytes
    // ci.dll .rdata:0x30ca0, 0x13a78 bytes
    //
    _s06(sdk::unknown_ptr) peauth_begin_initialization;
    
    // [PEAUTH_END_COMPONENT_LOAD]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x131f0, 0x8dc0 bytes
    // ci.dll .rdata:0x30ce0, 0x13a78 bytes
    // ci.dll .rdata:0x29bb0, 0x13a78 bytes
    // ci.dll .rdata:0x30ce0, 0x13a78 bytes
    //
    _s07(sdk::unknown_ptr) peauth_end_component_load;
    
    // [PEAUTH_END_INITIALIZATION]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x131d0, 0x8dc0 bytes
    // ci.dll .rdata:0x30cc0, 0x13a78 bytes
    // ci.dll .rdata:0x29b90, 0x13a78 bytes
    // ci.dll .rdata:0x30cc0, 0x13a78 bytes
    //
    _s08(sdk::unknown_ptr) peauth_end_initialization;
    
    // [PEAUTH_EVENT_GUID]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x131c0, 0x8dc0 bytes
    // ci.dll .rdata:0x30cb0, 0x13a78 bytes
    // ci.dll .rdata:0x29b80, 0x13a78 bytes
    // ci.dll .rdata:0x30cb0, 0x13a78 bytes
    //
    _s09(sdk::unknown_ptr) peauth_event_guid;
    
    // [PEAUTH_SET_KERNEL_STATE_UNTRUSTED]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x13200, 0x8dc0 bytes
    // ci.dll .rdata:0x30cf0, 0x13a78 bytes
    // ci.dll .rdata:0x29bc0, 0x13a78 bytes
    // ci.dll .rdata:0x30cf0, 0x13a78 bytes
    //
    _s10(sdk::unknown_ptr) peauth_set_kernel_state_untrusted;
    
    // [PEAUTH_USER_MODE_COMPONENT_LOAD_FAIL]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x131e0, 0x8dc0 bytes
    // ci.dll .rdata:0x30cd0, 0x13a78 bytes
    // ci.dll .rdata:0x29ba0, 0x13a78 bytes
    // ci.dll .rdata:0x30cd0, 0x13a78 bytes
    //
    _s11(sdk::unknown_ptr) peauth_user_mode_component_load_fail;
    
    // [peauthvbn_GetBootDriversVerificationData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x69140, 0x8dc0 bytes
    // ci.dll PAGE:0x9fcfc, 0x13a78 bytes
    // ci.dll PAGE:0x9f76c, 0x13a78 bytes
    // ci.dll PAGE:0x9fe0c, 0x13a78 bytes
    //
    _s12(sdk::unknown_ptr) peauthvbn_get_boot_drivers_verification_data;
    
    // [peauthvbn_GetDebugCredentialsData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x633dc, 0x8dc0 bytes
    // ci.dll PAGE:0x99f54, 0x13a78 bytes
    // ci.dll PAGE:0x99a44, 0x13a78 bytes
    // ci.dll PAGE:0x9a064, 0x13a78 bytes
    //
    _s13(sdk::unknown_ptr) peauthvbn_get_debug_credentials_data;
    
    // [peauthvbn_GetParameters]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7867c, 0x8dc0 bytes
    // ci.dll PAGE:0xaf47c, 0x13a78 bytes
    // ci.dll PAGE:0xaedfc, 0x13a78 bytes
    // ci.dll PAGE:0xaf58c, 0x13a78 bytes
    //
    _s14(sdk::unknown_ptr) peauthvbn_get_parameters;
    
    // [peauthvbn_InitStore]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x564d4, 0x8dc0 bytes
    // ci.dll PAGE:0x8cd88, 0x13a78 bytes
    // ci.dll PAGE:0x8c968, 0x13a78 bytes
    // ci.dll PAGE:0x8ce98, 0x13a78 bytes
    //
    _s15(sdk::unknown_ptr) peauthvbn_init_store;
    
    // [peauthvbn_SetDebugCredentialsData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7e5f0, 0x8dc0 bytes
    // ci.dll PAGE:0xb552c, 0x13a78 bytes
    // ci.dll PAGE:0xb4e1c, 0x13a78 bytes
    // ci.dll PAGE:0xb563c, 0x13a78 bytes
    //
    _s16(sdk::unknown_ptr) peauthvbn_set_debug_credentials_data;
    
    // [peauthvbn_StoreParameter]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6e174, 0x8dc0 bytes
    // ci.dll PAGE:0xa4d3c, 0x13a78 bytes
    // ci.dll PAGE:0xa4754, 0x13a78 bytes
    // ci.dll PAGE:0xa4e4c, 0x13a78 bytes
    //
    _s17(sdk::unknown_ptr) peauthvbn_store_parameter;
    
    // [CiPolicyFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11b90, 0x8dc0 bytes
    // ci.dll .rdata:0x2db58, 0x13a78 bytes
    // ci.dll .rdata:0x261d8, 0x13a78 bytes
    // ci.dll .rdata:0x2db58, 0x13a78 bytes
    //
    _s18(sdk::unknown_ptr) policy_failure;
    
    // [CiPolicyFailureAudit]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11fb0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dfc0, 0x13a78 bytes
    // ci.dll .rdata:0x26648, 0x13a78 bytes
    // ci.dll .rdata:0x2dfc0, 0x13a78 bytes
    //
    _s19(sdk::unknown_ptr) policy_failure_audit;
    
    // [CiPolicyFailureIgnored]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11fd0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dfe0, 0x13a78 bytes
    // ci.dll .rdata:0x26668, 0x13a78 bytes
    // ci.dll .rdata:0x2dfe0, 0x13a78 bytes
    //
    _s20(sdk::unknown_ptr) policy_failure_ignored;
    
    // [ProhibitedExclusions]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x100a0, 0x8dc0 bytes
    // ci.dll .rdata:0x2b830, 0x13a78 bytes
    // ci.dll .rdata:0x23830, 0x13a78 bytes
    // ci.dll .rdata:0x2b840, 0x13a78 bytes
    //
    _s21(sdk::unknown_ptr) prohibited_exclusions;
    
    // [ProtectionVendorGuid]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11e50, 0x8dc0 bytes
    // ci.dll .rdata:0x2de60, 0x13a78 bytes
    // ci.dll .rdata:0x264f8, 0x13a78 bytes
    // ci.dll .rdata:0x2de60, 0x13a78 bytes
    //
    _s22(sdk::unknown_ptr) protection_vendor_guid;
    
    // [CiQueryInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x22c80, 0x8dc0 bytes
    // ci.dll PAGE:0x43df0, 0x13a78 bytes
    // ci.dll PAGE:0x3eec0, 0x13a78 bytes
    // ci.dll PAGE:0x43df0, 0x13a78 bytes
    //
    _s23(sdk::unknown_ptr) query_information;
    
    // [CiReadFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2a788, 0x8dc0 bytes
    // ci.dll PAGE:0x4d91c, 0x13a78 bytes
    // ci.dll PAGE:0x4a974, 0x13a78 bytes
    // ci.dll PAGE:0x4d91c, 0x13a78 bytes
    //
    _s24(sdk::unknown_ptr) read_file;
    
    // [CiReadFileClose]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2aa00, 0x8dc0 bytes
    // ci.dll PAGE:0x4dbe4, 0x13a78 bytes
    // ci.dll PAGE:0x4ac3c, 0x13a78 bytes
    // ci.dll PAGE:0x4dbe4, 0x13a78 bytes
    //
    _s25(sdk::unknown_ptr) read_file_close;
    
    // [CiReadFileOpen]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2a858, 0x8dc0 bytes
    // ci.dll PAGE:0x4da14, 0x13a78 bytes
    // ci.dll PAGE:0x4aa6c, 0x13a78 bytes
    // ci.dll PAGE:0x4da14, 0x13a78 bytes
    //
    _s26(sdk::unknown_ptr) read_file_open;
    
    // [CiReadFileSetView]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2aa6c, 0x8dc0 bytes
    // ci.dll PAGE:0x4dc74, 0x13a78 bytes
    // ci.dll PAGE:0x4accc, 0x13a78 bytes
    // ci.dll PAGE:0x4dc74, 0x13a78 bytes
    //
    _s27(sdk::unknown_ptr) read_file_set_view;
    
    // [ReadFromFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4396c, 0x8dc0 bytes
    // ci.dll PAGE:0x79e8c, 0x13a78 bytes
    // ci.dll PAGE:0x79b3c, 0x13a78 bytes
    // ci.dll PAGE:0x79f9c, 0x13a78 bytes
    //
    _s28(sdk::unknown_ptr) read_from_file;
    
    // [CiRegisterSigningInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x33ac0, 0x8dc0 bytes
    // ci.dll PAGE:0x5c110, 0x13a78 bytes
    // ci.dll PAGE:0x59890, 0x13a78 bytes
    // ci.dll PAGE:0x5c110, 0x13a78 bytes
    //
    _s29(sdk::unknown_ptr) register_signing_information;
    
    // [CiRegisterSiloMonitor]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34d2c, 0x8dc0 bytes
    // ci.dll PAGE:0x6067c, 0x13a78 bytes
    // ci.dll PAGE:0x5f358, 0x13a78 bytes
    // ci.dll PAGE:0x6067c, 0x13a78 bytes
    //
    _s30(sdk::unknown_ptr) register_silo_monitor;
    
    // [CiReleaseContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x30160, 0x8dc0 bytes
    // ci.dll PAGE:0x554d0, 0x13a78 bytes
    // ci.dll PAGE:0x526a0, 0x13a78 bytes
    // ci.dll PAGE:0x554d0, 0x13a78 bytes
    //
    _s31(sdk::unknown_ptr) release_context;
    
    // [CiReloadCatalogsComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d80, 0x8dc0 bytes
    // ci.dll .rdata:0x2dd90, 0x13a78 bytes
    // ci.dll .rdata:0x26428, 0x13a78 bytes
    // ci.dll .rdata:0x2dd90, 0x13a78 bytes
    //
    _s32(sdk::unknown_ptr) reload_catalogs_complete;
    
    // [CiReloadCatalogsForHvci]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29f1c, 0x8dc0 bytes
    // ci.dll PAGE:0x4cf10, 0x13a78 bytes
    // ci.dll PAGE:0x49ab8, 0x13a78 bytes
    // ci.dll PAGE:0x4cf10, 0x13a78 bytes
    //
    _s33(sdk::unknown_ptr) reload_catalogs_for_hvci;
    
    // [CiReloadCatalogsStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11f50, 0x8dc0 bytes
    // ci.dll .rdata:0x2df68, 0x13a78 bytes
    // ci.dll .rdata:0x265f8, 0x13a78 bytes
    // ci.dll .rdata:0x2df68, 0x13a78 bytes
    //
    _s34(sdk::unknown_ptr) reload_catalogs_start;
    
    // [CiRevalidateImage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34cf0, 0x8dc0 bytes
    // ci.dll PAGE:0x5e0c0, 0x13a78 bytes
    // ci.dll PAGE:0x5bdc0, 0x13a78 bytes
    // ci.dll PAGE:0x5e0c0, 0x13a78 bytes
    //
    _s35(sdk::unknown_ptr) revalidate_image;
    
    // [CiRevokedCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d70, 0x8dc0 bytes
    // ci.dll .rdata:0x2dd80, 0x13a78 bytes
    // ci.dll .rdata:0x26418, 0x13a78 bytes
    // ci.dll .rdata:0x2dd80, 0x13a78 bytes
    //
    _s36(sdk::unknown_ptr) revoked_catalog;
    
    // [CiRevokedDriverLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11fa0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dfb0, 0x13a78 bytes
    // ci.dll .rdata:0x26638, 0x13a78 bytes
    // ci.dll .rdata:0x2dfb0, 0x13a78 bytes
    //
    _s37(sdk::unknown_ptr) revoked_driver_loaded;
    
    // [CiRevokedDriverLoadedInDebugger]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11ef0, 0x8dc0 bytes
    // ci.dll .rdata:0x2def8, 0x13a78 bytes
    // ci.dll .rdata:0x26588, 0x13a78 bytes
    // ci.dll .rdata:0x2def8, 0x13a78 bytes
    //
    _s38(sdk::unknown_ptr) revoked_driver_loaded_in_debugger;
    
    // [CiRevokedDriverNotLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11bb0, 0x8dc0 bytes
    // ci.dll .rdata:0x2db90, 0x13a78 bytes
    // ci.dll .rdata:0x26210, 0x13a78 bytes
    // ci.dll .rdata:0x2db90, 0x13a78 bytes
    //
    _s39(sdk::unknown_ptr) revoked_driver_not_loaded;
    
    // [CiRevokedImageLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11b80, 0x8dc0 bytes
    // ci.dll .rdata:0x2db48, 0x13a78 bytes
    // ci.dll .rdata:0x261c8, 0x13a78 bytes
    // ci.dll .rdata:0x2db48, 0x13a78 bytes
    //
    _s40(sdk::unknown_ptr) revoked_image_loaded;
    
    // [CiRevokedImageLoadedInDebugger]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d20, 0x8dc0 bytes
    // ci.dll .rdata:0x2dd10, 0x13a78 bytes
    // ci.dll .rdata:0x263a8, 0x13a78 bytes
    // ci.dll .rdata:0x2dd10, 0x13a78 bytes
    //
    _s41(sdk::unknown_ptr) revoked_image_loaded_in_debugger;
    
    // [CiRevokedImageNotLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11b30, 0x8dc0 bytes
    // ci.dll .rdata:0x2dad8, 0x13a78 bytes
    // ci.dll .rdata:0x26158, 0x13a78 bytes
    // ci.dll .rdata:0x2dad8, 0x13a78 bytes
    //
    _s42(sdk::unknown_ptr) revoked_image_not_loaded;
    
    // [rgbOID_CTL]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12148, 0x8dc0 bytes
    // ci.dll .rdata:0x2e2d8, 0x13a78 bytes
    // ci.dll .rdata:0x26c28, 0x13a78 bytes
    // ci.dll .rdata:0x2e2d8, 0x13a78 bytes
    //
    _s43(sdk::unknown_ptr) rgb_oid_ctl;
    
    // [rgbOID_KMOD_REVOCATION_LIST]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12190, 0x8dc0 bytes
    // ci.dll .rdata:0x2e320, 0x13a78 bytes
    // ci.dll .rdata:0x26c70, 0x13a78 bytes
    // ci.dll .rdata:0x2e320, 0x13a78 bytes
    //
    _s44(sdk::unknown_ptr) rgb_oid_kmod_revocation_list;
    
    // [rgbPACKAGE_NAME_AUTHENTICATED_ATTRIBUTE]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12168, 0x8dc0 bytes
    // ci.dll .rdata:0x2e2f8, 0x13a78 bytes
    // ci.dll .rdata:0x26c48, 0x13a78 bytes
    // ci.dll .rdata:0x2e2f8, 0x13a78 bytes
    //
    _s45(sdk::unknown_ptr) rgb_package_name_authenticated_attribute;
    
    // [rgbPE_AUTHENTICATED_ATTRIBUTE]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x121b0, 0x8dc0 bytes
    // ci.dll .rdata:0x2e340, 0x13a78 bytes
    // ci.dll .rdata:0x26c90, 0x13a78 bytes
    // ci.dll .rdata:0x2e340, 0x13a78 bytes
    //
    _s46(sdk::unknown_ptr) rgb_pe_authenticated_attribute;
    
    // [rgbPETrustedAttribute]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12100, 0x8dc0 bytes
    // ci.dll .rdata:0x2e290, 0x13a78 bytes
    // ci.dll .rdata:0x26be0, 0x13a78 bytes
    // ci.dll .rdata:0x2e290, 0x13a78 bytes
    //
    _s47(sdk::unknown_ptr) rgb_pe_trusted_attribute;
    
    // [CiSetCatalogHint]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x253c8, 0x8dc0 bytes
    // ci.dll PAGE:0x487b0, 0x13a78 bytes
    // ci.dll PAGE:0x44fbc, 0x13a78 bytes
    // ci.dll PAGE:0x487b0, 0x13a78 bytes
    //
    _s48(sdk::unknown_ptr) set_catalog_hint;
    
    // [CiSetFileCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x24a60, 0x8dc0 bytes
    // ci.dll PAGE:0x478c0, 0x13a78 bytes
    // ci.dll PAGE:0x43ff0, 0x13a78 bytes
    // ci.dll PAGE:0x478c0, 0x13a78 bytes
    //
    _s49(sdk::unknown_ptr) set_file_cache;
    
    // [CiSetFileCacheComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11ce0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dcc0, 0x13a78 bytes
    // ci.dll .rdata:0x26358, 0x13a78 bytes
    // ci.dll .rdata:0x2dcc0, 0x13a78 bytes
    //
    _s50(sdk::unknown_ptr) set_file_cache_complete;
    
    // [CiSetFileCacheStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11f80, 0x8dc0 bytes
    // ci.dll .rdata:0x2dfa0, 0x13a78 bytes
    // ci.dll .rdata:0x26628, 0x13a78 bytes
    // ci.dll .rdata:0x2dfa0, 0x13a78 bytes
    //
    _s51(sdk::unknown_ptr) set_file_cache_start;
    
    // [SSCatDBEnumCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xa4dc, 0x8dc0 bytes
    // ci.dll .text:0x9ea0, 0x13a78 bytes
    // ci.dll .text:0x9758, 0x13a78 bytes
    // ci.dll .text:0x9e20, 0x13a78 bytes
    //
    _s52(sdk::unknown_ptr) ss_cat_db_enum_catalogs;
    
    // [SymCryptParallelSha256Selftest]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x3110, 0x8dc0 bytes
    // ci.dll .text:0x53ac, 0x13a78 bytes
    // ci.dll .text:0x42dc, 0x13a78 bytes
    // ci.dll .text:0x532c, 0x13a78 bytes
    //
    _s53(sdk::unknown_ptr) sym_crypt_parallel_sha256_selftest;
    
    // [SymCryptSha1]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x65c4, 0x8dc0 bytes
    // ci.dll .text:0xd444, 0x13a78 bytes
    // ci.dll .text:0xce70, 0x13a78 bytes
    // ci.dll .text:0xd3c4, 0x13a78 bytes
    //
    _s54(sdk::unknown_ptr) sym_crypt_sha1;
    
    // [SymCryptSha256KATAnswer]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x128b0, 0x8dc0 bytes
    // ci.dll .rdata:0x2fc60, 0x13a78 bytes
    // ci.dll .rdata:0x289c0, 0x13a78 bytes
    // ci.dll .rdata:0x2fc60, 0x13a78 bytes
    //
    _s55(sdk::unknown_ptr) sym_crypt_sha256kat_answer;
    
    // [SymCryptSha512]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x4b94, 0x8dc0 bytes
    // ci.dll .text:0xba28, 0x13a78 bytes
    // ci.dll .text:0xb45c, 0x13a78 bytes
    // ci.dll .text:0xb9a8, 0x13a78 bytes
    //
    _s56(sdk::unknown_ptr) sym_crypt_sha512;
    
    // [SymCryptSha512KATAnswer]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12d10, 0x8dc0 bytes
    // ci.dll .rdata:0x31610, 0x13a78 bytes
    // ci.dll .rdata:0x2a610, 0x13a78 bytes
    // ci.dll .rdata:0x31610, 0x13a78 bytes
    //
    _s57(sdk::unknown_ptr) sym_crypt_sha512kat_answer;
    
    // [SymCryptTestMsg3]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x12e38, 0x8dc0 bytes
    // ci.dll .rdata:0x2fed8, 0x13a78 bytes
    // ci.dll .rdata:0x28c18, 0x13a78 bytes
    // ci.dll .rdata:0x2fed8, 0x13a78 bytes
    //
    _s58(sdk::unknown_ptr) sym_crypt_test_msg3;
    
    // [CiTrimCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29b34, 0x8dc0 bytes
    // ci.dll PAGE:0x4cc98, 0x13a78 bytes
    // ci.dll PAGE:0x497fc, 0x13a78 bytes
    // ci.dll PAGE:0x4cc98, 0x13a78 bytes
    //
    _s59(sdk::unknown_ptr) trim_catalogs;
    
    // [CiUnregisterSigningInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x33ca0, 0x8dc0 bytes
    // ci.dll PAGE:0x5c360, 0x13a78 bytes
    // ci.dll PAGE:0x59ae0, 0x13a78 bytes
    // ci.dll PAGE:0x5c360, 0x13a78 bytes
    //
    _s60(sdk::unknown_ptr) unregister_signing_information;
    
    // [CiUnsignedDriverLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11bc0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dba0, 0x13a78 bytes
    // ci.dll .rdata:0x26220, 0x13a78 bytes
    // ci.dll .rdata:0x2dba0, 0x13a78 bytes
    //
    _s61(sdk::unknown_ptr) unsigned_driver_loaded;
    
    // [CiUnsignedImageLoaded]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11e60, 0x8dc0 bytes
    // ci.dll .rdata:0x2de70, 0x13a78 bytes
    // ci.dll .rdata:0x26508, 0x13a78 bytes
    // ci.dll .rdata:0x2de70, 0x13a78 bytes
    //
    _s62(sdk::unknown_ptr) unsigned_image_loaded;
    
    // [CiValidateAndSetRevocationList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x337e4, 0x8dc0 bytes
    // ci.dll PAGE:0x5bdac, 0x13a78 bytes
    // ci.dll PAGE:0x59520, 0x13a78 bytes
    // ci.dll PAGE:0x5bdac, 0x13a78 bytes
    //
    _s63(sdk::unknown_ptr) validate_and_set_revocation_list;
    
    // [CiValidateDynamicCodePages]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2bf40, 0x8dc0 bytes
    // ci.dll PAGE:0x501d0, 0x13a78 bytes
    // ci.dll PAGE:0x4d530, 0x13a78 bytes
    // ci.dll PAGE:0x501d0, 0x13a78 bytes
    //
    _s64(sdk::unknown_ptr) validate_dynamic_code_pages;
    
    // [CiValidateFileAsImageType]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2ea00, 0x8dc0 bytes
    // ci.dll PAGE:0x53800, 0x13a78 bytes
    // ci.dll PAGE:0x50cf0, 0x13a78 bytes
    // ci.dll PAGE:0x53800, 0x13a78 bytes
    //
    _s65(sdk::unknown_ptr) validate_file_as_image_type;
    
    // [CiValidateFileHashComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11b50, 0x8dc0 bytes
    // ci.dll .rdata:0x2db08, 0x13a78 bytes
    // ci.dll .rdata:0x26188, 0x13a78 bytes
    // ci.dll .rdata:0x2db08, 0x13a78 bytes
    //
    _s66(sdk::unknown_ptr) validate_file_hash_complete;
    
    // [CiValidateFileHashStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11c20, 0x8dc0 bytes
    // ci.dll .rdata:0x2dbc0, 0x13a78 bytes
    // ci.dll .rdata:0x26240, 0x13a78 bytes
    // ci.dll .rdata:0x2dbc0, 0x13a78 bytes
    //
    _s67(sdk::unknown_ptr) validate_file_hash_start;
    
    // [CiValidateFileObject]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2e3f0, 0x8dc0 bytes
    // ci.dll PAGE:0x52dc0, 0x13a78 bytes
    // ci.dll PAGE:0x50270, 0x13a78 bytes
    // ci.dll PAGE:0x52dc0, 0x13a78 bytes
    //
    _s68(sdk::unknown_ptr) validate_file_object;
    
    // [CiValidateFullImagePages]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2adc4, 0x8dc0 bytes
    // ci.dll PAGE:0x4eac0, 0x13a78 bytes
    // ci.dll PAGE:0x4bc84, 0x13a78 bytes
    // ci.dll PAGE:0x4eac0, 0x13a78 bytes
    //
    _s69(sdk::unknown_ptr) validate_full_image_pages;
    
    // [CiValidateImageData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2be50, 0x8dc0 bytes
    // ci.dll PAGE:0x500d0, 0x13a78 bytes
    // ci.dll PAGE:0x4d430, 0x13a78 bytes
    // ci.dll PAGE:0x500d0, 0x13a78 bytes
    //
    _s70(sdk::unknown_ptr) validate_image_data;
    
    // [CiValidateImageHeader]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2b440, 0x8dc0 bytes
    // ci.dll PAGE:0x4f1d0, 0x13a78 bytes
    // ci.dll PAGE:0x4c3a0, 0x13a78 bytes
    // ci.dll PAGE:0x4f1d0, 0x13a78 bytes
    //
    _s71(sdk::unknown_ptr) validate_image_header;
    
    // [CiValidateImageHeaderComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11f40, 0x8dc0 bytes
    // ci.dll .rdata:0x2df58, 0x13a78 bytes
    // ci.dll .rdata:0x265e8, 0x13a78 bytes
    // ci.dll .rdata:0x2df58, 0x13a78 bytes
    //
    _s72(sdk::unknown_ptr) validate_image_header_complete;
    
    // [CiValidateImageHeaderMapping]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2aaf0, 0x8dc0 bytes
    // ci.dll PAGE:0x4e670, 0x13a78 bytes
    // ci.dll PAGE:0x4b730, 0x13a78 bytes
    // ci.dll PAGE:0x4e670, 0x13a78 bytes
    //
    _s73(sdk::unknown_ptr) validate_image_header_mapping;
    
    // [CiValidateImageHeaderStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11b40, 0x8dc0 bytes
    // ci.dll .rdata:0x2daf8, 0x13a78 bytes
    // ci.dll .rdata:0x26178, 0x13a78 bytes
    // ci.dll .rdata:0x2daf8, 0x13a78 bytes
    //
    _s74(sdk::unknown_ptr) validate_image_header_start;
    
    // [CiValidateImagePages]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2ac9c, 0x8dc0 bytes
    // ci.dll PAGE:0x4e980, 0x13a78 bytes
    // ci.dll PAGE:0x4ba40, 0x13a78 bytes
    // ci.dll PAGE:0x4e980, 0x13a78 bytes
    //
    _s75(sdk::unknown_ptr) validate_image_pages;
    
    // [CiValidatePageHashComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d10, 0x8dc0 bytes
    // ci.dll .rdata:0x2dcf0, 0x13a78 bytes
    // ci.dll .rdata:0x26388, 0x13a78 bytes
    // ci.dll .rdata:0x2dcf0, 0x13a78 bytes
    //
    _s76(sdk::unknown_ptr) validate_page_hash_complete;
    
    // [CiValidatePageHashStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11ca0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dc50, 0x13a78 bytes
    // ci.dll .rdata:0x262e0, 0x13a78 bytes
    // ci.dll .rdata:0x2dc50, 0x13a78 bytes
    //
    _s77(sdk::unknown_ptr) validate_page_hash_start;
    
    // [VerifyCoreSignature]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x439d4, 0x8dc0 bytes
    // ci.dll PAGE:0x79f08, 0x13a78 bytes
    // ci.dll PAGE:0x79bb8, 0x13a78 bytes
    // ci.dll PAGE:0x7a018, 0x13a78 bytes
    //
    _s78(sdk::unknown_ptr) verify_core_signature;
    
    // [CiVerifyFileHashInCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2fbe0, 0x8dc0 bytes
    // ci.dll PAGE:0x54d70, 0x13a78 bytes
    // ci.dll PAGE:0x52110, 0x13a78 bytes
    // ci.dll PAGE:0x54d70, 0x13a78 bytes
    //
    _s79(sdk::unknown_ptr) verify_file_hash_in_catalogs;
    
    // [CiVerifyFileHashSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34e80, 0x8dc0 bytes
    // ci.dll PAGE:0x61b00, 0x13a78 bytes
    // ci.dll PAGE:0x607d0, 0x13a78 bytes
    // ci.dll PAGE:0x61b00, 0x13a78 bytes
    //
    _s80(sdk::unknown_ptr) verify_file_hash_signed_file;
    
    // [CiVerifyHashInCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x235e0, 0x8dc0 bytes
    // ci.dll PAGE:0x44890, 0x13a78 bytes
    // ci.dll PAGE:0x3fa40, 0x13a78 bytes
    // ci.dll PAGE:0x44890, 0x13a78 bytes
    //
    _s81(sdk::unknown_ptr) verify_hash_in_catalog;
    
    // [CiVerifyPageHashInCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2fdc0, 0x8dc0 bytes
    // ci.dll PAGE:0x54fa0, 0x13a78 bytes
    // ci.dll PAGE:0x52260, 0x13a78 bytes
    // ci.dll PAGE:0x54fa0, 0x13a78 bytes
    //
    _s82(sdk::unknown_ptr) verify_page_hash_in_catalogs;
    
    // [CiVerifyPageHashSignedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x35160, 0x8dc0 bytes
    // ci.dll PAGE:0x61eb0, 0x13a78 bytes
    // ci.dll PAGE:0x60c80, 0x13a78 bytes
    // ci.dll PAGE:0x61eb0, 0x13a78 bytes
    //
    _s83(sdk::unknown_ptr) verify_page_hash_signed_file;
    
    // [WhqlEnforcementDisabled]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11df0, 0x8dc0 bytes
    // ci.dll .rdata:0x2de30, 0x13a78 bytes
    // ci.dll .rdata:0x264c8, 0x13a78 bytes
    // ci.dll .rdata:0x2de30, 0x13a78 bytes
    //
    _s84(sdk::unknown_ptr) whql_enforcement_disabled;
    
    // [WhqlEnforcementEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11c40, 0x8dc0 bytes
    // ci.dll .rdata:0x2dbe0, 0x13a78 bytes
    // ci.dll .rdata:0x26268, 0x13a78 bytes
    // ci.dll .rdata:0x2dbe0, 0x13a78 bytes
    //
    _s85(sdk::unknown_ptr) whql_enforcement_enabled;
    
    // [WhqlEnforcementFailureAudit]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11fc0, 0x8dc0 bytes
    // ci.dll .rdata:0x2dfd0, 0x13a78 bytes
    // ci.dll .rdata:0x26658, 0x13a78 bytes
    // ci.dll .rdata:0x2dfd0, 0x13a78 bytes
    //
    _s86(sdk::unknown_ptr) whql_enforcement_failure_audit;
    
    // [WhqlEnforcementFailureExempted]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11e30, 0x8dc0 bytes
    // ci.dll .rdata:0x2de50, 0x13a78 bytes
    // ci.dll .rdata:0x264e8, 0x13a78 bytes
    // ci.dll .rdata:0x2de50, 0x13a78 bytes
    //
    _s87(sdk::unknown_ptr) whql_enforcement_failure_exempted;
    
    // [CiWritableExecutableSection]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11d50, 0x8dc0 bytes
    // ci.dll .rdata:0x2dd70, 0x13a78 bytes
    // ci.dll .rdata:0x26408, 0x13a78 bytes
    // ci.dll .rdata:0x2dd70, 0x13a78 bytes
    //
    _s88(sdk::unknown_ptr) writable_executable_section;
    
    // [xGetDPLForInterrupt]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xd880, 0x8dc0 bytes
    // ci.dll .text:0x19a00, 0x13a78 bytes
    // ci.dll .text:0x198a0, 0x13a78 bytes
    // ci.dll .text:0x19980, 0x13a78 bytes
    //
    _s89(sdk::unknown_ptr) x_get_dpl_for_interrupt;
    
    // [xGetDR7Value]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xd8a0, 0x8dc0 bytes
    // ci.dll .text:0x19a20, 0x13a78 bytes
    // ci.dll .text:0x198c0, 0x13a78 bytes
    // ci.dll .text:0x199a0, 0x13a78 bytes
    //
    _s90(sdk::unknown_ptr) x_get_dr7_value;
};
#include "magic/api.end.hpp"
