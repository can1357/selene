#pragma once
#include <sdkgen/support_library.hpp>
#include "exports_t.hpp"
#include "../nt/acl_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/luid_t.hpp"
#include "audit_info_t.hpp"
#include "image_type_t.hpp"
#include "access_reply_t.hpp"
#include "access_request_t.hpp"
#include "../nt/pool_type_t.hpp"
#include "../nt/token_type_t.hpp"
#include "../nt/access_state_t.hpp"
#include "../nt/token_groups_t.hpp"
#include "../nt/privilege_set_t.hpp"
#include "../nt/generic_mapping_t.hpp"
#include "../sec/client_context_t.hpp"
#include "../nt/token_privileges_t.hpp"
#include "../sec/subject_context_t.hpp"
#include "../nt/sid_and_attributes_t.hpp"
#include "../sec/quality_of_service_t.hpp"
#include "../sec/impersonation_level_t.hpp"
#include "../win/token_elevation_type_t.hpp"
#include "../nt/bdcb_image_information_t.hpp"
#include "../nt/token_information_class_t.hpp"
#include "image_verification_callback_type_t.hpp"

namespace kaux { struct access_data_t; }
namespace nt   { struct ejob_t;        }
namespace nt   { struct kprocess_t;    }
namespace nt   { struct kthread_t;     }

#include "magic/api.start.hpp"
namespace se
{
    // [SeAdjustObjectAppContainerSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x698f7c, 0x32828 bytes
    //
    _m00(sdk::unknown_ptr) adjust_object_app_container_security;
    
    // [SeAppSiloProfilesRootMinimalCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc70968, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) app_silo_profiles_root_minimal_capability_sid;
    
    // [SeAppSiloSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc70958, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) app_silo_sid;
    
    // [SeAppSiloVolumeRootMinimalCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc70960, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) app_silo_volume_root_minimal_capability_sid;
    
    // [SeCompareSigningLevelsForAuditableProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x49c398, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) compare_signing_levels_for_auditable_process;
    
    // [SeCreateAndRegisterAccessCheckDebugContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5a2d30, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) create_and_register_access_check_debug_context;
    
    // [SeDeleteClientSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6f35c0, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) delete_client_security;
    
    // [SeFailIfExtensionNotSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x32a1d9, 0x32828 bytes
    //
    _m07(sdk::unknown_ptr) fail_if_extension_not_supported;
    
    // [SeGetStrongImageReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x69117c, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) get_strong_image_reference;
    
    // [SeIsPermissiveLearningModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3768f4, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) is_permissive_learning_mode_enabled;
    
    // [SeLearningModeLoggingCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37618, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) learning_mode_logging_capability_sid;
    
    // [SeLpacDeviceAccessCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37620, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) lpac_device_access_capability_sid;
    
    // [SePermissiveLearningModeCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37610, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) permissive_learning_mode_capability_sid;
    
    // [SeQuerySigningPolicyExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12e8, 0x32828 bytes
    //
    _m13(sdk::unknown_ptr) query_signing_policy_ext;
    
    // [SeQuerySigningPolicyExtAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x32a1d8, 0x32828 bytes
    //
    _m14(sdk::unknown_ptr) query_signing_policy_ext_allowed;
    
    // [SeQuerySigningPolicyInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x32a6b8, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) query_signing_policy_init;
    
    // [SeReleaseUnicodeStringStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x695374, 0x32828 bytes
    //
    _m16(sdk::unknown_ptr) release_unicode_string_structures;
    
    // [SeRevalidateImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x691194, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) revalidate_image;
    
    // [SeRmCleanupSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x691274, 0x32828 bytes
    //
    _m18(sdk::unknown_ptr) rm_cleanup_silo_state;
    
    // [SeSetImageBaseAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6911a4, 0x32828 bytes
    //
    _m19(sdk::unknown_ptr) set_image_base_address;
    
    // [SeTokenGetRedirectionTrustPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37c8b8, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) token_get_redirection_trust_policy;
    
    // [SeTokenIsNoChildProcessRestricted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x71c88, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) token_is_no_child_process_restricted;
    
    // [SeTokenSetRedirectionTrustPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37c394, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) token_set_redirection_trust_policy;
    
    // [SeUnRegisterAndFreeAccessCheckDebugContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) un_register_and_free_access_check_debug_context;
    
    // [SeValidateFileAsImageType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6911c8, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) validate_file_as_image_type;
    
    // [SeAccessCheckByTypeWithAdminlessChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2d7390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x258400, 0x1fe000 bytes
    //
    _m25(sdk::unknown_ptr) access_check_by_type_with_adminless_checks;
    
    // [SeAccessCheckWithHintWithAdminlessChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2eb4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2092c0, 0x1fe000 bytes
    //
    _m26(sdk::unknown_ptr) access_check_with_hint_with_adminless_checks;
    
    // [SeAdminlessEnableEventLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4d74, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf4d74, 0x1fe000 bytes
    //
    _m27(sdk::unknown_ptr) adminless_enable_event_logging;
    
    // [SeAdminlessEnableWatsonReporting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4d7c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf4d7c, 0x1fe000 bytes
    //
    _m28(sdk::unknown_ptr) adminless_enable_watson_reporting;
    
    // [SeAdminlessEnableWatsonThrottling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12048, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc120a8, 0x1fe000 bytes
    //
    _m29(sdk::unknown_ptr) adminless_enable_watson_throttling;
    
    // [SeAdminlessEnforcementModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4b4c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf4b50, 0x1fe000 bytes
    //
    _m30(sdk::unknown_ptr) adminless_enforcement_mode_enabled;
    
    // [SeAuditingPlugAndPlayEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91d994, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x91c264, 0x1fe000 bytes
    //
    _m31(sdk::unknown_ptr) auditing_plug_and_play_events;
    
    // [SeCodeIntegrityQueryPolicyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x638210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b5650, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) code_integrity_query_policy_information;
    
    // [SeCodeIntegritySetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x918ef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x917708, 0x1fe000 bytes
    //
    _m33(sdk::unknown_ptr) code_integrity_set_information;
    
    // [SeIsLearningModePermissiveEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _m34(sdk::unknown_ptr) is_learning_mode_permissive_enabled;
    
    // [SeIsSModeAdminlessEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35551c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a79c, 0x1fe000 bytes
    //
    _m35(sdk::unknown_ptr) is_s_mode_adminless_enabled;
    
    // [SeAdjustAccessStateForAccessConstraints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7387c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e17f0, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) adjust_access_state_for_access_constraints;
    
    // [SeAdjustObjectSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _m37(sdk::function<int32_t(nt::unicode_view*, void*, void*, struct sec::subject_context_t*, void**, uint8_t*)>*) adjust_object_security;
    
    // [SeCheckForCriticalAceRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62b8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7384f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ba80, 0x1fe000 bytes
    //
    _m38(sdk::function<void(void*, void*, struct sec::subject_context_t*, uint8_t*)>*) check_for_critical_ace_removal;
    
    // [SeCodeIntegrityGetBuildExpiryTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x817670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bcfc0, 0x1fe000 bytes
    //
    _m39(sdk::unknown_ptr) code_integrity_get_build_expiry_time;
    
    // [SeCodeIntegrityQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6653c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8610, 0x1fe000 bytes
    //
    _m40(sdk::unknown_ptr) code_integrity_query_information;
    
    // [SeCodeIntegritySetInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x918f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bc7d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917730, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) code_integrity_set_information_process;
    
    // [SeConvertSidToStringSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x592040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591ec0, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) convert_sid_to_string_sid;
    
    // [SeConvertStringSidToSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bb880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bc5c0, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) convert_string_sid_to_sid;
    
    // [SeCreateAccessStateFromSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91a1fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bdae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918a0c, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) create_access_state_from_subject_context;
    
