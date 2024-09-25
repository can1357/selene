#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace cip
{
    // [CipAllocateCatalogEntryWithName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x29d94, 0x8dc0 bytes
    //
    _m0(sdk::unknown_ptr) allocate_catalog_entry_with_name;
    
    // [CipAuthRootHashSearchCompare]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x41ab0, 0x13a78 bytes
    //
    _m1(sdk::unknown_ptr) auth_root_hash_search_compare;
    
    // [CipAuthRootIsHashInList]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x41aec, 0x13a78 bytes
    //
    _m2(sdk::unknown_ptr) auth_root_is_hash_in_list;
    
    // [CipAuthRootLoadCTLsFromCrypt32Dll]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x42ae4, 0x13a78 bytes
    //
    _m3(sdk::unknown_ptr) auth_root_load_ct_ls_from_crypt32_dll;
    
    // [CipAuthRootReload]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x41bb8, 0x13a78 bytes
    //
    _m4(sdk::unknown_ptr) auth_root_reload;
    
    // [CipCatDbRpcDisconnect]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x49fd8, 0x13a78 bytes
    //
    _m5(sdk::unknown_ptr) cat_db_rpc_disconnect;
    
    // [CipCheckForExtensionAgainstList]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5f04c, 0x13a78 bytes
    //
    _m6(sdk::unknown_ptr) check_for_extension_against_list;
    
    // [CipComparOriginClaimListEntryByFileObjectCallback]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5eac0, 0x13a78 bytes
    //
    _m7(sdk::unknown_ptr) compar_origin_claim_list_entry_by_file_object_callback;
    
    // [CipCreateContextForReplay]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x45364, 0x13a78 bytes
    //
    _m8(sdk::unknown_ptr) create_context_for_replay;
    
    // [CipDeleteOriginEntryCallback]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5ead8, 0x13a78 bytes
    //
    _m9(sdk::unknown_ptr) delete_origin_entry_callback;
    
    // [CipDeployPolicies]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5d6e8, 0x13a78 bytes
    //
    _n0(sdk::unknown_ptr) deploy_policies;
    
    // [CipDuplicateCodeIntegrityOriginClaimMembers]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5ee1c, 0x13a78 bytes
    //
    _n1(sdk::unknown_ptr) duplicate_code_integrity_origin_claim_members;
    
    // [CipEnableJournalingAndSetTrust]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x23a7c, 0x8dc0 bytes
    //
    _n2(sdk::unknown_ptr) enable_journaling_and_set_trust;
    
    // [CipEnableJournalingAndSetTrustComplete]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11e00, 0x8dc0 bytes
    //
    _n3(sdk::unknown_ptr) enable_journaling_and_set_trust_complete;
    
    // [CipEnableJournalingAndSetTrustStart]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11c80, 0x8dc0 bytes
    //
    _n4(sdk::unknown_ptr) enable_journaling_and_set_trust_start;
    
    // [CipFindOriginEntryByFileObject]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5ec30, 0x13a78 bytes
    //
    _n5(sdk::unknown_ptr) find_origin_entry_by_file_object;
    
    // [CipFreeRegistryParameters]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x3f740, 0x13a78 bytes
    //
    _n6(sdk::unknown_ptr) free_registry_parameters;
    
    // [CipGetDriverStoresUpdateTime]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x45554, 0x13a78 bytes
    //
    _n7(sdk::unknown_ptr) get_driver_stores_update_time;
    
    // [CipGetNightsWatchSupplementalPolicyFlags]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .text:0x2e20, 0x13a78 bytes
    //
    _n8(sdk::unknown_ptr) get_nights_watch_supplemental_policy_flags;
    
    // [CipHvciCheckCompatibility]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x6303c, 0x13a78 bytes
    //
    _n9(sdk::unknown_ptr) hvci_check_compatibility;
    
    // [CipInitializeDriverStoreCatalogStores]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x455b0, 0x13a78 bytes
    //
    _o0(sdk::unknown_ptr) initialize_driver_store_catalog_stores;
    
    // [CipInsertOriginEntryIntoTable]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5eb10, 0x13a78 bytes
    //
    _o1(sdk::unknown_ptr) insert_origin_entry_into_table;
    
    // [CipIsFileInUMCIExclusionPaths]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x51890, 0x13a78 bytes
    //
    _o2(sdk::unknown_ptr) is_file_in_umci_exclusion_paths;
    
    // [CipMinCryptToAuthRoot]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x426e8, 0x13a78 bytes
    //
    _o3(sdk::unknown_ptr) min_crypt_to_auth_root;
    
    // [CipPerformPlatformManifestCheckIfRequired]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x32c6c, 0x8dc0 bytes
    //
    _o4(sdk::unknown_ptr) perform_platform_manifest_check_if_required;
    
    // [CipRegisterSiPolicySigners]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x34b48, 0x8dc0 bytes
    //
    _o5(sdk::unknown_ptr) register_si_policy_signers;
    
    // [CipReloadCatalogStores]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x47894, 0x13a78 bytes
    //
    _o6(sdk::unknown_ptr) reload_catalog_stores;
    
    // [CipShouldReportPageHashesForDirectMappedImage]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5322c, 0x13a78 bytes
    //
    _o7(sdk::unknown_ptr) should_report_page_hashes_for_direct_mapped_image;
    
    // [CipSmartlockerHasDangerousOrInstallerExtension]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .text:0x3284, 0x13a78 bytes
    //
    _o8(sdk::unknown_ptr) smartlocker_has_dangerous_or_installer_extension;
    
    // [CipUpdateHashVerificationLoopStatus]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5299c, 0x13a78 bytes
    //
    _o9(sdk::unknown_ptr) update_hash_verification_loop_status;
    
    // [CipUpdateTestCertTrustFromCustomSigningPolicy]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x5cf04, 0x13a78 bytes
    //
    _p0(sdk::unknown_ptr) update_test_cert_trust_from_custom_signing_policy;
    
    // [CipUpdateValidatationContextWithFileInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x30094, 0x8dc0 bytes
    //
    _p1(sdk::unknown_ptr) update_validatation_context_with_file_info;
    
    // [CipValidateCertAgainstEKU]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x429a0, 0x13a78 bytes
    //
    _p2(sdk::unknown_ptr) validate_cert_against_eku;
    
    // [CipValidateFileObject]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x2e1e8, 0x8dc0 bytes
    //
    _p3(sdk::unknown_ptr) validate_file_object;
    
    // [CipValidateFileObjectWithContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x2e318, 0x8dc0 bytes
    //
    _p4(sdk::unknown_ptr) validate_file_object_with_context;
    
    // [CipVerifyAcPolicyHash]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x40ff0, 0x13a78 bytes
    //
    _p5(sdk::unknown_ptr) verify_ac_policy_hash;
    
    // [CipDepolyPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x5f978, 0x13a78 bytes
    // ci.dll PAGE:0x5f978, 0x13a78 bytes
    //
    _p6(sdk::unknown_ptr) depoly_policies;
    
    // [CipQueryOneEA]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x60a3c, 0x13a78 bytes
    // ci.dll PAGE:0x60a3c, 0x13a78 bytes
    //
    _p7(sdk::unknown_ptr) query_one_ea;
    
    // [CipRegQueryDWORD]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x55fcc, 0x13a78 bytes
    // ci.dll PAGE:0x55fcc, 0x13a78 bytes
    //
    _p8(sdk::unknown_ptr) reg_query_dword;
    
    // [CipUpdateOemTestCertTrustFromCustomSigningPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x5f268, 0x13a78 bytes
    // ci.dll PAGE:0x5f268, 0x13a78 bytes
    //
    _p9(sdk::unknown_ptr) update_oem_test_cert_trust_from_custom_signing_policy;
    
    // [CipAcExternalAuthorizationCallback]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45fb0, 0x13a78 bytes
    // ci.dll PAGE:0x413b0, 0x13a78 bytes
    // ci.dll PAGE:0x45fb0, 0x13a78 bytes
    //
    _q0(sdk::unknown_ptr) ac_external_authorization_callback;
    
    // [CipAllowPolicyEngineToEvaluateObjectWithExpiredAndRevokedCert]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x55e54, 0x13a78 bytes
    // ci.dll PAGE:0x530c0, 0x13a78 bytes
    // ci.dll PAGE:0x55e54, 0x13a78 bytes
    //
    _q1(sdk::unknown_ptr) allow_policy_engine_to_evaluate_object_with_expired_and_revoked_cert;
    
    // [CipApplyAcPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45fc0, 0x13a78 bytes
    // ci.dll PAGE:0x413c0, 0x13a78 bytes
    // ci.dll PAGE:0x45fc0, 0x13a78 bytes
    //
    _q2(sdk::unknown_ptr) apply_ac_policy;
    
    // [CipBlackBoxUpdate]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x2348, 0x13a78 bytes
    // ci.dll .text:0x1548, 0x13a78 bytes
    // ci.dll .text:0x22c8, 0x13a78 bytes
    //
    _q3(sdk::unknown_ptr) black_box_update;
    
    // [CipBuildNameFromRdnValues]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5fd9c, 0x13a78 bytes
    // ci.dll PAGE:0x5dd34, 0x13a78 bytes
    // ci.dll PAGE:0x5fd9c, 0x13a78 bytes
    //
    _q4(sdk::unknown_ptr) build_name_from_rdn_values;
    
    // [CipCheckLicensing]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45214, 0x13a78 bytes
    // ci.dll PAGE:0x40404, 0x13a78 bytes
    // ci.dll PAGE:0x45214, 0x13a78 bytes
    //
    _q5(sdk::unknown_ptr) check_licensing;
    
    // [CipCheckLicensingPhase2]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4544c, 0x13a78 bytes
    // ci.dll PAGE:0x4063c, 0x13a78 bytes
    // ci.dll PAGE:0x4544c, 0x13a78 bytes
    //
    _q6(sdk::unknown_ptr) check_licensing_phase2;
    
    // [CipCheckSmartlockerEAandProcessToken]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x60330, 0x13a78 bytes
    // ci.dll PAGE:0x5e510, 0x13a78 bytes
    // ci.dll PAGE:0x60330, 0x13a78 bytes
    //
    _q7(sdk::unknown_ptr) check_smartlocker_e_aand_process_token;
    
    // [CipExternalAuthorizationCallback]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5d250, 0x13a78 bytes
    // ci.dll PAGE:0x5aab0, 0x13a78 bytes
    // ci.dll PAGE:0x5d250, 0x13a78 bytes
    //
    _q8(sdk::unknown_ptr) external_authorization_callback;
    
    // [CipFinalizeHashVerificationLoopStatus]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x557c4, 0x13a78 bytes
    // ci.dll PAGE:0x529ec, 0x13a78 bytes
    // ci.dll PAGE:0x557c4, 0x13a78 bytes
    //
    _q9(sdk::unknown_ptr) finalize_hash_verification_loop_status;
    
    // [CipFindWimIdentity]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x356e0, 0x8dc0 bytes
    // ci.dll PAGE:0x6274c, 0x13a78 bytes
    // ci.dll PAGE:0x6274c, 0x13a78 bytes
    //
    _r0(sdk::unknown_ptr) find_wim_identity;
    
    // [CipForceImageRevalidation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x39f8, 0x13a78 bytes
    // ci.dll .text:0x2e10, 0x13a78 bytes
    // ci.dll .text:0x3978, 0x13a78 bytes
    //
    _r1(sdk::unknown_ptr) force_image_revalidation;
    
    // [CipGetEmbeddedSignatureAndFindFirstMatch]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x535fc, 0x13a78 bytes
    // ci.dll PAGE:0x50ae0, 0x13a78 bytes
    // ci.dll PAGE:0x535fc, 0x13a78 bytes
    //
    _r2(sdk::unknown_ptr) get_embedded_signature_and_find_first_match;
    
    // [CipGetFileCacheSimulation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4848c, 0x13a78 bytes
    // ci.dll PAGE:0x44c94, 0x13a78 bytes
    // ci.dll PAGE:0x4848c, 0x13a78 bytes
    //
    _r3(sdk::unknown_ptr) get_file_cache_simulation;
    
    // [CipGetFileInfoFromSystemCodeIntegrityVerificationInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x60c6c, 0x13a78 bytes
    // ci.dll PAGE:0x5f810, 0x13a78 bytes
    // ci.dll PAGE:0x60c6c, 0x13a78 bytes
    //
    _r4(sdk::unknown_ptr) get_file_info_from_system_code_integrity_verification_information;
    
    // [CipGetFullImagePathAndMacros]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5ada4, 0x13a78 bytes
    // ci.dll PAGE:0x58548, 0x13a78 bytes
    // ci.dll PAGE:0x5ada4, 0x13a78 bytes
    //
    _r5(sdk::unknown_ptr) get_full_image_path_and_macros;
    
    // [CipGetPolicyFiles]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5f340, 0x13a78 bytes
    // ci.dll PAGE:0x5d07c, 0x13a78 bytes
    // ci.dll PAGE:0x5f340, 0x13a78 bytes
    //
    _r6(sdk::unknown_ptr) get_policy_files;
    
    // [CipGetPolicyHash]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5aa3c, 0x13a78 bytes
    // ci.dll PAGE:0x581f4, 0x13a78 bytes
    // ci.dll PAGE:0x5aa3c, 0x13a78 bytes
    //
    _r7(sdk::unknown_ptr) get_policy_hash;
    
    // [CipGetSbcpMergeListString]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x207c, 0x13a78 bytes
    // ci.dll .text:0x1280, 0x13a78 bytes
    // ci.dll .text:0x1ff8, 0x13a78 bytes
    //
    _r8(sdk::unknown_ptr) get_sbcp_merge_list_string;
    
    // [CipGetSupplementalPolicyPath]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6132c, 0x13a78 bytes
    // ci.dll PAGE:0x5fe5c, 0x13a78 bytes
    // ci.dll PAGE:0x6132c, 0x13a78 bytes
    //
    _r9(sdk::unknown_ptr) get_supplemental_policy_path;
    
    // [CipGetSupplementalPolicyPathOnExpandedStack]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x610f0, 0x13a78 bytes
    // ci.dll PAGE:0x5fc20, 0x13a78 bytes
    // ci.dll PAGE:0x610f0, 0x13a78 bytes
    //
    _s0(sdk::unknown_ptr) get_supplemental_policy_path_on_expanded_stack;
    
    // [CipGetSupplementalPolicyPathOnExpandedStackCallout]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x61300, 0x13a78 bytes
    // ci.dll PAGE:0x5fe30, 0x13a78 bytes
    // ci.dll PAGE:0x61300, 0x13a78 bytes
    //
    _s1(sdk::unknown_ptr) get_supplemental_policy_path_on_expanded_stack_callout;
    
    // [CipGetTenantIds]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5ee7c, 0x13a78 bytes
    // ci.dll PAGE:0x5cb24, 0x13a78 bytes
    // ci.dll PAGE:0x5ee7c, 0x13a78 bytes
    //
    _s2(sdk::unknown_ptr) get_tenant_ids;
    
    // [CipGetVerificationInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x60f14, 0x13a78 bytes
    // ci.dll PAGE:0x5fa70, 0x13a78 bytes
    // ci.dll PAGE:0x60f14, 0x13a78 bytes
    //
    _s3(sdk::unknown_ptr) get_verification_information;
    
    // [CipHasPerAppRules]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45008, 0x13a78 bytes
    // ci.dll PAGE:0x401f8, 0x13a78 bytes
    // ci.dll PAGE:0x45008, 0x13a78 bytes
    //
    _s4(sdk::unknown_ptr) has_per_app_rules;
    
    // [CipHvciFindDynamicRelocationTable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x63db8, 0x13a78 bytes
    // ci.dll PAGE:0x62800, 0x13a78 bytes
    // ci.dll PAGE:0x63db8, 0x13a78 bytes
    //
    _s5(sdk::unknown_ptr) hvci_find_dynamic_relocation_table;
    
    // [CipHvciPublishIncompatibleImageWNF]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6465c, 0x13a78 bytes
    // ci.dll PAGE:0x6313c, 0x13a78 bytes
    // ci.dll PAGE:0x6465c, 0x13a78 bytes
    //
    _s6(sdk::unknown_ptr) hvci_publish_incompatible_image_wnf;
    
    // [CipImageGetImageHashFromEa]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5285c, 0x13a78 bytes
    // ci.dll PAGE:0x4fd0c, 0x13a78 bytes
    // ci.dll PAGE:0x5285c, 0x13a78 bytes
    //
    _s7(sdk::unknown_ptr) image_get_image_hash_from_ea;
    
    // [CipInitializeAcPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4598c, 0x13a78 bytes
    // ci.dll PAGE:0x40c44, 0x13a78 bytes
    // ci.dll PAGE:0x4598c, 0x13a78 bytes
    //
    _s8(sdk::unknown_ptr) initialize_ac_policy;
    
    // [CipInitializeCatalogStores]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x48cc0, 0x13a78 bytes
    // ci.dll PAGE:0x4587c, 0x13a78 bytes
    // ci.dll PAGE:0x48cc0, 0x13a78 bytes
    //
    _s9(sdk::unknown_ptr) initialize_catalog_stores;
    
    // [CipInitializeSigningLevelOrder]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5128c, 0x13a78 bytes
    // ci.dll PAGE:0x4e668, 0x13a78 bytes
    // ci.dll PAGE:0x5128c, 0x13a78 bytes
    //
    _t0(sdk::unknown_ptr) initialize_signing_level_order;
    
    // [CipIsAcPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45a48, 0x13a78 bytes
    // ci.dll PAGE:0x40d30, 0x13a78 bytes
    // ci.dll PAGE:0x45a48, 0x13a78 bytes
    //
    _t1(sdk::unknown_ptr) is_ac_policy;
    
    // [CipIsDeveloperModeEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4e14c, 0x13a78 bytes
    // ci.dll PAGE:0x4b1a8, 0x13a78 bytes
    // ci.dll PAGE:0x4e14c, 0x13a78 bytes
    //
    _t2(sdk::unknown_ptr) is_developer_mode_enabled;
    
    // [CipIsDotNetNativeImage]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x55d84, 0x13a78 bytes
    // ci.dll PAGE:0x52ff0, 0x13a78 bytes
    // ci.dll PAGE:0x55d84, 0x13a78 bytes
    //
    _t3(sdk::unknown_ptr) is_dot_net_native_image;
    
    // [CipIsSigningLevelRuntimeCustomizable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5c808, 0x13a78 bytes
    // ci.dll PAGE:0x59fb8, 0x13a78 bytes
    // ci.dll PAGE:0x5c808, 0x13a78 bytes
    //
    _t4(sdk::unknown_ptr) is_signing_level_runtime_customizable;
    
    // [CipIsUnlockTokenPresentAndValid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x618a0, 0x13a78 bytes
    // ci.dll PAGE:0x60454, 0x13a78 bytes
    // ci.dll PAGE:0x618a0, 0x13a78 bytes
    //
    _t5(sdk::unknown_ptr) is_unlock_token_present_and_valid;
    
    // [CipLoadWimIdentities]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ci.dll PAGE:0x3576c, 0x8dc0 bytes
    // ci.dll PAGE:0x62800, 0x13a78 bytes
    // ci.dll PAGE:0x62800, 0x13a78 bytes
    //
    _t6(sdk::unknown_ptr) load_wim_identities;
    
    // [CipMitigatePPLBypassThroughInterpreters]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5aa78, 0x13a78 bytes
    // ci.dll PAGE:0x58230, 0x13a78 bytes
    // ci.dll PAGE:0x5aa78, 0x13a78 bytes
    //
    _t7(sdk::unknown_ptr) mitigate_ppl_bypass_through_interpreters;
    
    // [CipPackageGetInfoFromFullName]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5d0a8, 0x13a78 bytes
    // ci.dll PAGE:0x5a908, 0x13a78 bytes
    // ci.dll PAGE:0x5d0a8, 0x13a78 bytes
    //
    _t8(sdk::unknown_ptr) package_get_info_from_full_name;
    
    // [CipParseAcPolicyData]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45b50, 0x13a78 bytes
    // ci.dll PAGE:0x40e3c, 0x13a78 bytes
    // ci.dll PAGE:0x45b50, 0x13a78 bytes
    //
    _t9(sdk::unknown_ptr) parse_ac_policy_data;
    
    // [CipParseFileCache]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x468d4, 0x13a78 bytes
    // ci.dll PAGE:0x43084, 0x13a78 bytes
    // ci.dll PAGE:0x468d4, 0x13a78 bytes
    //
    _u0(sdk::unknown_ptr) parse_file_cache;
    
    // [CipQueryAndLogFileEventWithStatus]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x58c88, 0x13a78 bytes
    // ci.dll PAGE:0x563ec, 0x13a78 bytes
    // ci.dll PAGE:0x58c88, 0x13a78 bytes
    //
    _u1(sdk::unknown_ptr) query_and_log_file_event_with_status;
    
    // [CipQueryDynamicCodeTrustClaim]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x60bf8, 0x13a78 bytes
    // ci.dll PAGE:0x5f63c, 0x13a78 bytes
    // ci.dll PAGE:0x60bf8, 0x13a78 bytes
    //
    _u2(sdk::unknown_ptr) query_dynamic_code_trust_claim;
    
    // [CipQueryLockDownPolicyRestriction]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x61934, 0x13a78 bytes
    // ci.dll PAGE:0x604e8, 0x13a78 bytes
    // ci.dll PAGE:0x61934, 0x13a78 bytes
    //
    _u3(sdk::unknown_ptr) query_lock_down_policy_restriction;
    
    // [CipQueryPolicyInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45530, 0x13a78 bytes
    // ci.dll PAGE:0x40720, 0x13a78 bytes
    // ci.dll PAGE:0x45530, 0x13a78 bytes
    //
    _u4(sdk::unknown_ptr) query_policy_information;
    
    // [CipRefreshAcPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45da0, 0x13a78 bytes
    // ci.dll PAGE:0x4116c, 0x13a78 bytes
    // ci.dll PAGE:0x45da0, 0x13a78 bytes
    //
    _u5(sdk::unknown_ptr) refresh_ac_policy;
    
    // [CipRefreshPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5e508, 0x13a78 bytes
    // ci.dll PAGE:0x5c20c, 0x13a78 bytes
    // ci.dll PAGE:0x5e508, 0x13a78 bytes
    //
    _u6(sdk::unknown_ptr) refresh_policies;
    
    // [CipRegisterAcPolicySigners]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4627c, 0x13a78 bytes
    // ci.dll PAGE:0x41690, 0x13a78 bytes
    // ci.dll PAGE:0x4627c, 0x13a78 bytes
    //
    _u7(sdk::unknown_ptr) register_ac_policy_signers;
    
    // [CipRegisterDeveloperDynamicSigners]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x4e358, 0x13a78 bytes
    // ci.dll PAGE:0x4b3f8, 0x13a78 bytes
    // ci.dll PAGE:0x4e358, 0x13a78 bytes
    //
    _u8(sdk::unknown_ptr) register_developer_dynamic_signers;
    
    // [CipScheduleWorkItem]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x44f48, 0x13a78 bytes
    // ci.dll PAGE:0x40138, 0x13a78 bytes
    // ci.dll PAGE:0x44f48, 0x13a78 bytes
    //
    _u9(sdk::unknown_ptr) schedule_work_item;
    
    // [CipShouldLockdownPolicyBeActive]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x61a5c, 0x13a78 bytes
    // ci.dll PAGE:0x60610, 0x13a78 bytes
    // ci.dll PAGE:0x61a5c, 0x13a78 bytes
    //
    _v0(sdk::unknown_ptr) should_lockdown_policy_be_active;
    
    // [CipSiPolicyAuditModeEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5dcbc, 0x13a78 bytes
    // ci.dll PAGE:0x5b9e0, 0x13a78 bytes
    // ci.dll PAGE:0x5dcbc, 0x13a78 bytes
    //
    _v1(sdk::unknown_ptr) si_policy_audit_mode_enabled;
    
    // [CipTryGetProcessAppID]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x44dc4, 0x13a78 bytes
    // ci.dll PAGE:0x3ffb4, 0x13a78 bytes
    // ci.dll PAGE:0x44dc4, 0x13a78 bytes
    //
    _v2(sdk::unknown_ptr) try_get_process_app_id;
    
    // [CipUnregisterAcPolicySigners]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x463cc, 0x13a78 bytes
    // ci.dll PAGE:0x417e4, 0x13a78 bytes
    // ci.dll PAGE:0x463cc, 0x13a78 bytes
    //
    _v3(sdk::unknown_ptr) unregister_ac_policy_signers;
    
    // [CipUnregisterSiPolicySigners]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5ddf4, 0x13a78 bytes
    // ci.dll PAGE:0x5bb28, 0x13a78 bytes
    // ci.dll PAGE:0x5ddf4, 0x13a78 bytes
    //
    _v4(sdk::unknown_ptr) unregister_si_policy_signers;
    
    // [CipUnregisterSigner]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5c308, 0x13a78 bytes
    // ci.dll PAGE:0x59a8c, 0x13a78 bytes
    // ci.dll PAGE:0x5c308, 0x13a78 bytes
    //
    _v5(sdk::unknown_ptr) unregister_signer;
    
    // [CipUnregisterSigningInformationEx]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5c60c, 0x13a78 bytes
    // ci.dll PAGE:0x59dac, 0x13a78 bytes
    // ci.dll PAGE:0x5c60c, 0x13a78 bytes
    //
    _v6(sdk::unknown_ptr) unregister_signing_information_ex;
    
    // [CipUpdateAcPolicyHash]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x45ce0, 0x13a78 bytes
    // ci.dll PAGE:0x410a8, 0x13a78 bytes
    // ci.dll PAGE:0x45ce0, 0x13a78 bytes
    //
    _v7(sdk::unknown_ptr) update_ac_policy_hash;
    
    // [CipUpdateCiSettingsFromPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x5e184, 0x13a78 bytes
    // ci.dll PAGE:0x5beac, 0x13a78 bytes
    // ci.dll PAGE:0x5e184, 0x13a78 bytes
    //
    _v8(sdk::unknown_ptr) update_ci_settings_from_policies;
    
    // [CipUpdateValidationContextWithFileInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x552fc, 0x13a78 bytes
    // ci.dll PAGE:0x5249c, 0x13a78 bytes
    // ci.dll PAGE:0x552fc, 0x13a78 bytes
    //
    _v9(sdk::unknown_ptr) update_validation_context_with_file_info;
    
    // [CipValidateFileObjectByFileOrPageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x52bf8, 0x13a78 bytes
    // ci.dll PAGE:0x500a8, 0x13a78 bytes
    // ci.dll PAGE:0x52bf8, 0x13a78 bytes
    //
    _w0(sdk::unknown_ptr) validate_file_object_by_file_or_page_hash;
    
    // [CipWriteUnlockTokenToSystemPartition]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x61388, 0x13a78 bytes
    // ci.dll PAGE:0x5feb8, 0x13a78 bytes
    // ci.dll PAGE:0x61388, 0x13a78 bytes
    //
    _w1(sdk::unknown_ptr) write_unlock_token_to_system_partition;
    
    // [CipAllocateAndQuerySecureBootPolicyValue]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3392c, 0x8dc0 bytes
    // ci.dll PAGE:0x5bf20, 0x13a78 bytes
    // ci.dll PAGE:0x59694, 0x13a78 bytes
    // ci.dll PAGE:0x5bf20, 0x13a78 bytes
    //
    _w2(sdk::unknown_ptr) allocate_and_query_secure_boot_policy_value;
    
    // [CipAllocateLocalValidationContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2f998, 0x8dc0 bytes
    // ci.dll PAGE:0x54a38, 0x13a78 bytes
    // ci.dll PAGE:0x51de8, 0x13a78 bytes
    // ci.dll PAGE:0x54a38, 0x13a78 bytes
    //
    _w3(sdk::unknown_ptr) allocate_local_validation_context;
    
    // [CipAllocateValidationContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2f7dc, 0x8dc0 bytes
    // ci.dll PAGE:0x5483c, 0x13a78 bytes
    // ci.dll PAGE:0x51bec, 0x13a78 bytes
    // ci.dll PAGE:0x5483c, 0x13a78 bytes
    //
    _w4(sdk::unknown_ptr) allocate_validation_context;
    
    // [CipApplySiPolicyEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34880, 0x8dc0 bytes
    // ci.dll PAGE:0x5d3d0, 0x13a78 bytes
    // ci.dll PAGE:0x5adb8, 0x13a78 bytes
    // ci.dll PAGE:0x5d3d0, 0x13a78 bytes
    //
    _w5(sdk::unknown_ptr) apply_si_policy_ex;
    
    // [CipApplySIPolicyUMCI]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x30190, 0x8dc0 bytes
    // ci.dll PAGE:0x5550c, 0x13a78 bytes
    // ci.dll PAGE:0x526dc, 0x13a78 bytes
    // ci.dll PAGE:0x5550c, 0x13a78 bytes
    //
    _w6(sdk::unknown_ptr) apply_si_policy_umci;
    
    // [CipBuildSigningInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2eb70, 0x8dc0 bytes
    // ci.dll PAGE:0x53a0c, 0x13a78 bytes
    // ci.dll PAGE:0x50f14, 0x13a78 bytes
    // ci.dll PAGE:0x53a0c, 0x13a78 bytes
    //
    _w7(sdk::unknown_ptr) build_signing_information;
    
    // [CipCalculateHeaderHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2fb20, 0x8dc0 bytes
    // ci.dll PAGE:0x54ca0, 0x13a78 bytes
    // ci.dll PAGE:0x52040, 0x13a78 bytes
    // ci.dll PAGE:0x54ca0, 0x13a78 bytes
    //
    _w8(sdk::unknown_ptr) calculate_header_hash;
    
    // [CipCalculateImageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2fab0, 0x8dc0 bytes
    // ci.dll PAGE:0x54bd0, 0x13a78 bytes
    // ci.dll PAGE:0x51f80, 0x13a78 bytes
    // ci.dll PAGE:0x54bd0, 0x13a78 bytes
    //
    _w9(sdk::unknown_ptr) calculate_image_hash;
    
    // [CipCallPeauth]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2bf60, 0x8dc0 bytes
    // ci.dll PAGE:0x50224, 0x13a78 bytes
    // ci.dll PAGE:0x4d678, 0x13a78 bytes
    // ci.dll PAGE:0x50224, 0x13a78 bytes
    //
    _x0(sdk::unknown_ptr) call_peauth;
    
    // [CipCatDbAlwaysUseResultsRunOnce]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2a650, 0x8dc0 bytes
    // ci.dll PAGE:0x4d740, 0x13a78 bytes
    // ci.dll PAGE:0x4a390, 0x13a78 bytes
    // ci.dll PAGE:0x4d740, 0x13a78 bytes
    //
    _x1(sdk::unknown_ptr) cat_db_always_use_results_run_once;
    
    // [CipCatDbRpcConnect]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2a2a8, 0x8dc0 bytes
    // ci.dll PAGE:0x4d1f4, 0x13a78 bytes
    // ci.dll PAGE:0x49dc8, 0x13a78 bytes
    // ci.dll PAGE:0x4d1f4, 0x13a78 bytes
    //
    _x2(sdk::unknown_ptr) cat_db_rpc_connect;
    
    // [CipCheckConfigOptions]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x22e2c, 0x8dc0 bytes
    // ci.dll PAGE:0x4401c, 0x13a78 bytes
    // ci.dll PAGE:0x3f13c, 0x13a78 bytes
    // ci.dll PAGE:0x4401c, 0x13a78 bytes
    //
    _x3(sdk::unknown_ptr) check_config_options;
    
    // [CipCompareCatalogListEntryByName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29d0c, 0x8dc0 bytes
    // ci.dll PAGE:0x4cd70, 0x13a78 bytes
    // ci.dll PAGE:0x49918, 0x13a78 bytes
    // ci.dll PAGE:0x4cd70, 0x13a78 bytes
    //
    _x4(sdk::unknown_ptr) compare_catalog_list_entry_by_name;
    
    // [CipCompareHvciNodes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36e88, 0x8dc0 bytes
    // ci.dll PAGE:0x64990, 0x13a78 bytes
    // ci.dll PAGE:0x635c4, 0x13a78 bytes
    // ci.dll PAGE:0x64990, 0x13a78 bytes
    //
    _x5(sdk::unknown_ptr) compare_hvci_nodes;
    
    // [CipComparePageHashes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2b280, 0x8dc0 bytes
    // ci.dll PAGE:0x4efc0, 0x13a78 bytes
    // ci.dll PAGE:0x4c180, 0x13a78 bytes
    // ci.dll PAGE:0x4efc0, 0x13a78 bytes
    //
    _x6(sdk::unknown_ptr) compare_page_hashes;
    
    // [CipDeserializeWeakCryptoPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x18c8, 0x8dc0 bytes
    // ci.dll .text:0x38ec, 0x13a78 bytes
    // ci.dll .text:0x2d00, 0x13a78 bytes
    // ci.dll .text:0x386c, 0x13a78 bytes
    //
    _x7(sdk::unknown_ptr) deserialize_weak_crypto_policies;
    
    // [CipEnableJournalingAlways]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x243f0, 0x8dc0 bytes
    // ci.dll PAGE:0x46eac, 0x13a78 bytes
    // ci.dll PAGE:0x435f0, 0x13a78 bytes
    // ci.dll PAGE:0x46eac, 0x13a78 bytes
    //
    _x8(sdk::unknown_ptr) enable_journaling_always;
    
    // [CipFileHashSearchCompareRoutineSHA1]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27f50, 0x8dc0 bytes
    // ci.dll PAGE:0x4c2e0, 0x13a78 bytes
    // ci.dll PAGE:0x48f10, 0x13a78 bytes
    // ci.dll PAGE:0x4c2e0, 0x13a78 bytes
    //
    _x9(sdk::unknown_ptr) file_hash_search_compare_routine_sha1;
    
    // [CipFileHashSearchCompareRoutineSHA256]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27f60, 0x8dc0 bytes
    // ci.dll PAGE:0x4c300, 0x13a78 bytes
    // ci.dll PAGE:0x48f30, 0x13a78 bytes
    // ci.dll PAGE:0x4c300, 0x13a78 bytes
    //
    _y0(sdk::unknown_ptr) file_hash_search_compare_routine_sha256;
    
    // [CipFileHashSortCompareRoutineSHA1]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27f50, 0x8dc0 bytes
    // ci.dll PAGE:0x4c2e0, 0x13a78 bytes
    // ci.dll PAGE:0x48f10, 0x13a78 bytes
    // ci.dll PAGE:0x4c2e0, 0x13a78 bytes
    //
    _y1(sdk::unknown_ptr) file_hash_sort_compare_routine_sha1;
    
    // [CipFileHashSortCompareRoutineSHA256]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27f60, 0x8dc0 bytes
    // ci.dll PAGE:0x4c300, 0x13a78 bytes
    // ci.dll PAGE:0x48f30, 0x13a78 bytes
    // ci.dll PAGE:0x4c300, 0x13a78 bytes
    //
    _y2(sdk::unknown_ptr) file_hash_sort_compare_routine_sha256;
    
    // [CipFindCatalogByName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29d34, 0x8dc0 bytes
    // ci.dll PAGE:0x4cda8, 0x13a78 bytes
    // ci.dll PAGE:0x49950, 0x13a78 bytes
    // ci.dll PAGE:0x4cda8, 0x13a78 bytes
    //
    _y3(sdk::unknown_ptr) find_catalog_by_name;
    
    // [CipFindFileHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2c2cc, 0x8dc0 bytes
    // ci.dll PAGE:0x50494, 0x13a78 bytes
    // ci.dll PAGE:0x4d8b0, 0x13a78 bytes
    // ci.dll PAGE:0x50494, 0x13a78 bytes
    //
    _y4(sdk::unknown_ptr) find_file_hash;
    
    // [CipFindOrInsertImage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36ea0, 0x8dc0 bytes
    // ci.dll PAGE:0x649b0, 0x13a78 bytes
    // ci.dll PAGE:0x635e4, 0x13a78 bytes
    // ci.dll PAGE:0x649b0, 0x13a78 bytes
    //
    _y5(sdk::unknown_ptr) find_or_insert_image;
    
    // [CipFixImageType]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2cd88, 0x8dc0 bytes
    // ci.dll PAGE:0x51134, 0x13a78 bytes
    // ci.dll PAGE:0x4e508, 0x13a78 bytes
    // ci.dll PAGE:0x51134, 0x13a78 bytes
    //
    _y6(sdk::unknown_ptr) fix_image_type;
    
    // [CipFreeUnicodeStringList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23864, 0x8dc0 bytes
    // ci.dll PAGE:0x44aa8, 0x13a78 bytes
    // ci.dll PAGE:0x3fc9c, 0x13a78 bytes
    // ci.dll PAGE:0x44aa8, 0x13a78 bytes
    //
    _y7(sdk::unknown_ptr) free_unicode_string_list;
    
    // [CipGetAcceptedRootKeys]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x340dc, 0x8dc0 bytes
    // ci.dll PAGE:0x5c9e0, 0x13a78 bytes
    // ci.dll PAGE:0x5a1ac, 0x13a78 bytes
    // ci.dll PAGE:0x5c9e0, 0x13a78 bytes
    //
    _y8(sdk::unknown_ptr) get_accepted_root_keys;
    
    // [CipGetAppxCatalog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2c060, 0x8dc0 bytes
    // ci.dll PAGE:0x5034c, 0x13a78 bytes
    // ci.dll PAGE:0x4d778, 0x13a78 bytes
    // ci.dll PAGE:0x5034c, 0x13a78 bytes
    //
    _y9(sdk::unknown_ptr) get_appx_catalog;
    
    // [CipGetEnterpriseUmciFileHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32424, 0x8dc0 bytes
    // ci.dll PAGE:0x59260, 0x13a78 bytes
    // ci.dll PAGE:0x569d4, 0x13a78 bytes
    // ci.dll PAGE:0x59260, 0x13a78 bytes
    //
    _z0(sdk::unknown_ptr) get_enterprise_umci_file_hash;
    
    // [CipGetFileAttributes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x25560, 0x8dc0 bytes
    // ci.dll PAGE:0x48980, 0x13a78 bytes
    // ci.dll PAGE:0x4518c, 0x13a78 bytes
    // ci.dll PAGE:0x48980, 0x13a78 bytes
    //
    _z1(sdk::unknown_ptr) get_file_attributes;
    
    // [CipGetFileCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x24ef0, 0x8dc0 bytes
    // ci.dll PAGE:0x47e84, 0x13a78 bytes
    // ci.dll PAGE:0x445f0, 0x13a78 bytes
    // ci.dll PAGE:0x47e84, 0x13a78 bytes
    //
    _z2(sdk::unknown_ptr) get_file_cache;
    
    // [CipGetHashAlgorithmForLegacyScenario]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x339d4, 0x8dc0 bytes
    // ci.dll PAGE:0x5c014, 0x13a78 bytes
    // ci.dll PAGE:0x59788, 0x13a78 bytes
    // ci.dll PAGE:0x5c014, 0x13a78 bytes
    //
    _z3(sdk::unknown_ptr) get_hash_algorithm_for_legacy_scenario;
    
    // [CipGetMinimumAlgorithmForAllScenarios]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x33a58, 0x8dc0 bytes
    // ci.dll PAGE:0x5c0a0, 0x13a78 bytes
    // ci.dll PAGE:0x59814, 0x13a78 bytes
    // ci.dll PAGE:0x5c0a0, 0x13a78 bytes
    //
    _z4(sdk::unknown_ptr) get_minimum_algorithm_for_all_scenarios;
    
    // [CipGetPageHashesForFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2c89c, 0x8dc0 bytes
    // ci.dll PAGE:0x50b1c, 0x13a78 bytes
    // ci.dll PAGE:0x4dec8, 0x13a78 bytes
    // ci.dll PAGE:0x50b1c, 0x13a78 bytes
    //
    _z5(sdk::unknown_ptr) get_page_hashes_for_file;
    
    // [CipGetRegistryParameters]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23120, 0x8dc0 bytes
    // ci.dll PAGE:0x44350, 0x13a78 bytes
    // ci.dll PAGE:0x3f4d4, 0x13a78 bytes
    // ci.dll PAGE:0x44350, 0x13a78 bytes
    //
    _z6(sdk::unknown_ptr) get_registry_parameters;
    
    // [CipGetVolumeFlags]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x255b4, 0x8dc0 bytes
    // ci.dll PAGE:0x489f8, 0x13a78 bytes
    // ci.dll PAGE:0x45204, 0x13a78 bytes
    // ci.dll PAGE:0x489f8, 0x13a78 bytes
    //
    _z7(sdk::unknown_ptr) get_volume_flags;
    
    // [CipHvciTree]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19ac0, 0x8dc0 bytes
    // ci.dll .data:0x38330, 0x13a78 bytes
    // ci.dll .data:0x323d0, 0x13a78 bytes
    // ci.dll .data:0x38330, 0x13a78 bytes
    //
    _z8(sdk::unknown_ptr) hvci_tree;
    
    // [CipHvciTreeLock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .data:0x19ac8, 0x8dc0 bytes
    // ci.dll .data:0x38338, 0x13a78 bytes
    // ci.dll .data:0x323d8, 0x13a78 bytes
    // ci.dll .data:0x38338, 0x13a78 bytes
    //
    _z9(sdk::unknown_ptr) hvci_tree_lock;
    
    // [CipHvciVerifyHashInCatalogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x364b4, 0x8dc0 bytes
    // ci.dll PAGE:0x636bc, 0x13a78 bytes
    // ci.dll PAGE:0x620a0, 0x13a78 bytes
    // ci.dll PAGE:0x636bc, 0x13a78 bytes
    //
    _a0(sdk::unknown_ptr) hvci_verify_hash_in_catalogs;
    
    // [CipImageAppendRangeOfFileToHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2db00, 0x8dc0 bytes
    // ci.dll PAGE:0x52274, 0x13a78 bytes
    // ci.dll PAGE:0x4f724, 0x13a78 bytes
    // ci.dll PAGE:0x52274, 0x13a78 bytes
    //
    _a1(sdk::unknown_ptr) image_append_range_of_file_to_hash;
    
    // [CipImageGetCertInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2dfb0, 0x8dc0 bytes
    // ci.dll PAGE:0x529ac, 0x13a78 bytes
    // ci.dll PAGE:0x4fe5c, 0x13a78 bytes
    // ci.dll PAGE:0x529ac, 0x13a78 bytes
    //
    _a2(sdk::unknown_ptr) image_get_cert_info;
    
    // [CipImageGetImageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2dbbc, 0x8dc0 bytes
    // ci.dll PAGE:0x52350, 0x13a78 bytes
    // ci.dll PAGE:0x4f800, 0x13a78 bytes
    // ci.dll PAGE:0x52350, 0x13a78 bytes
    //
    _a3(sdk::unknown_ptr) image_get_image_hash;
    
    // [CipImageValidityPeriod]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x25508, 0x8dc0 bytes
    // ci.dll PAGE:0x48920, 0x13a78 bytes
    // ci.dll PAGE:0x4512c, 0x13a78 bytes
    // ci.dll PAGE:0x48920, 0x13a78 bytes
    //
    _a4(sdk::unknown_ptr) image_validity_period;
    
    // [CipInitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x22924, 0x8dc0 bytes
    // ci.dll PAGE:0x43a14, 0x13a78 bytes
    // ci.dll PAGE:0x3ea98, 0x13a78 bytes
    // ci.dll PAGE:0x43a14, 0x13a78 bytes
    //
    _a5(sdk::unknown_ptr) initialize;
    
    // [CipInitializeBootDriverState]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x22844, 0x8dc0 bytes
    // ci.dll PAGE:0x43920, 0x13a78 bytes
    // ci.dll PAGE:0x3e9a4, 0x13a78 bytes
    // ci.dll PAGE:0x43920, 0x13a78 bytes
    //
    _a6(sdk::unknown_ptr) initialize_boot_driver_state;
    
    // [CipInitializePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32d3c, 0x8dc0 bytes
    // ci.dll PAGE:0x5b29c, 0x13a78 bytes
    // ci.dll PAGE:0x58a38, 0x13a78 bytes
    // ci.dll PAGE:0x5b29c, 0x13a78 bytes
    //
    _a7(sdk::unknown_ptr) initialize_policy;
    
    // [CipInitializeSiPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34618, 0x8dc0 bytes
    // ci.dll PAGE:0x5d01c, 0x13a78 bytes
    // ci.dll PAGE:0x5a864, 0x13a78 bytes
    // ci.dll PAGE:0x5d01c, 0x13a78 bytes
    //
    _a8(sdk::unknown_ptr) initialize_si_policy;
    
    // [CipInsertCatalogIntoTable]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29e2c, 0x8dc0 bytes
    // ci.dll PAGE:0x4ce00, 0x13a78 bytes
    // ci.dll PAGE:0x499a8, 0x13a78 bytes
    // ci.dll PAGE:0x4ce00, 0x13a78 bytes
    //
    _a9(sdk::unknown_ptr) insert_catalog_into_table;
    
    // [CipIsCustomSigningPolicyActive]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32d5c, 0x8dc0 bytes
    // ci.dll PAGE:0x5b2d8, 0x13a78 bytes
    // ci.dll PAGE:0x58a74, 0x13a78 bytes
    // ci.dll PAGE:0x5b2d8, 0x13a78 bytes
    //
    _b0(sdk::unknown_ptr) is_custom_signing_policy_active;
    
    // [CipIsFileHashPossiblyWeak]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34830, 0x8dc0 bytes
    // ci.dll PAGE:0x5d04c, 0x13a78 bytes
    // ci.dll PAGE:0x5a8a0, 0x13a78 bytes
    // ci.dll PAGE:0x5d04c, 0x13a78 bytes
    //
    _b1(sdk::unknown_ptr) is_file_hash_possibly_weak;
    
    // [CipIsRuntimeSignerAlreadyRegistered]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34020, 0x8dc0 bytes
    // ci.dll PAGE:0x5c91c, 0x13a78 bytes
    // ci.dll PAGE:0x5a0e8, 0x13a78 bytes
    // ci.dll PAGE:0x5c91c, 0x13a78 bytes
    //
    _b2(sdk::unknown_ptr) is_runtime_signer_already_registered;
    
    // [CipLoadAndValidateRevocationList]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x296bc, 0x8dc0 bytes
    // ci.dll PAGE:0x4c7c8, 0x13a78 bytes
    // ci.dll PAGE:0x49324, 0x13a78 bytes
    // ci.dll PAGE:0x4c7c8, 0x13a78 bytes
    //
    _b3(sdk::unknown_ptr) load_and_validate_revocation_list;
    
    // [CipLoadWeakCryptoPoliciesFailed]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11c30, 0x8dc0 bytes
    // ci.dll .rdata:0x2dbd0, 0x13a78 bytes
    // ci.dll .rdata:0x26250, 0x13a78 bytes
    // ci.dll .rdata:0x2dbd0, 0x13a78 bytes
    //
    _b4(sdk::unknown_ptr) load_weak_crypto_policies_failed;
    
    // [CipLockImagePages]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36f54, 0x8dc0 bytes
    // ci.dll PAGE:0x64a84, 0x13a78 bytes
    // ci.dll PAGE:0x636d4, 0x13a78 bytes
    // ci.dll PAGE:0x64a84, 0x13a78 bytes
    //
    _b5(sdk::unknown_ptr) lock_image_pages;
    
    // [CipMinCryptToSigningLevel]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x341b8, 0x8dc0 bytes
    // ci.dll PAGE:0x5cb38, 0x13a78 bytes
    // ci.dll PAGE:0x5a300, 0x13a78 bytes
    // ci.dll PAGE:0x5cb38, 0x13a78 bytes
    //
    _b6(sdk::unknown_ptr) min_crypt_to_signing_level;
    
    // [CipOpenFileOnCleanStackCallout]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23ea0, 0x8dc0 bytes
    // ci.dll PAGE:0x44d80, 0x13a78 bytes
    // ci.dll PAGE:0x3ff70, 0x13a78 bytes
    // ci.dll PAGE:0x44d80, 0x13a78 bytes
    //
    _b7(sdk::unknown_ptr) open_file_on_clean_stack_callout;
    
    // [CipPostBootTimerRoutine]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x11c0, 0x8dc0 bytes
    // ci.dll .text:0x2320, 0x13a78 bytes
    // ci.dll .text:0x1520, 0x13a78 bytes
    // ci.dll .text:0x22a0, 0x13a78 bytes
    //
    _b8(sdk::unknown_ptr) post_boot_timer_routine;
    
    // [CipPostBootWorker]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23580, 0x8dc0 bytes
    // ci.dll PAGE:0x44850, 0x13a78 bytes
    // ci.dll PAGE:0x3fa00, 0x13a78 bytes
    // ci.dll PAGE:0x44850, 0x13a78 bytes
    //
    _b9(sdk::unknown_ptr) post_boot_worker;
    
    // [CipProcessHashRetryReason]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x30018, 0x8dc0 bytes
    // ci.dll PAGE:0x55210, 0x13a78 bytes
    // ci.dll PAGE:0x523b0, 0x13a78 bytes
    // ci.dll PAGE:0x55210, 0x13a78 bytes
    //
    _c0(sdk::unknown_ptr) process_hash_retry_reason;
    
    // [CipProcessPerformanceLog]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3205c, 0x8dc0 bytes
    // ci.dll PAGE:0x58e30, 0x13a78 bytes
    // ci.dll PAGE:0x5658c, 0x13a78 bytes
    // ci.dll PAGE:0x58e30, 0x13a78 bytes
    //
    _c1(sdk::unknown_ptr) process_performance_log;
    
    // [CipProcessSIPolicyFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32548, 0x8dc0 bytes
    // ci.dll PAGE:0x59434, 0x13a78 bytes
    // ci.dll PAGE:0x56ba8, 0x13a78 bytes
    // ci.dll PAGE:0x59434, 0x13a78 bytes
    //
    _c2(sdk::unknown_ptr) process_si_policy_failure;
    
    // [CipProcessSIPolicyLogs]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32220, 0x8dc0 bytes
    // ci.dll PAGE:0x59034, 0x13a78 bytes
    // ci.dll PAGE:0x56790, 0x13a78 bytes
    // ci.dll PAGE:0x59034, 0x13a78 bytes
    //
    _c3(sdk::unknown_ptr) process_si_policy_logs;
    
    // [CipQueryAndLogFileNameForCatalogEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31f2c, 0x8dc0 bytes
    // ci.dll PAGE:0x58d9c, 0x13a78 bytes
    // ci.dll PAGE:0x564f4, 0x13a78 bytes
    // ci.dll PAGE:0x58d9c, 0x13a78 bytes
    //
    _c4(sdk::unknown_ptr) query_and_log_file_name_for_catalog_event;
    
    // [CipQueryAndLogFileNameForEvent]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31ebc, 0x8dc0 bytes
    // ci.dll PAGE:0x58d20, 0x13a78 bytes
    // ci.dll PAGE:0x56478, 0x13a78 bytes
    // ci.dll PAGE:0x58d20, 0x13a78 bytes
    //
    _c5(sdk::unknown_ptr) query_and_log_file_name_for_event;
    
    // [CipQueryFileName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31df8, 0x8dc0 bytes
    // ci.dll PAGE:0x58ba0, 0x13a78 bytes
    // ci.dll PAGE:0x56304, 0x13a78 bytes
    // ci.dll PAGE:0x58ba0, 0x13a78 bytes
    //
    _c6(sdk::unknown_ptr) query_file_name;
    
    // [CipQueryProcessName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x31e44, 0x8dc0 bytes
    // ci.dll PAGE:0x58bf8, 0x13a78 bytes
    // ci.dll PAGE:0x5635c, 0x13a78 bytes
    // ci.dll PAGE:0x58bf8, 0x13a78 bytes
    //
    _c7(sdk::unknown_ptr) query_process_name;
    
    // [CipReadCustomSigningPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32d68, 0x8dc0 bytes
    // ci.dll PAGE:0x5b2ec, 0x13a78 bytes
    // ci.dll PAGE:0x58a88, 0x13a78 bytes
    // ci.dll PAGE:0x5b2ec, 0x13a78 bytes
    //
    _c8(sdk::unknown_ptr) read_custom_signing_policy;
    
    // [CipRegMultiSzToUnicodeStrings]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x238d0, 0x8dc0 bytes
    // ci.dll PAGE:0x44b28, 0x13a78 bytes
    // ci.dll PAGE:0x3fd1c, 0x13a78 bytes
    // ci.dll PAGE:0x44b28, 0x13a78 bytes
    //
    _c9(sdk::unknown_ptr) reg_multi_sz_to_unicode_strings;
    
    // [CipRegisterSigningInformationEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x33d08, 0x8dc0 bytes
    // ci.dll PAGE:0x5c3a8, 0x13a78 bytes
    // ci.dll PAGE:0x59b40, 0x13a78 bytes
    // ci.dll PAGE:0x5c3a8, 0x13a78 bytes
    //
    _d0(sdk::unknown_ptr) register_signing_information_ex;
    
    // [CipReleaseImage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x37040, 0x8dc0 bytes
    // ci.dll PAGE:0x64bc8, 0x13a78 bytes
    // ci.dll PAGE:0x63838, 0x13a78 bytes
    // ci.dll PAGE:0x64bc8, 0x13a78 bytes
    //
    _d1(sdk::unknown_ptr) release_image;
    
    // [CipRemoveCatalogFromTable]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x29ee0, 0x8dc0 bytes
    // ci.dll PAGE:0x4cec0, 0x13a78 bytes
    // ci.dll PAGE:0x49a68, 0x13a78 bytes
    // ci.dll PAGE:0x4cec0, 0x13a78 bytes
    //
    _d2(sdk::unknown_ptr) remove_catalog_from_table;
    
    // [CipReportAndReprieveDriverAndProtectedImageFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2f50c, 0x8dc0 bytes
    // ci.dll PAGE:0x544d4, 0x13a78 bytes
    // ci.dll PAGE:0x51900, 0x13a78 bytes
    // ci.dll PAGE:0x544d4, 0x13a78 bytes
    //
    _d3(sdk::unknown_ptr) report_and_reprieve_driver_and_protected_image_failure;
    
    // [CipReportAndReprieveUMCIFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2ef58, 0x8dc0 bytes
    // ci.dll PAGE:0x53e1c, 0x13a78 bytes
    // ci.dll PAGE:0x51314, 0x13a78 bytes
    // ci.dll PAGE:0x53e1c, 0x13a78 bytes
    //
    _d4(sdk::unknown_ptr) report_and_reprieve_umci_failure;
    
    // [CipReportSharedSectionFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2ed94, 0x8dc0 bytes
    // ci.dll PAGE:0x53c3c, 0x13a78 bytes
    // ci.dll PAGE:0x51134, 0x13a78 bytes
    // ci.dll PAGE:0x53c3c, 0x13a78 bytes
    //
    _d5(sdk::unknown_ptr) report_shared_section_failure;
    
    // [CipReportSiPolicyFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x32828, 0x8dc0 bytes
    // ci.dll PAGE:0x5976c, 0x13a78 bytes
    // ci.dll PAGE:0x56edc, 0x13a78 bytes
    // ci.dll PAGE:0x5976c, 0x13a78 bytes
    //
    _d6(sdk::unknown_ptr) report_si_policy_failure;
    
    // [CipReportSystemOptionsReprieve]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2f6e4, 0x8dc0 bytes
    // ci.dll PAGE:0x54780, 0x13a78 bytes
    // ci.dll PAGE:0x51b30, 0x13a78 bytes
    // ci.dll PAGE:0x54780, 0x13a78 bytes
    //
    _d7(sdk::unknown_ptr) report_system_options_reprieve;
    
    // [CipSetFileCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x24640, 0x8dc0 bytes
    // ci.dll PAGE:0x47174, 0x13a78 bytes
    // ci.dll PAGE:0x438bc, 0x13a78 bytes
    // ci.dll PAGE:0x47174, 0x13a78 bytes
    //
    _d8(sdk::unknown_ptr) set_file_cache;
    
    // [CipSetFileVersionInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x1230, 0x8dc0 bytes
    // ci.dll .text:0x28a0, 0x13a78 bytes
    // ci.dll .text:0x1ae0, 0x13a78 bytes
    // ci.dll .text:0x2820, 0x13a78 bytes
    //
    _d9(sdk::unknown_ptr) set_file_version_information;
    
    // [CipSetPlatformManifestFromPackageName]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x1474, 0x8dc0 bytes
    // ci.dll .text:0x33fc, 0x13a78 bytes
    // ci.dll .text:0x27c4, 0x13a78 bytes
    // ci.dll .text:0x337c, 0x13a78 bytes
    //
    _e0(sdk::unknown_ptr) set_platform_manifest_from_package_name;
    
    // [CipSetUmciExclusionPaths]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23348, 0x8dc0 bytes
    // ci.dll PAGE:0x445b8, 0x13a78 bytes
    // ci.dll PAGE:0x3f790, 0x13a78 bytes
    // ci.dll PAGE:0x445b8, 0x13a78 bytes
    //
    _e1(sdk::unknown_ptr) set_umci_exclusion_paths;
    
    // [CipSignatureValidityPeriod]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x254cc, 0x8dc0 bytes
    // ci.dll PAGE:0x488e0, 0x13a78 bytes
    // ci.dll PAGE:0x450ec, 0x13a78 bytes
    // ci.dll PAGE:0x488e0, 0x13a78 bytes
    //
    _e2(sdk::unknown_ptr) signature_validity_period;
    
    // [CipUnlockImagePages]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x36fe8, 0x8dc0 bytes
    // ci.dll PAGE:0x64b50, 0x13a78 bytes
    // ci.dll PAGE:0x637b0, 0x13a78 bytes
    // ci.dll PAGE:0x64b50, 0x13a78 bytes
    //
    _e3(sdk::unknown_ptr) unlock_image_pages;
    
    // [CipUpdateSePoolwithPageHashes]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2cc70, 0x8dc0 bytes
    // ci.dll PAGE:0x51010, 0x13a78 bytes
    // ci.dll PAGE:0x4e3b0, 0x13a78 bytes
    // ci.dll PAGE:0x51010, 0x13a78 bytes
    //
    _e4(sdk::unknown_ptr) update_se_poolwith_page_hashes;
    
    // [CipV1PageHashSearchCompareRoutine]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27f90, 0x8dc0 bytes
    // ci.dll PAGE:0x4c350, 0x13a78 bytes
    // ci.dll PAGE:0x48f90, 0x13a78 bytes
    // ci.dll PAGE:0x4c350, 0x13a78 bytes
    //
    _e5(sdk::unknown_ptr) v1_page_hash_search_compare_routine;
    
    // [CipV1PageHashSortCompareRoutine]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x27f70, 0x8dc0 bytes
    // ci.dll PAGE:0x4c320, 0x13a78 bytes
    // ci.dll PAGE:0x48f50, 0x13a78 bytes
    // ci.dll PAGE:0x4c320, 0x13a78 bytes
    //
    _e6(sdk::unknown_ptr) v1_page_hash_sort_compare_routine;
    
    // [CipValidateChainAgainstSigner]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x335b8, 0x8dc0 bytes
    // ci.dll PAGE:0x5ba98, 0x13a78 bytes
    // ci.dll PAGE:0x59224, 0x13a78 bytes
    // ci.dll PAGE:0x5ba98, 0x13a78 bytes
    //
    _e7(sdk::unknown_ptr) validate_chain_against_signer;
    
    // [CipValidateDataMappedFile]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2e5e0, 0x8dc0 bytes
    // ci.dll PAGE:0x53018, 0x13a78 bytes
    // ci.dll PAGE:0x504e0, 0x13a78 bytes
    // ci.dll PAGE:0x53018, 0x13a78 bytes
    //
    _e8(sdk::unknown_ptr) validate_data_mapped_file;
    
    // [CipValidateDataMappedFileWithContext]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2e798, 0x8dc0 bytes
    // ci.dll PAGE:0x531ec, 0x13a78 bytes
    // ci.dll PAGE:0x506bc, 0x13a78 bytes
    // ci.dll PAGE:0x531ec, 0x13a78 bytes
    //
    _e9(sdk::unknown_ptr) validate_data_mapped_file_with_context;
    
    // [CipValidateFileHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2d180, 0x8dc0 bytes
    // ci.dll PAGE:0x519a0, 0x13a78 bytes
    // ci.dll PAGE:0x4edc0, 0x13a78 bytes
    // ci.dll PAGE:0x519a0, 0x13a78 bytes
    //
    _f0(sdk::unknown_ptr) validate_file_hash;
    
    // [CipValidateFileInCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2ce68, 0x8dc0 bytes
    // ci.dll PAGE:0x51324, 0x13a78 bytes
    // ci.dll PAGE:0x4e708, 0x13a78 bytes
    // ci.dll PAGE:0x51324, 0x13a78 bytes
    //
    _f1(sdk::unknown_ptr) validate_file_in_cache;
    
    // [CipValidateFirstPage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2b000, 0x8dc0 bytes
    // ci.dll PAGE:0x4ed14, 0x13a78 bytes
    // ci.dll PAGE:0x4bed4, 0x13a78 bytes
    // ci.dll PAGE:0x4ed14, 0x13a78 bytes
    //
    _f2(sdk::unknown_ptr) validate_first_page;
    
    // [CipValidateImageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2cf6c, 0x8dc0 bytes
    // ci.dll PAGE:0x5149c, 0x13a78 bytes
    // ci.dll PAGE:0x4e87c, 0x13a78 bytes
    // ci.dll PAGE:0x5149c, 0x13a78 bytes
    //
    _f3(sdk::unknown_ptr) validate_image_hash;
    
    // [CipValidatePageHash]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x2d5c0, 0x8dc0 bytes
    // ci.dll PAGE:0x51df0, 0x13a78 bytes
    // ci.dll PAGE:0x4f210, 0x13a78 bytes
    // ci.dll PAGE:0x51df0, 0x13a78 bytes
    //
    _f4(sdk::unknown_ptr) validate_page_hash;
    
    // [CipValidateSigningPolicyForRuntimeSigners]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x33f50, 0x8dc0 bytes
    // ci.dll PAGE:0x5c83c, 0x13a78 bytes
    // ci.dll PAGE:0x59fec, 0x13a78 bytes
    // ci.dll PAGE:0x5c83c, 0x13a78 bytes
    //
    _f5(sdk::unknown_ptr) validate_signing_policy_for_runtime_signers;
    
    // [CipValidateSigningPolicyForScenario]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x336ec, 0x8dc0 bytes
    // ci.dll PAGE:0x5bbcc, 0x13a78 bytes
    // ci.dll PAGE:0x59358, 0x13a78 bytes
    // ci.dll PAGE:0x5bbcc, 0x13a78 bytes
    //
    _f6(sdk::unknown_ptr) validate_signing_policy_for_scenario;
    
    // [CipValidateSigningPolicyForSigningLevel]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3335c, 0x8dc0 bytes
    // ci.dll PAGE:0x5b86c, 0x13a78 bytes
    // ci.dll PAGE:0x58ff8, 0x13a78 bytes
    // ci.dll PAGE:0x5b86c, 0x13a78 bytes
    //
    _f7(sdk::unknown_ptr) validate_signing_policy_for_signing_level;
    
    // [CipVerifyFileCache]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x23ed4, 0x8dc0 bytes
    // ci.dll PAGE:0x46c20, 0x13a78 bytes
    // ci.dll PAGE:0x433d4, 0x13a78 bytes
    // ci.dll PAGE:0x46c20, 0x13a78 bytes
    //
    _f8(sdk::unknown_ptr) verify_file_cache;
    
    // [CipWhqlEnforcementEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x34adc, 0x8dc0 bytes
    // ci.dll PAGE:0x5dd7c, 0x13a78 bytes
    // ci.dll PAGE:0x5baa4, 0x13a78 bytes
    // ci.dll PAGE:0x5dd7c, 0x13a78 bytes
    //
    _f9(sdk::unknown_ptr) whql_enforcement_enabled;
};
#include "magic/api.end.hpp"