    // [SeDeviceOwnerProtectionDowngradeAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4d78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d78, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) device_owner_protection_downgrade_allowed;
    
    // [SeDuplicateTokenAndAddOriginClaim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91f7cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e09c, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) duplicate_token_and_add_origin_claim;
    
    // [SeILSigningPolicyRuntime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcec5a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c228, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec5a8, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) il_signing_policy_runtime;
    
    // [SeLpacAppExperienceCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db58, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) lpac_app_experience_capability_sid;
    
    // [SeLpacCapabilitySids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2bb90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51e30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2bb90, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) lpac_capability_sids;
    
    // [SeLpacClipboardCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37638, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db88, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) lpac_clipboard_capability_sid;
    
    // [SeLpacComCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db70, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) lpac_com_capability_sid;
    
    // [SeLpacCryptoServicesCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db68, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) lpac_crypto_services_capability_sid;
    
    // [SeLpacEnableWatsonReporting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4d80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d80, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) lpac_enable_watson_reporting;
    
    // [SeLpacEnableWatsonThrottling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1204c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd0c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120ac, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) lpac_enable_watson_throttling;
    
    // [SeLpacEnterprisePolicyChangeNotificationsCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db50, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) lpac_enterprise_policy_change_notifications_capability_sid;
    
    // [SeLpacIdentityServicesCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37598, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db40, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) lpac_identity_services_capability_sid;
    
    // [SeLpacImeCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37630, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dbc0, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) lpac_ime_capability_sid;
    
    // [SeLpacInstrumentationCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37590, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db38, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) lpac_instrumentation_capability_sid;
    
    // [SeLpacMediaCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db48, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) lpac_media_capability_sid;
    
    // [SeLpacPackageManagerOperationCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37628, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dbb8, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) lpac_package_manager_operation_capability_sid;
    
    // [SeLpacPaymentsCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db90, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) lpac_payments_capability_sid;
    
    // [SeLpacPnpNotificationsCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dba0, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) lpac_pnp_notifications_capability_sid;
    
    // [SeLpacPrintingCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db80, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) lpac_printing_capability_sid;
    
    // [SeLpacServicesManagementCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dbb0, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) lpac_services_management_capability_sid;
    
    // [SeLpacSessionManagementCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dba8, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) lpac_session_management_capability_sid;
    
    // [SeLpacWebPlatformCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db78, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) lpac_web_platform_capability_sid;
    
    // [SeProcTrustAuthenticodeSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37528, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dac0, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) proc_trust_authenticode_sid;
    
    // [SeProcTrustLiteAntimalwareSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1da88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dad8, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) proc_trust_lite_antimalware_sid;
    
    // [SeProcTrustLiteAppSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1daa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37578, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db20, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) proc_trust_lite_app_sid;
    
    // [SeQueryTokenIntegrity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27d088, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3817a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d799c, 0x1fe000 bytes
    //
    _m70(sdk::function<void(void*, struct nt::sid_and_attributes_t*)>*) query_token_integrity;
    
    // [SeRegistryReadCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1db18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db98, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) registry_read_capability_sid;
    
    // [SeSecurityModelQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x919d9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd69c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9185ac, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) security_model_query_information;
    
    // [SeSetSessionIdTokenWithLinked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x919980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918190, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) set_session_id_token_with_linked;
    
    // [SeShutdownServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x919220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bcad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917a30, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) shutdown_server_silo;
    
    // [SeSinglePrivilegeCheckEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6147e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73855c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2f38, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) single_privilege_check_ex;
    
    // [SeTokenGetNoChildProcessRestricted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b6ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377904, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339b9c, 0x1fe000 bytes
    //
    _m76(sdk::function<void(void*, uint8_t*, uint8_t*, uint8_t*)>*) token_get_no_child_process_restricted;
    
    // [SeTokenIsNoChildProcessRestrictionEnforced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x591288, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a40b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591108, 0x1fe000 bytes
    //
    _m77(sdk::function<uint8_t(void*, uint8_t*)>*) token_is_no_child_process_restriction_enforced;
    
    // [SeTokenSetNoChildProcessRestricted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26f9ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38346c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3210c0, 0x1fe000 bytes
    //
    _m78(sdk::function<void(void*, uint8_t, uint8_t)>*) token_set_no_child_process_restricted;
    
    // [SeAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe27a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ea1a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x207f80, 0x1fe000 bytes
    //
    _m79(sdk::function<uint8_t(void*, struct sec::subject_context_t*, uint8_t, uint32_t, uint32_t, struct nt::privilege_set_t**, struct nt::generic_mapping_t*, char, uint32_t*, int32_t*)>*) access_check;
    
    // [SeAccessCheckByType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2e50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d7260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x290aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2582d0, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) access_check_by_type;
    
    // [SeAccessCheckEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133dd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36ec80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3991a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x370000, 0x1fe000 bytes
    //
    _m81(sdk::function<uint8_t(struct sec::subject_context_t*, uint8_t, struct se::access_request_t*, struct se::access_reply_t*, struct se::audit_info_t*, char)>*) access_check_ex;
    
    // [SeAccessCheckFromState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdc67c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2026e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x240eb0, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) access_check_from_state;
    
    // [SeAccessCheckFromStateEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe112c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2027f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2b10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x240fc0, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) access_check_from_state_ex;
    
    // [SeAccessCheckWithHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe2810, 0x32828 bytes
    // ntoskrnl.exe .text:0x2eb470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x209250, 0x1fe000 bytes
    //
    _m84(sdk::function<uint8_t(void*, uint32_t, struct sec::subject_context_t*, uint8_t, uint32_t, uint32_t, struct nt::privilege_set_t**, struct nt::generic_mapping_t*, char, uint32_t*, int32_t*)>*) access_check_with_hint;
    
    // [SeAdjustAccessStateForTrustLabel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47157c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918590, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) adjust_access_state_for_trust_label;
    
    // [SeAdtRegistryValueChangedAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91a37c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bdb94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918b8c, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) adt_registry_value_changed_audit_alarm;
    
    // [SeAliasAccountOpsSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ada0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c898, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53640, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8b8, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) alias_account_ops_sid;
    
    // [SeAliasAdminsSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab18, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c688, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53428, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c688, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) alias_admins_sid;
    
    // [SeAliasBackupOpsSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad98, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53668, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8c0, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) alias_backup_ops_sid;
    
    // [SeAliasGuestsSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad78, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c888, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8a0, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) alias_guests_sid;
    
    // [SeAliasPowerUsersSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad80, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c890, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53648, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c898, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) alias_power_users_sid;
    
    // [SeAliasPrintOpsSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad90, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53670, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8c8, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) alias_print_ops_sid;
    
    // [SeAliasSystemOpsSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ada8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53638, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8b0, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) alias_system_ops_sid;
    
    // [SeAliasUsersSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acd8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53580, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7f0, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) alias_users_sid;
    
    // [SeAllAppPackagesSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a068, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70ae8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543c0, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) all_app_packages_sid;
    
    // [SeAllRestrictedAppPackagesSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a060, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54298, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70990, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543c8, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) all_restricted_app_packages_sid;
    
    // [SeAnonymousAuthenticationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec10, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) anonymous_authentication_id;
    
    // [SeAnonymousLogonSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aba0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53480, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6d8, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) anonymous_logon_sid;
    
    // [SeAnonymousLogonToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b100, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53930, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbd0, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) anonymous_logon_token;
    
    // [SeAnonymousLogonTokenNoEveryone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74afe8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca28, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) anonymous_logon_token_no_everyone;
    
    // [SeAppendPrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47b0a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64bfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb760, 0x1fe000 bytes
    //
    _n01(sdk::function<int32_t(struct nt::access_state_t*, struct nt::privilege_set_t*)>*) append_privileges;
    
    // [SeAssignPrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5702b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b4b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e778, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2a34, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) assign_primary_token;
    
    // [SeAssignPrimaryTokenPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acd0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53570, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7d0, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) assign_primary_token_privilege;
    
    // [SeAssignSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee898, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b85f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695d10, 0x1fe000 bytes
    //
    _n04(sdk::function<int32_t(void*, void*, void**, uint8_t, struct sec::subject_context_t*, struct nt::generic_mapping_t*, enum nt::pool_type_t)>*) assign_security;
    
    // [SeAssignSecurityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e984, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65bb90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cf890, 0x1fe000 bytes
    //
    _n05(sdk::function<int32_t(void*, void*, void**, struct nt::guid_t*, uint8_t, uint32_t, struct sec::subject_context_t*, struct nt::generic_mapping_t*, enum nt::pool_type_t)>*) assign_security_ex;
    
    // [SeAssignSecurityEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2740, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d6e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x257e70, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) assign_security_ex2;
    
    // [SeAssignWorldSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691c2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91a288, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82c098, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918a98, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) assign_world_security_descriptor;
    
    // [SeAtomDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad20, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c818, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c838, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) atom_dacl;
    
    // [SeAtomSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af68, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca38, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca10, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) atom_sd;
    
    // [SeAuditBootConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560138, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e868, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2ee8, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) audit_boot_configuration;
    
    // [SeAuditFipsCryptoSelftests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6922d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91a930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9be150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x919140, 0x1fe000 bytes
    //
    _n11(sdk::function<void(uint8_t, uint32_t)>*) audit_fips_crypto_selftests;
    
    // [SeAuditHandleCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c0d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669acc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5e7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dcb0c, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) audit_handle_creation;
    
    // [SeAuditHandleDuplication]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6924a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91ab04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9be31c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9193d4, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) audit_handle_duplication;
    
    // [SeAuditHardLinkCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x692638, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91acd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9be4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9195a0, 0x1fe000 bytes
    //
    _n14(sdk::function<void(nt::unicode_view*, nt::unicode_view*, uint8_t)>*) audit_hard_link_creation;
    
    // [SeAuditHardLinkCreationWithTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x692640, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91acf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9be510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9195c0, 0x1fe000 bytes
    //
    _n15(sdk::function<void(nt::unicode_view*, nt::unicode_view*, uint8_t, struct nt::guid_t*)>*) audit_hard_link_creation_with_transaction;
    
    // [SeAuditHeaderRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf1230, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d1610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252630, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) audit_header_required;
    
    // [SeAuditPlugAndPlay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6927f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91aea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9be6c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x919778, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) audit_plug_and_play;
    
    // [SeAuditPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad30, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c820, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c840, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) audit_privilege;
    
    // [SeAuditProcessCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560634, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79be7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84efa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a33fc, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) audit_process_creation;
    
    // [SeAuditProcessExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x692ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91b274, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bea94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x919b44, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) audit_process_exit;
    
    // [SeAuditSystemTimeChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x692d1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91b3f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bec18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x919cc4, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) audit_system_time_change;
    
    // [SeAuditTransactionStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x692ec4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91b5b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bede0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x919e80, 0x1fe000 bytes
    //
    _n22(sdk::function<void(struct nt::guid_t*, struct nt::guid_t*, uint32_t)>*) audit_transaction_state_change;
    
    // [SeAuditingAnyFileEventsWithContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69504c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c0a0, 0x1fe000 bytes
    //
    _n23(sdk::function<uint8_t(void*, struct sec::subject_context_t*)>*) auditing_any_file_events_with_context;
    
    // [SeAuditingAnyFileEventsWithContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeee80, 0x32828 bytes
    // ntoskrnl.exe .text:0x2176f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ec90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205530, 0x1fe000 bytes
    //
    _n24(sdk::function<uint8_t(void*, struct sec::subject_context_t*, uint8_t*)>*) auditing_any_file_events_with_context_ex;
    
    // [SeAuditingFileEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c0c0, 0x1fe000 bytes
    //
    _n25(sdk::function<uint8_t(uint8_t, void*)>*) auditing_file_events;
    
    // [SeAuditingFileEventsWithContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69508c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c100, 0x1fe000 bytes
    //
    _n26(sdk::function<uint8_t(uint8_t, void*, struct sec::subject_context_t*)>*) auditing_file_events_with_context;
    
    // [SeAuditingFileEventsWithContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a060, 0x32828 bytes
    // ntoskrnl.exe .text:0x590e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590ca0, 0x1fe000 bytes
    //
    _n27(sdk::function<uint8_t(uint8_t, void*, struct sec::subject_context_t*, uint8_t*)>*) auditing_file_events_with_context_ex;
    
    // [SeAuditingFileOrGlobalEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c120, 0x1fe000 bytes
    //
    _n28(sdk::function<uint8_t(uint8_t, void*, struct sec::subject_context_t*)>*) auditing_file_or_global_events;
    
    // [SeAuditingHardLinkEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69517c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91d940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91c210, 0x1fe000 bytes
    //
    _n29(sdk::function<uint8_t(uint8_t, void*)>*) auditing_hard_link_events;
    
    // [SeAuditingHardLinkEventsWithContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a31a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66abb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e64d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd910, 0x1fe000 bytes
    //
    _n30(sdk::function<uint8_t(uint8_t, void*, struct sec::subject_context_t*)>*) auditing_hard_link_events_with_context;
    
    // [SeAuditingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301bc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d440, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36f00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d4c0, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) auditing_state;
    
    // [SeAuditingStateByCategory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301c40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d4c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36ec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d480, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) auditing_state_by_category;
    
    // [SeAuditingWithTokenForSubcategory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f92c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x751580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x670300, 0x1fe000 bytes
    //
    _n33(sdk::function<uint8_t(uint32_t, void*)>*) auditing_with_token_for_subcategory;
    
    // [SeAuthenticatedUsersSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad88, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53658, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c890, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) authenticated_users_sid;
    
    // [SeBackupPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab78, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53478, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6d0, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) backup_privilege;
    
    // [SeBatchSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a090, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54280, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) batch_sid;
    
    // [SeCapabilityPrefixSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a088, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54258, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) capability_prefix_sid;
    
    // [SeCaptureAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec1ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f709c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ffa54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674e9c, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) capture_acl;
    
    // [SeCaptureAtomTableCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c724, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ae50, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) capture_atom_table_callout;
    
    // [SeCaptureLuidAndAttributesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684cdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750d34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67010c, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) capture_luid_and_attributes_array;
    
    // [SeCaptureObjectAttributeSecurityDescriptorPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe03c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4fd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c118c, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) capture_object_attribute_security_descriptor_present;
    
    // [SeCaptureObjectTypeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1a90, 0x32828 bytes
    // ntoskrnl.exe .text:0x217d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x291fc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204740, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) capture_object_type_list;
    
    // [SeCaptureSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d25e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6af180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69fd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6057b0, 0x1fe000 bytes
    //
    _n43(sdk::function<int32_t(void*, char, enum nt::pool_type_t, uint8_t, void**)>*) capture_security_descriptor;
    
    // [SeCaptureSecurityQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af518, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc694, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c92e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x649674, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) capture_security_qos;
    
    // [SeCaptureSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b550, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f90e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ecba4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6460c0, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) capture_sid;
    
    // [SeCaptureSidAndAttributesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e9fb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f80d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7031b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6735b0, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) capture_sid_and_attributes_array;
    
    // [SeCaptureSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6da000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eae00, 0x1fe000 bytes
    //
    _n47(sdk::function<void(struct sec::subject_context_t*)>*) capture_subject_context;
    
    // [SeCaptureSubjectContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d0f50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ac3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69fc60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6029d0, 0x1fe000 bytes
    //
    _n48(sdk::function<void(struct nt::kthread_t*, struct nt::kprocess_t*, struct sec::subject_context_t*)>*) capture_subject_context_ex;
    
    // [SeCaptureUnicodeStringStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b3c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60a290, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) capture_unicode_string_structures;
    
    // [SeChangeNotifyPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae80, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c948, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c950, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) change_notify_privilege;
    
    // [SeCheckAuditPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6146f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69a118, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2e48, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) check_audit_privilege;
    
    // [SeCheckPrivilegedObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53795c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x771398, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dda30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778dc4, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) check_privileged_object;
    
    // [SeCiCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302120, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d9a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d9e0, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) ci_callbacks;
    
    // [SeCiDebugOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a1dc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b54, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) ci_debug_options;
    
    // [SeCiPrivateApis]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25af30, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x5a70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5d40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5a90, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) ci_private_apis;
    
    // [SeCiStateElementCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce590, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546e4, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6f0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546e4, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) ci_state_element_count;
    
    // [SeCiStateElements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce5f8, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54770, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f860, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54770, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) ci_state_elements;
    
    // [SeClearLearningModeObjectInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeeff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cc470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2064e0, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) clear_learning_mode_object_information;
    
    // [SeCloseObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695b54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91cbe0, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) close_object_audit_alarm;
    
    // [SeCloseObjectAuditAlarmForNonObObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91cc50, 0x1fe000 bytes
    //
    _n60(sdk::function<void(nt::unicode_view*, void*, struct sec::subject_context_t*, uint8_t)>*) close_object_audit_alarm_for_non_ob_object;
    
    // [SeCodeIntegrityInitializePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a5fe4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6d3b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb58e34, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6cb88, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) code_integrity_initialize_policy;
    
    // [SeCompareSigningLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x762250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea5a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7694f0, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) compare_signing_levels;
    
    // [SeCompatFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b0e0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53794, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9f4, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) compat_flags;
    
    // [SeComputeAutoInheritByObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd7dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f8c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ce20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310100, 0x1fe000 bytes
    //
    _n64(sdk::function<uint32_t(void*, void*, void*)>*) compute_auto_inherit_by_object_type;
    
    // [SeComputeAutoInheritByObjectTypeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf27c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d6f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d50d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x257fd0, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) compute_auto_inherit_by_object_type_ex;
    
    // [SeComputeCreatorDeniedRights]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xef330, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263f30, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) compute_creator_denied_rights;
    
    // [SeComputeQuotaInformationSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x427d00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6beec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74f850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613e40, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) compute_quota_information_size;
    
    // [SeConstrainedImpersonationCapabilityGroupSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302220, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1daf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37568, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db08, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) constrained_impersonation_capability_group_sid;
    
    // [SeConstrainedImpersonationCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302210, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1daf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37560, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db00, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) constrained_impersonation_capability_sid;
    
    // [SeConvertSecurityDescriptorToStringSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234fc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1f10, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) convert_security_descriptor_to_string_security_descriptor;
    
    // [SeConvertStringSecurityDescriptorToSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9f74, 0x32828 bytes
    // ntoskrnl.exe .text:0x399b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39afd0, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) convert_string_security_descriptor_to_security_descriptor;
    
    // [SeCopyClientToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3c6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3cd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1e88, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) copy_client_token;
    
    // [SeCreateAccessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4acb4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be3b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613330, 0x1fe000 bytes
    //
    _n73(sdk::function<int32_t(struct nt::access_state_t*, struct kaux::access_data_t*, uint32_t, struct nt::generic_mapping_t*)>*) create_access_state;
    
    // [SeCreateAccessStateEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613380, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) create_access_state_ex;
    
    // [SeCreateClientSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b3610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f35f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x609c40, 0x1fe000 bytes
    //
    _n75(sdk::function<int32_t(struct nt::kthread_t*, struct sec::quality_of_service_t*, uint8_t, struct sec::client_context_t*)>*) create_client_security;
    
    // [SeCreateClientSecurityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af970, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b3800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x609e30, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) create_client_security_ex;
    
    // [SeCreateClientSecurityFromSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d1bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df6f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7e60, 0x1fe000 bytes
    //
    _n77(sdk::function<int32_t(struct sec::subject_context_t*, struct sec::quality_of_service_t*, uint8_t, struct sec::client_context_t*)>*) create_client_security_from_subject_context;
    
    // [SeCreateClientSecurityFromSubjectContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a314, 0x32828 bytes
    // ntoskrnl.exe .text:0x5910f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590f70, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) create_client_security_from_subject_context_ex;
    
    // [SeCreateGlobalPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74adc8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53630, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c888, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) create_global_privilege;
    
    // [SeCreatePagefilePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae60, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c930, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) create_pagefile_privilege;
    
    // [SeCreatePermanentPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ace8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53568, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7e8, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) create_permanent_privilege;
    
    // [SeCreateSymbolicLinkPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b020, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb18, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53890, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb10, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) create_symbolic_link_privilege;
    
    // [SeCreateTokenPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac88, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53548, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7a8, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) create_token_privilege;
    
    // [SeCreatorGroupServerSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54310, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54290, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) creator_group_server_sid;
    
    // [SeCreatorGroupSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54298, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) creator_group_sid;
    
    // [SeCreatorOwnerServerSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a098, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54308, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70998, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54278, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) creator_owner_server_sid;
    
    // [SeCreatorOwnerSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a050, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70af8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543d0, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) creator_owner_sid;
    
    // [SeDeassignPrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fd8d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76752c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6600f4, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) deassign_primary_token;
    
    // [SeDeassignSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48daf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65b470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cec00, 0x1fe000 bytes
    //
    _n89(sdk::function<int32_t(void**)>*) deassign_security;
    
    // [SeDebugPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab48, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c698, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53438, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c698, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) debug_privilege;
    
    // [SeDefaultAccountAliasSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302230, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dad8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db60, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) default_account_alias_sid;
    
    // [SeDefaultCapeSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74adb8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53678, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8d0, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) default_cape_sd;
    
    // [SeDefaultObjectMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bef40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74fba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613ec0, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) default_object_method;
    
    // [SeDefaultRecoveryCapeSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74adb0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53688, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8d8, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) default_recovery_cape_sd;
    
    // [SeDelegateSessionUserImpersonatePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af60, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca28, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca48, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) delegate_session_user_impersonate_privilege;
    
    // [SeDeleteAccessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aa0b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f7470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x601d10, 0x1fe000 bytes
    //
    _n96(sdk::function<void(struct nt::access_state_t*)>*) delete_access_state;
    
    // [SeDeleteObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695bc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e3b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91cc80, 0x1fe000 bytes
    //
    _n97(sdk::function<void(void*, void*)>*) delete_object_audit_alarm;
    
    // [SeDeleteObjectAuditAlarmWithTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695bc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e3d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91cca0, 0x1fe000 bytes
    //
    _n98(sdk::function<void(void*, void*, struct nt::guid_t*)>*) delete_object_audit_alarm_with_transaction;
    
    // [SeDialupSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae68, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c930, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c938, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) dialup_sid;
    
    // [SeEnableDelegationPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae88, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c958, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53718, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c970, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) enable_delegation_privilege;
    
    // [SeEtwEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a528, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca21c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb31c, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) etw_enable_callback;
    
    // [SeEtwWriteKMCveEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227664, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a44e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ea180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4360, 0x1fe000 bytes
    //
    _o02(sdk::function<int32_t(const nt::unicode_view*, const nt::unicode_view*)>*) etw_write_km_cve_event;
    
    // [SeExamineGlobalSacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x699c4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x921898, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892cba, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920168, 0x1fe000 bytes
    //
    _o03(sdk::function<void(nt::unicode_view*, struct nt::acl_t*, void*, uint32_t, uint8_t, uint8_t*, uint8_t*)>*) examine_global_sacl;
    
    // [SeExamineSacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695c28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91cd10, 0x1fe000 bytes
    //
    _o04(sdk::function<void(struct nt::acl_t*, struct nt::acl_t*, void*, uint32_t, uint8_t, uint8_t*, uint8_t*)>*) examine_sacl;
    
    // [SeExchangePrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696f7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b528, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e5d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2aa8, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) exchange_primary_token;
    
    // [SeExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab98, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53458, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b8, 0x1fe000 bytes
    //
    _o06(struct se::exports_t**) exports;
    
    // [SeFastTraverseCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219738, 0x32828 bytes
    // ntoskrnl.exe .text:0x58fdc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fc40, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) fast_traverse_check;
    
    // [SeFileSystemNotifyRoutinesExHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a338, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b368, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51360, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b368, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) file_system_notify_routines_ex_head;
    
    // [SeFileSystemNotifyRoutinesHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a2c0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd512c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2f8, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) file_system_notify_routines_head;
    
    // [SeFilterToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a85f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786ac0, 0x1fe000 bytes
    //
    _o10(sdk::function<int32_t(void*, uint32_t, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct nt::token_groups_t*, void**)>*) filter_token;
    
    // [SeFreeCapturedObjectTypeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219810, 0x32828 bytes
    // ntoskrnl.exe .text:0x58fe88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fd08, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) free_captured_object_type_list;
    
    // [SeFreePrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x740d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _o12(sdk::function<void(struct nt::privilege_set_t*)>*) free_privileges;
    
    // [SeGetCachedSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4892b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce120, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) get_cached_signing_level;
    
    // [SeGetImageRequiredSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x493ecc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66bc08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x776100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de6d8, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) get_image_required_signing_level;
    
    // [SeGetLinkedToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6971ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91f8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e180, 0x1fe000 bytes
    //
    _o15(sdk::function<int32_t(enum win::token_elevation_type_t, void*, void**)>*) get_linked_token;
    
    // [SeGetLogonSessionToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91f9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e2a0, 0x1fe000 bytes
    //
    _o16(sdk::function<int32_t(void*, char, void**)>*) get_logon_session_token;
    
    // [SeGetTokenControlInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6973a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91fb04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e3d4, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) get_token_control_information;
    
    // [SeGetTokenDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47f108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e6ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a6aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c198c, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) get_token_device_map;
    
    // [SeGetTrustLabelAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x217cc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x292250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2049c0, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) get_trust_label_ace;
    
    // [SeHighMandatorySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3021f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1da80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37548, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dae0, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) high_mandatory_sid;
    
    // [SeIUserSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad10, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c808, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c828, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) i_user_sid;
    
    // [SeILSigningPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PROTDATA:0x3c7000, 0x32828 bytes
    // ntoskrnl.exe PROTDATA:0x14d000, 0x1fe000 bytes
    // ntoskrnl.exe PROTDATA:0x15d000, 0x1fd000 bytes
    // ntoskrnl.exe PROTDATA:0x14d000, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) il_signing_policy;
    
    // [SeILSigningPolicyPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5b20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0ee78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc092e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0eeb8, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) il_signing_policy_ptr;
    
    // [SeImpersonateClient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696e38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91f670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91df40, 0x1fe000 bytes
    //
    _o24(sdk::function<void(struct sec::client_context_t*, struct nt::kthread_t*)>*) impersonate_client;
    
    // [SeImpersonateClientEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484bf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67cbc0, 0x1fe000 bytes
    //
    _o25(sdk::function<int32_t(struct sec::client_context_t*, struct nt::kthread_t*)>*) impersonate_client_ex;
    
    // [SeImpersonatePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af58, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca40, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) impersonate_privilege;
    
    // [SeIncreaseBasePriorityPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aba8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53490, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6e0, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) increase_base_priority_privilege;
    
    // [SeIncreaseQuotaPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ace0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53518, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7d8, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) increase_quota_privilege;
    
    // [SeIncreaseWorkingSetPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af38, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca18, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) increase_working_set_privilege;
    
    // [SeInitServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6912f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bc9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917940, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) init_server_silo;
    
    // [SeInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79b488, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5f160, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2dc70, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa60c88, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) init_system;
    
    // [SeInteractiveSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a048, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70af0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543e8, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) interactive_sid;
    
    // [SeIsAppContainerOrIdentifyLevelContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x602c58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ffcd0, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) is_app_container_or_identify_level_context;
    
    // [SeIsParentOfChildAppContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49a484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9180a0, 0x1fe000 bytes
    //
    _o34(sdk::function<uint8_t(uint32_t, uint32_t, uint32_t)>*) is_parent_of_child_app_container;
    
    // [SeIsSystemContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a414, 0x32828 bytes
    // ntoskrnl.exe .text:0x5911fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a402c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59107c, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) is_system_context;
    
    // [SeIsTokenAssignableToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6534dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77fbb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c779c, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) is_token_assignable_to_process;
    
    // [SeLoadDriverPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac08, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c728, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c730, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) load_driver_privilege;
    
    // [SeLocalServicePublicDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad18, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c830, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) local_service_public_dacl;
    
    // [SeLocalServicePublicSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b000, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53888, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb08, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) local_service_public_sd;
    
    // [SeLocalServiceSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac28, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c760, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53500, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c760, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) local_service_sid;
    
    // [SeLocalSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a1c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70ad0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543d8, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) local_sid;
    
    // [SeLocalSystemSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a1d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70ae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543e0, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) local_system_sid;
    
    // [SeLocateProcessImageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b5d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64fa70, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) locate_process_image_name;
    
    // [SeLockMemoryPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74abe8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c718, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c718, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) lock_memory_privilege;
    
    // [SeLockSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2db0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d28c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x699d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x628d00, 0x1fe000 bytes
    //
    _o45(sdk::function<void(struct sec::subject_context_t*)>*) lock_subject_context;
    
    // [SeLogAccessFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe1280, 0x32828 bytes
    // ntoskrnl.exe .text:0x259858, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e244, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a518, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) log_access_failure;
    
    // [SeLowMandatorySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302240, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1db80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37518, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dab0, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) low_mandatory_sid;
    
    // [SeLuidToIndexMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a070, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b078, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51068, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b078, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) luid_to_index_mapping;
    
    // [SeLuidToIndexMappingData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b6b0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d128, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d128, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) luid_to_index_mapping_data;
    
    // [SeMakeAnonymousLogonToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79c27c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ffc0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb317dc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61ae8, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) make_anonymous_logon_token;
    
    // [SeMakeAnonymousLogonTokenNoEveryone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79c048, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5fd34, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3154c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6185c, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) make_anonymous_logon_token_no_everyone;
    
    // [SeMakeSystemToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79bb00, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5f784, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb31a8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa612ac, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) make_system_token;
    
    // [SeManageVolumePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae90, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c960, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53710, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c968, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) manage_volume_privilege;
    
    // [SeMarkLogonSessionForTerminationNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a06ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6795c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec930, 0x1fe000 bytes
    //
    _o54(sdk::function<int32_t(struct nt::luid_t*)>*) mark_logon_session_for_termination_notification;
    
    // [SeMarkLogonSessionForTerminationNotificationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a06b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6795e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec950, 0x1fe000 bytes
    //
    _o55(sdk::function<int32_t(struct nt::luid_t*, struct nt::ejob_t*)>*) mark_logon_session_for_termination_notification_ex;
    
    // [SeMaximumAuditMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219828, 0x32828 bytes
    // ntoskrnl.exe .text:0x58fea4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fd24, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) maximum_audit_mask;
    
    // [SeMaximumAuditMaskFromGlobalSacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x699d4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9219b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c61f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x920288, 0x1fe000 bytes
    //
    _o57(sdk::function<void(nt::unicode_view*, uint32_t, void*, uint32_t*)>*) maximum_audit_mask_from_global_sacl;
    
    // [SeMediumDaclSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad08, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c840, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53680, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c808, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) medium_dacl_sd;
    
    // [SeMediumMandatorySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3021e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1da78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37550, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dae8, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) medium_mandatory_sid;
    
    // [SeMediumSacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af48, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca18, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca30, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) medium_sacl;
    
    // [SeMinTcbLowering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd9b8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70dc4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8292c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa700b4, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) min_tcb_lowering;
    
    // [SeMsMinTCBList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f08c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x985510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa69c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x983df0, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) ms_min_tcb_list;
    
    // [SeMsMinTestTCBList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f05e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x984e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa695e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x983770, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) ms_min_test_tcb_list;
    
    // [SeNetworkServiceSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac80, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53540, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7a0, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) network_service_sid;
    
    // [SeNetworkSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54270, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) network_sid;
    
    // [SeNtAuthoritySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af40, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca08, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca20, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) nt_authority_sid;
    
    // [SeNullDaclSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b010, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb08, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53880, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2caf8, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) null_dacl_sd;
    
    // [SeNullSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac78, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c780, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c780, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) null_sid;
    
    // [SeObjectCreateSaclAccessBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4849fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65ffc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cecb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3954, 0x1fe000 bytes
    //
    _o69(sdk::function<uint32_t(void*)>*) object_create_sacl_access_bits;
    
    // [SeObjectReferenceAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c04ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697d44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61546c, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) object_reference_audit_alarm;
    
    // [SeOpenObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48db18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62e5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb700, 0x1fe000 bytes
    //
    _o71(sdk::function<void(nt::unicode_view*, void*, nt::unicode_view*, void*, struct nt::access_state_t*, uint8_t, uint8_t, char, uint8_t*)>*) open_object_audit_alarm;
    
    // [SeOpenObjectAuditAlarmForNonObObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56fe98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b42a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86cf10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bbe70, 0x1fe000 bytes
    //
    _o72(sdk::function<void(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, struct sec::subject_context_t*, uint32_t, uint32_t, struct nt::privilege_set_t*, uint8_t, uint8_t*)>*) open_object_audit_alarm_for_non_ob_object;
    
    // [SeOpenObjectAuditAlarmWithTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8da0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cb8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x621d30, 0x1fe000 bytes
    //
    _o73(sdk::function<void(nt::unicode_view*, void*, nt::unicode_view*, void*, struct nt::access_state_t*, uint8_t, uint8_t, char, struct nt::guid_t*, uint8_t*)>*) open_object_audit_alarm_with_transaction;
    
    // [SeOpenObjectForDeleteAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695fbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91d0a0, 0x1fe000 bytes
    //
    _o74(sdk::function<void(nt::unicode_view*, void*, nt::unicode_view*, void*, struct nt::access_state_t*, uint8_t, uint8_t, char, uint8_t*)>*) open_object_for_delete_audit_alarm;
    
    // [SeOpenObjectForDeleteAuditAlarmWithTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696014, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91d100, 0x1fe000 bytes
    //
    _o75(sdk::function<void(nt::unicode_view*, void*, nt::unicode_view*, void*, struct nt::access_state_t*, uint8_t, uint8_t, char, struct nt::guid_t*, uint8_t*)>*) open_object_for_delete_audit_alarm_with_transaction;
    
    // [SeOperationAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6930f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91b7ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bf01c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91a0bc, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) operation_audit_alarm;
    
    // [SeOwnerRightsSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc542a8, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) owner_rights_sid;
    
    // [SePackagePrefixSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a080, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70978, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54260, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) package_prefix_sid;
    
    // [SePrincipalSelfSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a0b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54318, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc709b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54288, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) principal_self_sid;
    
    // [SePrivilegeCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c7080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d8cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c7a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e9ab0, 0x1fe000 bytes
    //
    _o80(sdk::function<uint8_t(struct nt::privilege_set_t*, struct sec::subject_context_t*, char)>*) privilege_check;
    
    // [SePrivilegeObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c66f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x699e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e30a0, 0x1fe000 bytes
    //
    _o81(sdk::function<void(void*, struct sec::subject_context_t*, uint32_t, struct nt::privilege_set_t*, uint8_t, char)>*) privilege_object_audit_alarm;
    
    // [SePrivilegePolicyCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1860, 0x32828 bytes
    // ntoskrnl.exe .text:0x217a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x292a2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204a90, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) privilege_policy_check;
    
    // [SePrivilegedServiceAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6f6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61486c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69b124, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e50d0, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) privileged_service_audit_alarm;
    
    // [SeProcTrustLiteWinSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302208, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1da98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37580, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db28, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) proc_trust_lite_win_sid;
    
    // [SeProcTrustLiteWinTcbSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302238, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1da90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37588, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dad0, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) proc_trust_lite_win_tcb_sid;
    
    // [SeProcTrustNoneSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3021f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dae8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37570, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db30, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) proc_trust_none_sid;
    
    // [SeProcTrustWinSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dab8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37530, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dac8, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) proc_trust_win_sid;
    
    // [SeProcTrustWinTcbSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3021e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dab0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37538, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1daf0, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) proc_trust_win_tcb_sid;
    
    // [SeProfileSingleProcessPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74abd0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c708, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c710, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) profile_single_process_privilege;
    
    // [SeProtectedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec220, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee10, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) protected_mapping;
    
    // [SePublicDefaultDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad38, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c830, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c818, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) public_default_dacl;
    
    // [SePublicDefaultSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae70, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c938, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c940, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) public_default_sd;
    
    // [SePublicDefaultUnrestrictedDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac10, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c758, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c750, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) public_default_unrestricted_dacl;
    
    // [SePublicDefaultUnrestrictedSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac38, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53468, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6e8, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) public_default_unrestricted_sd;
    
    // [SePublicOpenDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acf8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c828, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c810, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) public_open_dacl;
    
    // [SePublicOpenSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aff0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53870, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2caf0, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) public_open_sd;
    
    // [SePublicOpenUnrestrictedDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acc8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53578, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7e0, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) public_open_unrestricted_dacl;
    
    // [SePublicOpenUnrestrictedSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aff8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2caf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53878, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cae8, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) public_open_unrestricted_sd;
    
    // [SeQueryAuthenticationIdToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4955f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ca1a0, 0x1fe000 bytes
    //
    _o99(sdk::function<int32_t(void*, struct nt::luid_t*)>*) query_authentication_id_token;
    
    // [SeQueryHSTIResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571a3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86468c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75ddb0, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) query_hsti_results;
    
    // [SeQueryInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d5ea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d8fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ebc00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e9db0, 0x1fe000 bytes
    //
    _p01(sdk::function<int32_t(void*, enum nt::token_information_class_t, void**)>*) query_information_token;
    
    // [SeQueryMandatoryLabel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ebfac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6221e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d857c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d6a8, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) query_mandatory_label;
    
    // [SeQueryMandatoryPolicyToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9a74, 0x32828 bytes
    // ntoskrnl.exe .text:0x246e58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9f1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d8738, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) query_mandatory_policy_token;
    
    // [SeQuerySecureBootPlatformManifest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6986dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f840, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) query_secure_boot_platform_manifest;
    
    // [SeQuerySecureBootPolicyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571a94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b69e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be5c0, 0x1fe000 bytes
    //
    _p05(sdk::function<int32_t(const nt::unicode_view*, const nt::unicode_view*, uint32_t, void*, uint32_t, uint32_t*)>*) query_secure_boot_policy_value;
    
    // [SeQuerySecurityAccessMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4787ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x645ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a61f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba288, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) query_security_access_mask;
    
    // [SeQuerySecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dde20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe2e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aab90, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) query_security_attributes_token;
    
    // [SeQuerySecurityAttributesTokenAccessInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2194f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x261fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f1180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312580, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) query_security_attributes_token_access_information;
    
    // [SeQuerySecurityDescriptorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ac240, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c39b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dbe20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x619de0, 0x1fe000 bytes
    //
    _p09(sdk::function<int32_t(uint32_t*, void*, uint32_t*, void**)>*) query_security_descriptor_info;
    
    // [SeQueryServerSiloToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e263c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6687b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70fb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dba30, 0x1fe000 bytes
    //
    _p10(sdk::function<int32_t(void*, struct nt::ejob_t**)>*) query_server_silo_token;
    
    // [SeQuerySessionIdToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480b7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ec5d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1ba0, 0x1fe000 bytes
    //
    _p11(sdk::function<int32_t(void*, uint32_t*)>*) query_session_id_token;
    
    // [SeQuerySessionIdTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43bd90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70fe60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5dd0, 0x1fe000 bytes
    //
    _p12(sdk::function<int32_t(void*, uint32_t*, uint8_t*)>*) query_session_id_token_ex;
    
    // [SeQuerySigningPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f38dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61bbe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7637e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e430, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) query_signing_policy;
    
    // [SeQuerySigningPolicyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f40ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765e08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e858, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) query_signing_policy_worker;
    
    // [SeQueryTokenTrustLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb8f34, 0x32828 bytes
    // ntoskrnl.exe .text:0x217f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d55d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204698, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) query_token_trust_link;
    
    // [SeQueryTokenTrustSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x268184, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37874c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319024, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) query_token_trust_sid;
    
    // [SeQueryTrustedPlatformModuleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a544, 0x32828 bytes
    // ntoskrnl.exe .text:0x591510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591390, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) query_trusted_platform_module_information;
    
    // [SeQueryUserSidToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x459de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a14c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cbcac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ac2c, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) query_user_sid_token;
    
    // [SeRegisterElamCertResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544ad0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7881ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x791f8c, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) register_elam_cert_resources;
    
    // [SeRegisterImageVerificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5714d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b60a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdc30, 0x1fe000 bytes
    //
    _p20(sdk::function<int32_t(enum se::image_type_t, enum se::image_verification_callback_type_t, sdk::function<void(void*, enum se::image_type_t, struct nt::bdcb_image_information_t*)>*, void*, void*, void**)>*) register_image_verification_callback;
    
    // [SeRegisterLogonSessionTerminatedRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697c08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c3740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ebd0, 0x1fe000 bytes
    //
    _p21(sdk::function<int32_t(sdk::function<int32_t(struct nt::luid_t*)>*)>*) register_logon_session_terminated_routine;
    
    // [SeRegisterLogonSessionTerminatedRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ecdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b2b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86b0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba6c0, 0x1fe000 bytes
    //
    _p22(sdk::function<int32_t(sdk::function<int32_t(struct nt::luid_t*, struct nt::ejob_t*, void*)>*, void*)>*) register_logon_session_terminated_routine_ex;
    
    // [SeRegisterObjectTypeMandatoryPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137f1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a3954, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a92d4, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) register_object_type_mandatory_policy;
    
    // [SeRelabelPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74abe0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c730, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c728, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) relabel_privilege;
    
    // [SeReleaseAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f71d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ffa38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674e80, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) release_acl;
    
    // [SeReleaseImageValidationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x486eb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x771de4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67d754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7797e4, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) release_image_validation_context;
    
    // [SeReleaseLuidAndAttributesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e9d98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x701a64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6701f0, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) release_luid_and_attributes_array;
    
    // [SeReleaseSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d3500, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2d90, 0x1fe000 bytes
    //
    _p28(sdk::function<void(void*, char, uint8_t)>*) release_security_descriptor;
    
    // [SeReleaseSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b6f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f91e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ecca8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6461c4, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) release_sid;
    
    // [SeReleaseSidAndAttributesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e9d98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x701a64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6701f0, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) release_sid_and_attributes_array;
    
    // [SeReleaseSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d10d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dadc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69fba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ebbc0, 0x1fe000 bytes
    //
    _p31(sdk::function<void(struct sec::subject_context_t*)>*) release_subject_context;
    
    // [SeRemoteShutdownPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af50, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca38, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) remote_shutdown_privilege;
    
    // [SeReportSecurityEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219f20, 0x32828 bytes
    // ntoskrnl.exe .text:0x590cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590b50, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) report_security_event;
    
    // [SeReportSecurityEventWithSubCategory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x808c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d3a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3531d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7680, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) report_security_event_with_sub_category;
    
    // [SeRestorePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab90, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53488, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6f0, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) restore_privilege;
    
    // [SeRestrictedSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74abc0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c738, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c738, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) restricted_sid;
    
    // [SeRmInitPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a700, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa64d1c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f93c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa643fc, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) rm_init_phase1;
    
    // [SeRmReferenceFindCapName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b190, 0x32828 bytes
    // ntoskrnl.exe .text:0x591d04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591b84, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) rm_reference_find_cap_name;
    
    // [SeSecureBootPolicyBlobHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25d1b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x97f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xac60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x97d0, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) secure_boot_policy_blob_header;
    
    // [SeSecureBootPolicyBlobHeaderSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2865b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x39fd4, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x46188, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a314, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) secure_boot_policy_blob_header_size;
    
    // [SeSecureBootQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f9f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6724ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5c2c, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) secure_boot_query_information;
    
    // [SeSecureBootRegisterPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a60c8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6d4ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb58ed4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6cc7c, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) secure_boot_register_policy;
    
    // [SeSecurityAttributePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe05b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259ca0, 0x1fe000 bytes
    //
    _p43(sdk::function<uint8_t(void*, const nt::unicode_view*)>*) security_attribute_present;
    
    // [SeSecurityDescriptorChangedAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482e0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b28ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c5c60, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) security_descriptor_changed_audit_alarm;
    
    // [SeSecurityPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74abc8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c710, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c708, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) security_privilege;
    
    // [SeServiceSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad70, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53660, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8a8, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) service_sid;
    
    // [SeSessionImpersonationCapabilityGroupSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302218, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dac8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db18, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) session_impersonation_capability_group_sid;
    
    // [SeSessionImpersonationCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302228, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dad0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc375c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1db10, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) session_impersonation_capability_sid;
    
    // [SeSetAccessStateGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691c1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a8f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bdb80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ffbd0, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) set_access_state_generic_mapping;
    
    // [SeSetAuditParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc140, 0x32828 bytes
    // ntoskrnl.exe .text:0x250800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fe7d0, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) set_audit_parameter;
    
    // [SeSetLearningModeObjectInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xef520, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a3288, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2068b0, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) set_learning_mode_object_information;
    
    // [SeSetMandatoryPolicyToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec15c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66a6e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ff814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd454, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) set_mandatory_policy_token;
    
    // [SeSetPrivateNameSpaceToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6918f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9198a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bd1c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9180b8, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) set_private_name_space_token;
    
    // [SeSetSecurityAccessMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6167a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b2754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c5bd8, 0x1fe000 bytes
    //
    _p54(sdk::function<void(uint32_t, uint32_t*)>*) set_security_access_mask;
    
    // [SeSetSecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6919a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x918170, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) set_security_attributes_token;
    
    // [SeSetSecurityAttributesTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a5dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5915b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a43f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x591430, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) set_security_attributes_token_ex;
    
    // [SeSetSecurityDescriptorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x427d84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bf530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74e9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6144b0, 0x1fe000 bytes
    //
    _p57(sdk::function<int32_t(void*, uint32_t*, void*, void**, enum nt::pool_type_t, struct nt::generic_mapping_t*)>*) set_security_descriptor_info;
    
    // [SeSetSecurityDescriptorInfoEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698e38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66ba30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de4c0, 0x1fe000 bytes
    //
    _p58(sdk::function<int32_t(void*, uint32_t*, void*, void**, uint32_t, enum nt::pool_type_t, struct nt::generic_mapping_t*)>*) set_security_descriptor_info_ex;
    
    // [SeSetSessionIdToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec04c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670c88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d73cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e43d8, 0x1fe000 bytes
    //
    _p59(sdk::function<int32_t(void*, uint32_t)>*) set_session_id_token;
    
    // [SeSetTokenTrustLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfa14, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f168, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36bff4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f668, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) set_token_trust_link;
    
    // [SeSetVirtualizationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41ec70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67511c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x675618, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e828c, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) set_virtualization_token;
    
    // [SeShouldCheckForAccessRightsFromParent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47161c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e1940, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) should_check_for_access_rights_from_parent;
    
    // [SeShutdownPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac58, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c750, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c758, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) shutdown_privilege;
    
    // [SeSinglePrivilegeCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c5b54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c9c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2ee0, 0x1fe000 bytes
    //
    _p64(sdk::function<uint8_t(struct nt::luid_t, char)>*) single_privilege_check;
    
    // [SeSrpAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2198e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x58ff70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3336c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fdf0, 0x1fe000 bytes
    //
    _p65(sdk::function<uint8_t(struct sec::subject_context_t*, uint8_t, struct se::access_request_t*, struct se::access_reply_t*, struct se::audit_info_t*, char)>*) srp_access_check;
    
    // [SeSubProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412ec8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3404, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fd748, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f6c10, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) sub_process_token;
    
    // [SeSubsystemName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2583e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2030, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x21e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1110, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) subsystem_name;
    
    // [SeSyncAgentPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b118, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53948, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbe8, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) sync_agent_privilege;
    
    // [SeSystemAuthenticationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec068, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63df8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec28, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) system_authentication_id;
    
    // [SeSystemDefaultDacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad00, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c838, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c820, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) system_default_dacl;
    
    // [SeSystemDefaultSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b008, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2caf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53868, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb00, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) system_default_sd;
    
    // [SeSystemEnvironmentPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab68, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53470, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6c8, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) system_environment_privilege;
    
    // [SeSystemMandatorySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3021d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1daa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1daf8, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) system_mandatory_sid;
    
    // [SeSystemProfilePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac90, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53528, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7b0, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) system_profile_privilege;
    
    // [SeSystemTokenSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec3a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9806d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97efb0, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) system_token_source;
    
    // [SeSystemtimePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad28, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53588, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7f8, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) systemtime_privilege;
    
    // [SeTakeOwnershipPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74abf8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c740, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c740, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) take_ownership_privilege;
    
    // [SeTcbPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab28, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c690, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53430, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c690, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) tcb_privilege;
    
    // [SeTimeZonePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae98, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c950, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c960, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) time_zone_privilege;
    
    // [SeTokenCanImpersonate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c33d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b2bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a9b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6091f0, 0x1fe000 bytes
    //
    _p80(sdk::function<int32_t(void*, void*, enum sec::impersonation_level_t, uint8_t*)>*) token_can_impersonate;
    
    // [SeTokenDefaultDaclChangedAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec32c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672618, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7db2d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5d58, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) token_default_dacl_changed_audit_alarm;
    
    // [SeTokenDoesNotTrackSessionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0ec, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0f4, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) token_does_not_track_session_object;
    
    // [SeTokenFromAccessInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf9a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26d050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31e990, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) token_from_access_information;
    
    // [SeTokenImpersonationLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f3f0, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) token_impersonation_level;
    
    // [SeTokenIsAdmin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e80c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b730, 0x1fe000 bytes
    //
    _p85(sdk::function<uint8_t(void*)>*) token_is_admin;
    
    // [SeTokenIsElevated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4887cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ebb90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0cf8, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) token_is_elevated;
    
    // [SeTokenIsRestricted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2880, 0x32828 bytes
    // ntoskrnl.exe .text:0x35aad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3343f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c12c0, 0x1fe000 bytes
    //
    _p87(sdk::function<uint8_t(void*)>*) token_is_restricted;
    
    // [SeTokenIsWriteRestricted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2890, 0x32828 bytes
    // ntoskrnl.exe .text:0x35aaf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3348e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c12e0, 0x1fe000 bytes
    //
    _p88(sdk::function<uint8_t(void*)>*) token_is_write_restricted;
    
    // [SeTokenLeakTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a00c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b010, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51004, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b010, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) token_leak_tracking;
    
    // [SeTokenObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a030, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b030, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b030, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) token_object_type;
    
    // [SeTokenType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4955e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6675a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80ba20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6daad0, 0x1fe000 bytes
    //
    _p91(sdk::function<enum nt::token_type_t(void*)>*) token_type;
    
    // [SeTrustedCredManAccessPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aea0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c968, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53708, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c958, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) trusted_cred_man_access_privilege;
    
    // [SeTrustedInstallerSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a070, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70970, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543f0, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) trusted_installer_sid;
    
    // [SeUndockPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b018, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53898, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb18, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) undock_privilege;
    
    // [SeUnlockSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d2920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x699d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x628d60, 0x1fe000 bytes
    //
    _p95(sdk::function<void(struct sec::subject_context_t*)>*) unlock_subject_context;
    
    // [SeUnregisterImageVerificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6911bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bc8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917830, 0x1fe000 bytes
    //
    _p96(sdk::function<void(void*)>*) unregister_image_verification_callback;
    
    // [SeUnregisterLogonSessionTerminatedRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697c9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9203a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c37e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ec70, 0x1fe000 bytes
    //
    _p97(sdk::function<int32_t(sdk::function<int32_t(struct nt::luid_t*)>*)>*) unregister_logon_session_terminated_routine;
    
    // [SeUnregisterLogonSessionTerminatedRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697d64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c38b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ed40, 0x1fe000 bytes
    //
    _p98(sdk::function<int32_t(sdk::function<int32_t(struct nt::luid_t*, struct nt::ejob_t*, void*)>*, void*)>*) unregister_logon_session_terminated_routine_ex;
    
    // [SeUnsolicitedInputPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b110, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53940, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbe0, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) unsolicited_input_privilege;
    
    // [SeUntrustedMandatorySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3021d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1da70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37558, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dab8, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) untrusted_mandatory_sid;
    
    // [SeUserModeDriversSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a078, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70988, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54268, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) user_mode_drivers_sid;
    
    // [SeValidSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4318cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a4300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1710, 0x1fe000 bytes
    //
    _q02(sdk::function<uint8_t(uint32_t, void*)>*) valid_security_descriptor;
    
    // [SeValidateImageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x422ea4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655d28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x696314, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ca3e8, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) validate_image_data;
    
    // [SeValidateImageHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x486c44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67bd1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67cfc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c9dd4, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) validate_image_header;
    
    // [SeValidateSecurityQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af5f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6edb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x649750, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) validate_security_qos;
    
    // [SeWorldSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a058, 0x32828 bytes
    // ntoskrnl.exe .data:0xc542b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70ad8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc543b8, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) world_sid;
    
    // [SeSddlSecurityDescriptorFromSDDL]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ab8c, 0x1d08 bytes
    // pci.sys PAGE:0x6c1e4, 0x1cf0 bytes
    // pci.sys PAGE:0x754b4, 0x1cf0 bytes
    // pci.sys PAGE:0x6a144, 0x1cf0 bytes
    //
    _q07(sdk::function<int32_t(const nt::unicode_view*, uint32_t, void**)>*) sddl_security_descriptor_from_sddl;
    
    // [SeUtilSecurityInfoFromSecurityDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3aac4, 0x1d08 bytes
    // pci.sys PAGE:0x6d25c, 0x1cf0 bytes
    // pci.sys PAGE:0x7651c, 0x1cf0 bytes
    // pci.sys PAGE:0x6b1bc, 0x1cf0 bytes
    //
    _q08(sdk::function<int32_t(void*, uint8_t*, uint32_t*)>*) util_security_info_from_security_descriptor;
    
    // [SeCodeIntegrityCacheExt]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0x109c, 0x8dc0 bytes
    //
    _q09(sdk::unknown_ptr) code_integrity_cache_ext;
};
#include "magic/api.end.hpp"
