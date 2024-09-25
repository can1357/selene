#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace si
{
    // [SiGetFirmwareBootDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x53244c, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) get_firmware_boot_device_name;
    
    // [SiGetFirmwareBootDeviceNameFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x53281c, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) get_firmware_boot_device_name_from_registry;
    
    // [SiQuerySystemPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x52b378, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) query_system_partition_information;
    
    // [SiBootEntryGetNtFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97084c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96f12c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) boot_entry_get_nt_file_path;
    
    // [SiFindSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x970470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ed50, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) find_system_partition;
    
    // [SiGetBootDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d514, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3184, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1744, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) get_boot_device_name;
    
    // [SiGetBootDeviceNameFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d6c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b33c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d18f8, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) get_boot_device_name_from_registry;
    
    // [SiGetEfiBootEntryById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9709b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa509cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96f298, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) get_efi_boot_entry_by_id;
    
    // [SiGetFirmwareSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b30a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1620, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) get_firmware_system_partition;
    
    // [SiIsValidWindowsBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9711d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5125c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96fab0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) is_valid_windows_boot_entry;
    
    // [SiOpenDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d9e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b386c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1c14, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) open_device;
    
    // [SiQueryProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9706f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96efd0, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) query_property;
    
    // [SiQuerySystemInformationString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x769544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770fb4, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) query_system_information_string;
    
    // [SiDisambiguateSystemDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8e24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97090c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96f1ec, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) disambiguate_system_device;
    
    // [SiGetBiosSystemDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9500, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa512d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765c70, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) get_bios_system_disk;
    
    // [SiGetBiosSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75df2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76597c, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) get_bios_system_partition;
    
    // [SiGetDeviceNumberInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8abc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x970578, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50488, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ee58, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) get_device_number_information;
    
    // [SiGetDiskPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5325b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b37d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1b80, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) get_disk_partition_information;
    
    // [SiGetDriveLayoutInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8be4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765ab4, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) get_drive_layout_information;
    
    // [SiGetEfiSystemDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8ec8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9709d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa509ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96f2b8, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) get_efi_system_device;
    
    // [SiGetEspFromFirmware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9224, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x970db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96f690, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) get_esp_from_firmware;
    
    // [SiGetRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5328ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d744, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1974, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) get_registry_value;
    
    // [SiGetSystemDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x532308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c86c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0608, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) get_system_device_name;
    
    // [SiGetSystemDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765ba0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) get_system_disk;
    
    // [SiGetSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x532400, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d15d0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) get_system_partition;
    
    // [SiIsValidDiskDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9458, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x971124, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa511b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96fa04, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) is_valid_disk_device;
    
    // [SiIsWinPEBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x532888, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d4a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d16d0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) is_win_pe_boot;
    
    // [SiIsWinPeHardDiskZeroUfdBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d975c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e3b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765e04, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) is_win_pe_hard_disk_zero_ufd_boot;
    
    // [SiIssueSynchronousIoctl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8d44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x970654, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50664, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ef34, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) issue_synchronous_ioctl;
    
    // [SiOpenArcNameObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d987c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e328, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765d78, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) open_arc_name_object;
    
    // [SiOpenRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x532a40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d8b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b35b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1ae8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) open_registry_key;
    
    // [SiTranslateSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5326a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65da7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1cac, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) translate_symbolic_link;
    
    // [SiValidateSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d1b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cc00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36002c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d300, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) validate_system_partition;
    
    // [SIPolicyAddToken]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x717d0, 0x13a78 bytes
    //
    _p3(sdk::unknown_ptr) policy_add_token;
    
    // [SIPolicyAppIdTaggingDefaultPolicy]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x6abbc, 0x13a78 bytes
    //
    _p4(sdk::unknown_ptr) policy_app_id_tagging_default_policy;
    
    // [SIPolicyAreCustomKernelSignersAllowed]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x70bf8, 0x13a78 bytes
    //
    _p5(sdk::unknown_ptr) policy_are_custom_kernel_signers_allowed;
    
    // [SIPolicyEnumerateKeySecureSettingSearchCompare]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x706d0, 0x13a78 bytes
    //
    _p6(sdk::unknown_ptr) policy_enumerate_key_secure_setting_search_compare;
    
    // [SiPolicyFailureAuditEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11e40, 0x8dc0 bytes
    //
    _p7(sdk::unknown_ptr) policy_failure_audit_ex;
    
    // [SiPolicyFailureEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11cb0, 0x8dc0 bytes
    //
    _p8(sdk::unknown_ptr) policy_failure_ex;
    
    // [SIPolicyFindScenarioAllowSigners]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x6b9d4, 0x13a78 bytes
    //
    _p9(sdk::unknown_ptr) policy_find_scenario_allow_signers;
    
    // [SIPolicyGetPolicyType]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x40360, 0x8dc0 bytes
    //
    _q0(sdk::unknown_ptr) policy_get_policy_type;
    
    // [SIPolicyInternalBooleanOr]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .text:0x7ba0, 0x13a78 bytes
    //
    _q1(sdk::unknown_ptr) policy_internal_boolean_or;
    
    // [SIPolicyInternalBooleanSecureSettingRollup]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x70224, 0x13a78 bytes
    //
    _q2(sdk::unknown_ptr) policy_internal_boolean_secure_setting_rollup;
    
    // [SIPolicyIsPolicyMustBeWindowsSigned]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x713c0, 0x13a78 bytes
    //
    _q3(sdk::unknown_ptr) policy_is_policy_must_be_windows_signed;
    
    // [SIPolicyIsSignedPolicyRequired]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x72f8c, 0x13a78 bytes
    //
    _q4(sdk::unknown_ptr) policy_is_signed_policy_required;
    
    // [SIPolicyNightsWatchEnabled]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x6ab38, 0x13a78 bytes
    //
    _q5(sdk::unknown_ptr) policy_nights_watch_enabled;
    
    // [SIPolicyProcessDbgSettingAndReprieve]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll PAGE:0x71acc, 0x13a78 bytes
    //
    _q6(sdk::unknown_ptr) policy_process_dbg_setting_and_reprieve;
    
    // [SiPolicyRevokeFailureAuditEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11f60, 0x8dc0 bytes
    //
    _q7(sdk::unknown_ptr) policy_revoke_failure_audit_ex;
    
    // [SiPolicyRevokeFailureEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11d60, 0x8dc0 bytes
    //
    _q8(sdk::unknown_ptr) policy_revoke_failure_ex;
    
    // [SiPolicySkuFailureAuditEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11c70, 0x8dc0 bytes
    //
    _q9(sdk::unknown_ptr) policy_sku_failure_audit_ex;
    
    // [SiPolicySkuFailureEx]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .rdata:0x11eb0, 0x8dc0 bytes
    //
    _r0(sdk::unknown_ptr) policy_sku_failure_ex;
    
    // [SIPolicyValidateImage]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x3f194, 0x8dc0 bytes
    //
    _r1(sdk::unknown_ptr) policy_validate_image;
    
    // [SIPolicyFilePathRulesPresent]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ci.dll .text:0x7c34, 0x13a78 bytes
    // ci.dll .text:0x7bb4, 0x13a78 bytes
    //
    _r2(sdk::unknown_ptr) policy_file_path_rules_present;
    
    // [SIPolicyAddPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x744f0, 0x13a78 bytes
    // ci.dll PAGE:0x741c0, 0x13a78 bytes
    // ci.dll PAGE:0x745fc, 0x13a78 bytes
    //
    _r3(sdk::unknown_ptr) policy_add_policy;
    
    // [SIPolicyAuditModeEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6bd6c, 0x13a78 bytes
    // ci.dll PAGE:0x6aaf4, 0x13a78 bytes
    // ci.dll PAGE:0x6bd78, 0x13a78 bytes
    //
    _r4(sdk::unknown_ptr) policy_audit_mode_enabled;
    
    // [SIPolicyBlockErrorCodePerPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x713ec, 0x13a78 bytes
    // ci.dll PAGE:0x7088c, 0x13a78 bytes
    // ci.dll PAGE:0x714bc, 0x13a78 bytes
    //
    _r5(sdk::unknown_ptr) policy_block_error_code_per_policy;
    
    // [SIPolicyBuildPath]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73654, 0x13a78 bytes
    // ci.dll PAGE:0x73184, 0x13a78 bytes
    // ci.dll PAGE:0x73760, 0x13a78 bytes
    //
    _r6(sdk::unknown_ptr) policy_build_path;
    
    // [SIPolicyCheckPolicyCustomizedSigned]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x72c18, 0x13a78 bytes
    // ci.dll PAGE:0x725b8, 0x13a78 bytes
    // ci.dll PAGE:0x72d24, 0x13a78 bytes
    //
    _r7(sdk::unknown_ptr) policy_check_policy_customized_signed;
    
    // [SIPolicyCompare]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x8428, 0x13a78 bytes
    // ci.dll .text:0x7cec, 0x13a78 bytes
    // ci.dll .text:0x83a8, 0x13a78 bytes
    //
    _r8(sdk::unknown_ptr) policy_compare;
    
    // [SIPolicyComparePersistentEntry]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73ba8, 0x13a78 bytes
    // ci.dll PAGE:0x737e0, 0x13a78 bytes
    // ci.dll PAGE:0x73cb4, 0x13a78 bytes
    //
    _r9(sdk::unknown_ptr) policy_compare_persistent_entry;
    
    // [SIPolicyConcatenateString]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6fafc, 0x13a78 bytes
    // ci.dll PAGE:0x6eae8, 0x13a78 bytes
    // ci.dll PAGE:0x6fbcc, 0x13a78 bytes
    //
    _s0(sdk::unknown_ptr) policy_concatenate_string;
    
    // [SIPolicyConvertFromDeprecatedSignerToSigner]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x8220, 0x13a78 bytes
    // ci.dll .text:0x7acc, 0x13a78 bytes
    // ci.dll .text:0x81a0, 0x13a78 bytes
    //
    _s1(sdk::unknown_ptr) policy_convert_from_deprecated_signer_to_signer;
    
    // [SIPolicyDeletePersistentVariable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73bdc, 0x13a78 bytes
    // ci.dll PAGE:0x73814, 0x13a78 bytes
    // ci.dll PAGE:0x73ce8, 0x13a78 bytes
    //
    _s2(sdk::unknown_ptr) policy_delete_persistent_variable;
    
    // [SIPolicyDuplicateUnicodeString]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x76380, 0x13a78 bytes
    // ci.dll PAGE:0x760b4, 0x13a78 bytes
    // ci.dll PAGE:0x7648c, 0x13a78 bytes
    //
    _s3(sdk::unknown_ptr) policy_duplicate_unicode_string;
    
    // [SIPolicyEnforceSupplementalPolicyOptions]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x84c0, 0x13a78 bytes
    // ci.dll .text:0x7d84, 0x13a78 bytes
    // ci.dll .text:0x8440, 0x13a78 bytes
    //
    _s4(sdk::unknown_ptr) policy_enforce_supplemental_policy_options;
    
    // [SiPolicyFailure]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dd30, 0x13a78 bytes
    // ci.dll .rdata:0x263c8, 0x13a78 bytes
    // ci.dll .rdata:0x2dd30, 0x13a78 bytes
    //
    _s5(sdk::unknown_ptr) policy_failure;
    
    // [SiPolicyFailureAudit]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2dde0, 0x13a78 bytes
    // ci.dll .rdata:0x26478, 0x13a78 bytes
    // ci.dll .rdata:0x2dde0, 0x13a78 bytes
    //
    _s6(sdk::unknown_ptr) policy_failure_audit;
    
    // [SIPolicyFindPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74380, 0x13a78 bytes
    // ci.dll PAGE:0x74030, 0x13a78 bytes
    // ci.dll PAGE:0x7448c, 0x13a78 bytes
    //
    _s7(sdk::unknown_ptr) policy_find_policy;
    
    // [SIPolicyFreeArray]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x846c, 0x13a78 bytes
    // ci.dll .text:0x7d30, 0x13a78 bytes
    // ci.dll .text:0x83ec, 0x13a78 bytes
    //
    _s8(sdk::unknown_ptr) policy_free_array;
    
    // [SIPolicyFreeSIChainEKUs]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x82a0, 0x13a78 bytes
    // ci.dll .text:0x7b4c, 0x13a78 bytes
    // ci.dll .text:0x8220, 0x13a78 bytes
    //
    _s9(sdk::unknown_ptr) policy_free_si_chain_ek_us;
    
    // [SIPolicyGetMacroPaths]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6b334, 0x13a78 bytes
    // ci.dll PAGE:0x6a0a8, 0x13a78 bytes
    // ci.dll PAGE:0x6b334, 0x13a78 bytes
    //
    _t0(sdk::unknown_ptr) policy_get_macro_paths;
    
    // [SIPolicyGetOptions]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6f464, 0x13a78 bytes
    // ci.dll PAGE:0x6e4a0, 0x13a78 bytes
    // ci.dll PAGE:0x6f534, 0x13a78 bytes
    //
    _t1(sdk::unknown_ptr) policy_get_options;
    
    // [SIPolicyGetOriginalFilenameAndVersionFromImage]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6fa9c, 0x13a78 bytes
    // ci.dll PAGE:0x6ea88, 0x13a78 bytes
    // ci.dll PAGE:0x6fb6c, 0x13a78 bytes
    //
    _t2(sdk::unknown_ptr) policy_get_original_filename_and_version_from_image;
    
    // [SIPolicyGetPersistentVariable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73de0, 0x13a78 bytes
    // ci.dll PAGE:0x73a20, 0x13a78 bytes
    // ci.dll PAGE:0x73eec, 0x13a78 bytes
    //
    _t3(sdk::unknown_ptr) policy_get_persistent_variable;
    
    // [SIPolicyGetPolicyHandles]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74774, 0x13a78 bytes
    // ci.dll PAGE:0x74450, 0x13a78 bytes
    // ci.dll PAGE:0x74880, 0x13a78 bytes
    //
    _t4(sdk::unknown_ptr) policy_get_policy_handles;
    
    // [SIPolicyGetPolicyIDs]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71d2c, 0x13a78 bytes
    // ci.dll PAGE:0x71260, 0x13a78 bytes
    // ci.dll PAGE:0x71e38, 0x13a78 bytes
    //
    _t5(sdk::unknown_ptr) policy_get_policy_i_ds;
    
    // [SIPolicyGetPolicyInfoFromType]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6fc30, 0x13a78 bytes
    // ci.dll PAGE:0x6ec14, 0x13a78 bytes
    // ci.dll PAGE:0x6fd00, 0x13a78 bytes
    //
    _t6(sdk::unknown_ptr) policy_get_policy_info_from_type;
    
    // [SIPolicyGetSerializedPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71694, 0x13a78 bytes
    // ci.dll PAGE:0x70b38, 0x13a78 bytes
    // ci.dll PAGE:0x71764, 0x13a78 bytes
    //
    _t7(sdk::unknown_ptr) policy_get_serialized_policies;
    
    // [SIPolicyGetTrialMode]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x845c, 0x13a78 bytes
    // ci.dll .text:0x7d20, 0x13a78 bytes
    // ci.dll .text:0x83dc, 0x13a78 bytes
    //
    _t8(sdk::unknown_ptr) policy_get_trial_mode;
    
    // [SIPolicyHasPerAppPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x717f8, 0x13a78 bytes
    // ci.dll PAGE:0x70cec, 0x13a78 bytes
    // ci.dll PAGE:0x718c8, 0x13a78 bytes
    //
    _t9(sdk::unknown_ptr) policy_has_per_app_policy;
    
    // [SIPolicyHashActiveCodeExecutionPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7127c, 0x13a78 bytes
    // ci.dll PAGE:0x70718, 0x13a78 bytes
    // ci.dll PAGE:0x7134c, 0x13a78 bytes
    //
    _u0(sdk::unknown_ptr) policy_hash_active_code_execution_policies;
    
    // [SIPolicyHashSizeToAlgorithm]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6bdc0, 0x13a78 bytes
    // ci.dll PAGE:0x6ac28, 0x13a78 bytes
    // ci.dll PAGE:0x6bdcc, 0x13a78 bytes
    //
    _u1(sdk::unknown_ptr) policy_hash_size_to_algorithm;
    
    // [SIPolicyInitializeFromSerializedPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7145c, 0x13a78 bytes
    // ci.dll PAGE:0x708fc, 0x13a78 bytes
    // ci.dll PAGE:0x7152c, 0x13a78 bytes
    //
    _u2(sdk::unknown_ptr) policy_initialize_from_serialized_policies;
    
    // [SIPolicyInitializeWellKnownSidBuffer]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6b450, 0x13a78 bytes
    // ci.dll PAGE:0x6a1c4, 0x13a78 bytes
    // ci.dll PAGE:0x6b450, 0x13a78 bytes
    //
    _u3(sdk::unknown_ptr) policy_initialize_well_known_sid_buffer;
    
    // [SIPolicyInsertPolicyNode]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x745f4, 0x13a78 bytes
    // ci.dll PAGE:0x742c4, 0x13a78 bytes
    // ci.dll PAGE:0x74700, 0x13a78 bytes
    //
    _u4(sdk::unknown_ptr) policy_insert_policy_node;
    
    // [SIPolicyInternalEnterpriseDefinesClassIDSecureSettingRollup]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x70d7c, 0x13a78 bytes
    // ci.dll PAGE:0x6fe00, 0x13a78 bytes
    // ci.dll PAGE:0x70e4c, 0x13a78 bytes
    //
    _u5(sdk::unknown_ptr) policy_internal_enterprise_defines_class_id_secure_setting_rollup;
    
    // [SiPolicyInternalQuerySecureSettingWithWildCard]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x70c28, 0x13a78 bytes
    // ci.dll PAGE:0x6fcac, 0x13a78 bytes
    // ci.dll PAGE:0x70cf8, 0x13a78 bytes
    //
    _u6(sdk::unknown_ptr) policy_internal_query_secure_setting_with_wild_card;
    
    // [SIPolicyInternalReturnFirstFoundSecureSetting]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7109c, 0x13a78 bytes
    // ci.dll PAGE:0x7013c, 0x13a78 bytes
    // ci.dll PAGE:0x7116c, 0x13a78 bytes
    //
    _u7(sdk::unknown_ptr) policy_internal_return_first_found_secure_setting;
    
    // [SIPolicyIsLegacyPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71ba8, 0x13a78 bytes
    // ci.dll PAGE:0x710dc, 0x13a78 bytes
    // ci.dll PAGE:0x71cb4, 0x13a78 bytes
    //
    _u8(sdk::unknown_ptr) policy_is_legacy_policy;
    
    // [SIPolicyIsPolicyPlatformSecured]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71754, 0x13a78 bytes
    // ci.dll PAGE:0x70c40, 0x13a78 bytes
    // ci.dll PAGE:0x71824, 0x13a78 bytes
    //
    _u9(sdk::unknown_ptr) policy_is_policy_platform_secured;
    
    // [SIPolicyIsSecureBootCapable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x72910, 0x13a78 bytes
    // ci.dll PAGE:0x722b4, 0x13a78 bytes
    // ci.dll PAGE:0x72a1c, 0x13a78 bytes
    //
    _v0(sdk::unknown_ptr) policy_is_secure_boot_capable;
    
    // [SIPolicyIsSecurityDescriptorUserWriteable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6b754, 0x13a78 bytes
    // ci.dll PAGE:0x6a4c8, 0x13a78 bytes
    // ci.dll PAGE:0x6b754, 0x13a78 bytes
    //
    _v1(sdk::unknown_ptr) policy_is_security_descriptor_user_writeable;
    
    // [SIPolicyIsValidPolicyFileName]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71dc0, 0x13a78 bytes
    // ci.dll PAGE:0x712f4, 0x13a78 bytes
    // ci.dll PAGE:0x71ecc, 0x13a78 bytes
    //
    _v2(sdk::unknown_ptr) policy_is_valid_policy_file_name;
    
    // [SIPolicyLoadAuthorizationTokens]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74114, 0x13a78 bytes
    // ci.dll PAGE:0x73d64, 0x13a78 bytes
    // ci.dll PAGE:0x74220, 0x13a78 bytes
    //
    _v3(sdk::unknown_ptr) policy_load_authorization_tokens;
    
    // [SIPolicyMatchPerAppFileRefRule]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7199c, 0x13a78 bytes
    // ci.dll PAGE:0x70ea4, 0x13a78 bytes
    // ci.dll PAGE:0x71a7c, 0x13a78 bytes
    //
    _v4(sdk::unknown_ptr) policy_match_per_app_file_ref_rule;
    
    // [SIPolicyMatchPerAppFileRules]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71874, 0x13a78 bytes
    // ci.dll PAGE:0x70d6c, 0x13a78 bytes
    // ci.dll PAGE:0x71944, 0x13a78 bytes
    //
    _v5(sdk::unknown_ptr) policy_match_per_app_file_rules;
    
    // [SIPolicyMatchUnicodeStringsWithWildCards]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6d2c8, 0x13a78 bytes
    // ci.dll PAGE:0x6c278, 0x13a78 bytes
    // ci.dll PAGE:0x6d34c, 0x13a78 bytes
    //
    _v6(sdk::unknown_ptr) policy_match_unicode_strings_with_wild_cards;
    
    // [SIPolicyObjectValidationEngine]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71e8c, 0x13a78 bytes
    // ci.dll PAGE:0x71470, 0x13a78 bytes
    // ci.dll PAGE:0x71f98, 0x13a78 bytes
    //
    _v7(sdk::unknown_ptr) policy_object_validation_engine;
    
    // [SIPolicyPackagePolicySigners]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6ec10, 0x13a78 bytes
    // ci.dll PAGE:0x6dbcc, 0x13a78 bytes
    // ci.dll PAGE:0x6ece0, 0x13a78 bytes
    //
    _v8(sdk::unknown_ptr) policy_package_policy_signers;
    
    // [SIPolicyParsePolicyData]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x72c94, 0x13a78 bytes
    // ci.dll PAGE:0x72634, 0x13a78 bytes
    // ci.dll PAGE:0x72da0, 0x13a78 bytes
    //
    _v9(sdk::unknown_ptr) policy_parse_policy_data;
    
    // [SIPolicyParseV3Data]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x70470, 0x13a78 bytes
    // ci.dll PAGE:0x6f4f4, 0x13a78 bytes
    // ci.dll PAGE:0x70540, 0x13a78 bytes
    //
    _w0(sdk::unknown_ptr) policy_parse_v3_data;
    
    // [SIPolicyParseV4Data]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7067c, 0x13a78 bytes
    // ci.dll PAGE:0x6f6f0, 0x13a78 bytes
    // ci.dll PAGE:0x7074c, 0x13a78 bytes
    //
    _w1(sdk::unknown_ptr) policy_parse_v4_data;
    
    // [SIPolicyParseV5Data]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7077c, 0x13a78 bytes
    // ci.dll PAGE:0x6f7f0, 0x13a78 bytes
    // ci.dll PAGE:0x7084c, 0x13a78 bytes
    //
    _w2(sdk::unknown_ptr) policy_parse_v5_data;
    
    // [SIPolicyParseV6Data]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x70838, 0x13a78 bytes
    // ci.dll PAGE:0x6f8ac, 0x13a78 bytes
    // ci.dll PAGE:0x70908, 0x13a78 bytes
    //
    _w3(sdk::unknown_ptr) policy_parse_v6_data;
    
    // [SIPolicyPathMacroReplace]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6b214, 0x13a78 bytes
    // ci.dll PAGE:0x69f84, 0x13a78 bytes
    // ci.dll PAGE:0x6b214, 0x13a78 bytes
    //
    _w4(sdk::unknown_ptr) policy_path_macro_replace;
    
    // [SIPolicyPmBuildPathFromPolicyID]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75b30, 0x13a78 bytes
    // ci.dll PAGE:0x75858, 0x13a78 bytes
    // ci.dll PAGE:0x75c3c, 0x13a78 bytes
    //
    _w5(sdk::unknown_ptr) policy_pm_build_path_from_policy_id;
    
    // [SIPolicyPmDeletePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x7514c, 0x13a78 bytes
    // ci.dll PAGE:0x74e4c, 0x13a78 bytes
    // ci.dll PAGE:0x75258, 0x13a78 bytes
    //
    _w6(sdk::unknown_ptr) policy_pm_delete_policy;
    
    // [SIPolicyPmDoesPolicyExist]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75194, 0x13a78 bytes
    // ci.dll PAGE:0x74e94, 0x13a78 bytes
    // ci.dll PAGE:0x752a0, 0x13a78 bytes
    //
    _w7(sdk::unknown_ptr) policy_pm_does_policy_exist;
    
    // [SIPolicyPmEnumeratePolices]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75684, 0x13a78 bytes
    // ci.dll PAGE:0x75394, 0x13a78 bytes
    // ci.dll PAGE:0x75790, 0x13a78 bytes
    //
    _w8(sdk::unknown_ptr) policy_pm_enumerate_polices;
    
    // [SIPolicyPmEnumerateTokens]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x76214, 0x13a78 bytes
    // ci.dll PAGE:0x75f48, 0x13a78 bytes
    // ci.dll PAGE:0x76320, 0x13a78 bytes
    //
    _w9(sdk::unknown_ptr) policy_pm_enumerate_tokens;
    
    // [SIPolicyPmFindNameFromPath]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x755e0, 0x13a78 bytes
    // ci.dll PAGE:0x752ec, 0x13a78 bytes
    // ci.dll PAGE:0x756ec, 0x13a78 bytes
    //
    _x0(sdk::unknown_ptr) policy_pm_find_name_from_path;
    
    // [SIPolicyPmFreeFileItems]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73794, 0x13a78 bytes
    // ci.dll PAGE:0x732c0, 0x13a78 bytes
    // ci.dll PAGE:0x738a0, 0x13a78 bytes
    //
    _x1(sdk::unknown_ptr) policy_pm_free_file_items;
    
    // [SIPolicyPmGetAllPolicyFiles]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75890, 0x13a78 bytes
    // ci.dll PAGE:0x755b8, 0x13a78 bytes
    // ci.dll PAGE:0x7599c, 0x13a78 bytes
    //
    _x2(sdk::unknown_ptr) policy_pm_get_all_policy_files;
    
    // [SIPolicyPmGetBootPartitionPolicyFolder]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74e44, 0x13a78 bytes
    // ci.dll PAGE:0x74b3c, 0x13a78 bytes
    // ci.dll PAGE:0x74f50, 0x13a78 bytes
    //
    _x3(sdk::unknown_ptr) policy_pm_get_boot_partition_policy_folder;
    
    // [SIPolicyPmGetBootPartitionPolicyFolder10S]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x86c0, 0x13a78 bytes
    // ci.dll .text:0x7f84, 0x13a78 bytes
    // ci.dll .text:0x8640, 0x13a78 bytes
    //
    _x4(sdk::unknown_ptr) policy_pm_get_boot_partition_policy_folder10s;
    
    // [SIPolicyPmGetLegacyPolicyFiles]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75fc0, 0x13a78 bytes
    // ci.dll PAGE:0x75cf4, 0x13a78 bytes
    // ci.dll PAGE:0x760cc, 0x13a78 bytes
    //
    _x5(sdk::unknown_ptr) policy_pm_get_legacy_policy_files;
    
    // [SIPolicyPmGetNewPolicyFiles]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75e60, 0x13a78 bytes
    // ci.dll PAGE:0x75b88, 0x13a78 bytes
    // ci.dll PAGE:0x75f6c, 0x13a78 bytes
    //
    _x6(sdk::unknown_ptr) policy_pm_get_new_policy_files;
    
    // [SIPolicyPmGetOsDataPartitionPolicyFolder]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x762f4, 0x13a78 bytes
    // ci.dll PAGE:0x76028, 0x13a78 bytes
    // ci.dll PAGE:0x76400, 0x13a78 bytes
    //
    _x7(sdk::unknown_ptr) policy_pm_get_os_data_partition_policy_folder;
    
    // [SIPolicyPmGetPolicyFolderFiles]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75250, 0x13a78 bytes
    // ci.dll PAGE:0x74f50, 0x13a78 bytes
    // ci.dll PAGE:0x7535c, 0x13a78 bytes
    //
    _x8(sdk::unknown_ptr) policy_pm_get_policy_folder_files;
    
    // [SIPolicyPmGetPolicyFolders]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x8588, 0x13a78 bytes
    // ci.dll .text:0x7e4c, 0x13a78 bytes
    // ci.dll .text:0x8508, 0x13a78 bytes
    //
    _x9(sdk::unknown_ptr) policy_pm_get_policy_folders;
    
    // [SIPolicyPmGetSystemPartitionPolicyFolder]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74de4, 0x13a78 bytes
    // ci.dll PAGE:0x74adc, 0x13a78 bytes
    // ci.dll PAGE:0x74ef0, 0x13a78 bytes
    //
    _y0(sdk::unknown_ptr) policy_pm_get_system_partition_policy_folder;
    
    // [SIPolicyPmGetSystemPartitionPolicyFolderCommon]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74c1c, 0x13a78 bytes
    // ci.dll PAGE:0x74908, 0x13a78 bytes
    // ci.dll PAGE:0x74d28, 0x13a78 bytes
    //
    _y1(sdk::unknown_ptr) policy_pm_get_system_partition_policy_folder_common;
    
    // [SIPolicyPmGetTokenFileName]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x75a58, 0x13a78 bytes
    // ci.dll PAGE:0x75780, 0x13a78 bytes
    // ci.dll PAGE:0x75b64, 0x13a78 bytes
    //
    _y2(sdk::unknown_ptr) policy_pm_get_token_file_name;
    
    // [SIPolicyPmGetVirtESPPartitionPolicyFolder]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74e14, 0x13a78 bytes
    // ci.dll PAGE:0x74b0c, 0x13a78 bytes
    // ci.dll PAGE:0x74f20, 0x13a78 bytes
    //
    _y3(sdk::unknown_ptr) policy_pm_get_virt_esp_partition_policy_folder;
    
    // [SIPolicyPmParsePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x754b0, 0x13a78 bytes
    // ci.dll PAGE:0x751bc, 0x13a78 bytes
    // ci.dll PAGE:0x755bc, 0x13a78 bytes
    //
    _y4(sdk::unknown_ptr) policy_pm_parse_policy;
    
    // [SIPolicyPmReadPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74fcc, 0x13a78 bytes
    // ci.dll PAGE:0x74cc4, 0x13a78 bytes
    // ci.dll PAGE:0x750d8, 0x13a78 bytes
    //
    _y5(sdk::unknown_ptr) policy_pm_read_policy;
    
    // [SIPolicyPmUpdatePolicyBegin]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x747dc, 0x13a78 bytes
    // ci.dll PAGE:0x744b8, 0x13a78 bytes
    // ci.dll PAGE:0x748e8, 0x13a78 bytes
    //
    _y6(sdk::unknown_ptr) policy_pm_update_policy_begin;
    
    // [SIPolicyPmUpdatePolicyCommit]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74a34, 0x13a78 bytes
    // ci.dll PAGE:0x74720, 0x13a78 bytes
    // ci.dll PAGE:0x74b40, 0x13a78 bytes
    //
    _y7(sdk::unknown_ptr) policy_pm_update_policy_commit;
    
    // [SIPolicyPmUpdatePolicyRollback]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74b70, 0x13a78 bytes
    // ci.dll PAGE:0x7485c, 0x13a78 bytes
    // ci.dll PAGE:0x74c7c, 0x13a78 bytes
    //
    _y8(sdk::unknown_ptr) policy_pm_update_policy_rollback;
    
    // [SIPolicyPmWritePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x74ed0, 0x13a78 bytes
    // ci.dll PAGE:0x74bc8, 0x13a78 bytes
    // ci.dll PAGE:0x74fdc, 0x13a78 bytes
    //
    _y9(sdk::unknown_ptr) policy_pm_write_policy;
    
    // [SIPolicyPolicyIDString]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x82f0, 0x13a78 bytes
    // ci.dll .text:0x7bb4, 0x13a78 bytes
    // ci.dll .text:0x8270, 0x13a78 bytes
    //
    _z0(sdk::unknown_ptr) policy_policy_id_string;
    
    // [SIPolicyQueryOnePolicyInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x830c, 0x13a78 bytes
    // ci.dll .text:0x7bd0, 0x13a78 bytes
    // ci.dll .text:0x828c, 0x13a78 bytes
    //
    _z1(sdk::unknown_ptr) policy_query_one_policy_information;
    
    // [SIPolicyQueryOneSecurityPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x709e4, 0x13a78 bytes
    // ci.dll PAGE:0x6fa6c, 0x13a78 bytes
    // ci.dll PAGE:0x70ab4, 0x13a78 bytes
    //
    _z2(sdk::unknown_ptr) policy_query_one_security_policy;
    
    // [SIPolicyQueryWindowsLockdownMode]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x724d0, 0x13a78 bytes
    // ci.dll PAGE:0x71e1c, 0x13a78 bytes
    // ci.dll PAGE:0x725dc, 0x13a78 bytes
    //
    _z3(sdk::unknown_ptr) policy_query_windows_lockdown_mode;
    
    // [SIPolicyRemoveNode]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x746b8, 0x13a78 bytes
    // ci.dll PAGE:0x74394, 0x13a78 bytes
    // ci.dll PAGE:0x747c4, 0x13a78 bytes
    //
    _z4(sdk::unknown_ptr) policy_remove_node;
    
    // [SIPolicyReorderPolicies]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x737dc, 0x13a78 bytes
    // ci.dll PAGE:0x73308, 0x13a78 bytes
    // ci.dll PAGE:0x738e8, 0x13a78 bytes
    //
    _z5(sdk::unknown_ptr) policy_reorder_policies;
    
    // [SIPolicyScriptEnforcementDisabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6bdb0, 0x13a78 bytes
    // ci.dll PAGE:0x6abac, 0x13a78 bytes
    // ci.dll PAGE:0x6bdbc, 0x13a78 bytes
    //
    _z6(sdk::unknown_ptr) policy_script_enforcement_disabled;
    
    // [SIPolicySearchFileRules]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6dbd4, 0x13a78 bytes
    // ci.dll PAGE:0x6cb98, 0x13a78 bytes
    // ci.dll PAGE:0x6dc94, 0x13a78 bytes
    //
    _z7(sdk::unknown_ptr) policy_search_file_rules;
    
    // [SIPolicySetAndUpdateActivePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x72968, 0x13a78 bytes
    // ci.dll PAGE:0x7230c, 0x13a78 bytes
    // ci.dll PAGE:0x72a74, 0x13a78 bytes
    //
    _z8(sdk::unknown_ptr) policy_set_and_update_active_policy;
    
    // [SIPolicySetFileRuleTypesPresent]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71aec, 0x13a78 bytes
    // ci.dll PAGE:0x71020, 0x13a78 bytes
    // ci.dll PAGE:0x71bf8, 0x13a78 bytes
    //
    _z9(sdk::unknown_ptr) policy_set_file_rule_types_present;
    
    // [SIPolicySetOptions]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x70230, 0x13a78 bytes
    // ci.dll PAGE:0x6f260, 0x13a78 bytes
    // ci.dll PAGE:0x70300, 0x13a78 bytes
    //
    _a0(sdk::unknown_ptr) policy_set_options;
    
    // [SIPolicySetPersistentVariable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73ca0, 0x13a78 bytes
    // ci.dll PAGE:0x738dc, 0x13a78 bytes
    // ci.dll PAGE:0x73dac, 0x13a78 bytes
    //
    _a1(sdk::unknown_ptr) policy_set_persistent_variable;
    
    // [SIPolicySetPersistentVariableWearingConscious]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x72b6c, 0x13a78 bytes
    // ci.dll PAGE:0x7250c, 0x13a78 bytes
    // ci.dll PAGE:0x72c78, 0x13a78 bytes
    //
    _a2(sdk::unknown_ptr) policy_set_persistent_variable_wearing_conscious;
    
    // [SIPolicySetUEFIVariable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x72a78, 0x13a78 bytes
    // ci.dll PAGE:0x7241c, 0x13a78 bytes
    // ci.dll PAGE:0x72b84, 0x13a78 bytes
    //
    _a3(sdk::unknown_ptr) policy_set_uefi_variable;
    
    // [SIPolicySysDevEvWhqlEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6bd90, 0x13a78 bytes
    // ci.dll PAGE:0x6ab18, 0x13a78 bytes
    // ci.dll PAGE:0x6bd9c, 0x13a78 bytes
    //
    _a4(sdk::unknown_ptr) policy_sys_dev_ev_whql_enabled;
    
    // [SIPolicySysDevWhqlEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6bd80, 0x13a78 bytes
    // ci.dll PAGE:0x6ab08, 0x13a78 bytes
    // ci.dll PAGE:0x6bd8c, 0x13a78 bytes
    //
    _a5(sdk::unknown_ptr) policy_sys_dev_whql_enabled;
    
    // [SIPolicyUmciEnabled]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6bda0, 0x13a78 bytes
    // ci.dll PAGE:0x6ab28, 0x13a78 bytes
    // ci.dll PAGE:0x6bdac, 0x13a78 bytes
    //
    _a6(sdk::unknown_ptr) policy_umci_enabled;
    
    // [SIPolicyUnpackPolicySignersEx]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6ee04, 0x13a78 bytes
    // ci.dll PAGE:0x6ddcc, 0x13a78 bytes
    // ci.dll PAGE:0x6eed4, 0x13a78 bytes
    //
    _a7(sdk::unknown_ptr) policy_unpack_policy_signers_ex;
    
    // [SIPolicyUpdatePersistentVariable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73588, 0x13a78 bytes
    // ci.dll PAGE:0x730b4, 0x13a78 bytes
    // ci.dll PAGE:0x73694, 0x13a78 bytes
    //
    _a8(sdk::unknown_ptr) policy_update_persistent_variable;
    
    // [SIPolicyValidateImageInternal]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6e044, 0x13a78 bytes
    // ci.dll PAGE:0x6d018, 0x13a78 bytes
    // ci.dll PAGE:0x6e114, 0x13a78 bytes
    //
    _a9(sdk::unknown_ptr) policy_validate_image_internal;
    
    // [SIPolicyVerifyPolicyIsUefiSigned]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73ffc, 0x13a78 bytes
    // ci.dll PAGE:0x73c4c, 0x13a78 bytes
    // ci.dll PAGE:0x74108, 0x13a78 bytes
    //
    _b0(sdk::unknown_ptr) policy_verify_policy_is_uefi_signed;
    
    // [SIPolicyVerifyPolicyIsWindowsSigned]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73ec4, 0x13a78 bytes
    // ci.dll PAGE:0x73b14, 0x13a78 bytes
    // ci.dll PAGE:0x73fd0, 0x13a78 bytes
    //
    _b1(sdk::unknown_ptr) policy_verify_policy_is_windows_signed;
    
    // [SIPolicyVerifySignedData]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x76448, 0x13a78 bytes
    // ci.dll PAGE:0x7617c, 0x13a78 bytes
    // ci.dll PAGE:0x76554, 0x13a78 bytes
    //
    _b2(sdk::unknown_ptr) policy_verify_signed_data;
    
    // [SIPolicyVerifySupplementalPolicyAuthorization]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x73a00, 0x13a78 bytes
    // ci.dll PAGE:0x73544, 0x13a78 bytes
    // ci.dll PAGE:0x73b0c, 0x13a78 bytes
    //
    _b3(sdk::unknown_ptr) policy_verify_supplemental_policy_authorization;
    
    // [SIPolicyVerifyTokenSigned]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x72228, 0x13a78 bytes
    // ci.dll PAGE:0x718a0, 0x13a78 bytes
    // ci.dll PAGE:0x72334, 0x13a78 bytes
    //
    _b4(sdk::unknown_ptr) policy_verify_token_signed;
    
    // [SIPolicyVersion]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x6f0f0, 0x13a78 bytes
    // ci.dll PAGE:0x6e0f0, 0x13a78 bytes
    // ci.dll PAGE:0x6f1c0, 0x13a78 bytes
    //
    _b5(sdk::unknown_ptr) policy_version;
    
    // [SIPolicyVersionsMatched]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x71388, 0x13a78 bytes
    // ci.dll PAGE:0x70828, 0x13a78 bytes
    // ci.dll PAGE:0x71458, 0x13a78 bytes
    //
    _b6(sdk::unknown_ptr) policy_versions_matched;
    
    // [SIPolicyAlloc]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d524, 0x8dc0 bytes
    // ci.dll PAGE:0x7246c, 0x13a78 bytes
    // ci.dll PAGE:0x71ddc, 0x13a78 bytes
    // ci.dll PAGE:0x72578, 0x13a78 bytes
    //
    _b7(sdk::unknown_ptr) policy_alloc;
    
    // [SIPolicyCheckVerBlock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3fca8, 0x8dc0 bytes
    // ci.dll PAGE:0x6f484, 0x13a78 bytes
    // ci.dll PAGE:0x6e4c0, 0x13a78 bytes
    // ci.dll PAGE:0x6f554, 0x13a78 bytes
    //
    _b8(sdk::unknown_ptr) policy_check_ver_block;
    
    // [SIPolicyConvertChainInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x403ac, 0x8dc0 bytes
    // ci.dll PAGE:0x6fd9c, 0x13a78 bytes
    // ci.dll PAGE:0x6ed80, 0x13a78 bytes
    // ci.dll PAGE:0x6fe6c, 0x13a78 bytes
    //
    _b9(sdk::unknown_ptr) policy_convert_chain_info;
    
    // [SIPolicyConvertData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3e744, 0x8dc0 bytes
    // ci.dll PAGE:0x6ccf4, 0x13a78 bytes
    // ci.dll PAGE:0x6bdec, 0x13a78 bytes
    // ci.dll PAGE:0x6cd78, 0x13a78 bytes
    //
    _c0(sdk::unknown_ptr) policy_convert_data;
    
    // [SIPolicyFileRuleSearchCompare]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d730, 0x8dc0 bytes
    // ci.dll PAGE:0x6b890, 0x13a78 bytes
    // ci.dll PAGE:0x6a610, 0x13a78 bytes
    // ci.dll PAGE:0x6b890, 0x13a78 bytes
    //
    _c1(sdk::unknown_ptr) policy_file_rule_search_compare;
    
    // [SIPolicyFindEkuBuffer]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3ebac, 0x8dc0 bytes
    // ci.dll PAGE:0x6d16c, 0x13a78 bytes
    // ci.dll PAGE:0x6c124, 0x13a78 bytes
    // ci.dll PAGE:0x6d1f0, 0x13a78 bytes
    //
    _c2(sdk::unknown_ptr) policy_find_eku_buffer;
    
    // [SIPolicyFindScenarioExceptionRules]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3f960, 0x8dc0 bytes
    // ci.dll PAGE:0x6f0fc, 0x13a78 bytes
    // ci.dll PAGE:0x6e0fc, 0x13a78 bytes
    // ci.dll PAGE:0x6f1cc, 0x13a78 bytes
    //
    _c3(sdk::unknown_ptr) policy_find_scenario_exception_rules;
    
    // [SIPolicyFindScenarioFileRules]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3e50c, 0x8dc0 bytes
    // ci.dll PAGE:0x6caac, 0x13a78 bytes
    // ci.dll PAGE:0x6bb94, 0x13a78 bytes
    // ci.dll PAGE:0x6cb30, 0x13a78 bytes
    //
    _c4(sdk::unknown_ptr) policy_find_scenario_file_rules;
    
    // [SIPolicyFree]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d568, 0x8dc0 bytes
    // ci.dll PAGE:0x724b4, 0x13a78 bytes
    // ci.dll PAGE:0x71e00, 0x13a78 bytes
    // ci.dll PAGE:0x725c0, 0x13a78 bytes
    //
    _c5(sdk::unknown_ptr) policy_free;
    
    // [SIPolicyFreeSIChainInfo]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x40538, 0x8dc0 bytes
    // ci.dll PAGE:0x70070, 0x13a78 bytes
    // ci.dll PAGE:0x6f08c, 0x13a78 bytes
    // ci.dll PAGE:0x70140, 0x13a78 bytes
    //
    _c6(sdk::unknown_ptr) policy_free_si_chain_info;
    
    // [SIPolicyGetCiSigners]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x405c0, 0x8dc0 bytes
    // ci.dll PAGE:0x70124, 0x13a78 bytes
    // ci.dll PAGE:0x6f14c, 0x13a78 bytes
    // ci.dll PAGE:0x701f4, 0x13a78 bytes
    //
    _c7(sdk::unknown_ptr) policy_get_ci_signers;
    
    // [SIPolicyGetOriginalFilenameAndVersionFromImageBase]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3fee4, 0x8dc0 bytes
    // ci.dll PAGE:0x6f6f4, 0x13a78 bytes
    // ci.dll PAGE:0x6e6f0, 0x13a78 bytes
    // ci.dll PAGE:0x6f7c4, 0x13a78 bytes
    //
    _c8(sdk::unknown_ptr) policy_get_original_filename_and_version_from_image_base;
    
    // [SIPolicyInitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3dc1c, 0x8dc0 bytes
    // ci.dll PAGE:0x6bf0c, 0x13a78 bytes
    // ci.dll PAGE:0x6ad74, 0x13a78 bytes
    // ci.dll PAGE:0x6bf18, 0x13a78 bytes
    //
    _c9(sdk::unknown_ptr) policy_initialize;
    
    // [SIPolicyIsPolicyActive]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3fc14, 0x8dc0 bytes
    // ci.dll PAGE:0x6f3a0, 0x13a78 bytes
    // ci.dll PAGE:0x6e3d8, 0x13a78 bytes
    // ci.dll PAGE:0x6f470, 0x13a78 bytes
    //
    _d0(sdk::unknown_ptr) policy_is_policy_active;
    
    // [SIPolicyMatchFileRefRule]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3ede0, 0x8dc0 bytes
    // ci.dll PAGE:0x6d714, 0x13a78 bytes
    // ci.dll PAGE:0x6c6a8, 0x13a78 bytes
    // ci.dll PAGE:0x6d798, 0x13a78 bytes
    //
    _d1(sdk::unknown_ptr) policy_match_file_ref_rule;
    
    // [SIPolicyMatchFileRules]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3ef58, 0x8dc0 bytes
    // ci.dll PAGE:0x6dce8, 0x13a78 bytes
    // ci.dll PAGE:0x6ccac, 0x13a78 bytes
    // ci.dll PAGE:0x6dda8, 0x13a78 bytes
    //
    _d2(sdk::unknown_ptr) policy_match_file_rules;
    
    // [SIPolicyMatchOneFileRule]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3ed00, 0x8dc0 bytes
    // ci.dll PAGE:0x6d3d4, 0x13a78 bytes
    // ci.dll PAGE:0x6c384, 0x13a78 bytes
    // ci.dll PAGE:0x6d458, 0x13a78 bytes
    //
    _d3(sdk::unknown_ptr) policy_match_one_file_rule;
    
    // [SIPolicyParseAllowedSigners]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d854, 0x8dc0 bytes
    // ci.dll PAGE:0x6ba88, 0x13a78 bytes
    // ci.dll PAGE:0x6a814, 0x13a78 bytes
    // ci.dll PAGE:0x6ba94, 0x13a78 bytes
    //
    _d4(sdk::unknown_ptr) policy_parse_allowed_signers;
    
    // [SIPolicyParseBinary]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3db9c, 0x8dc0 bytes
    // ci.dll PAGE:0x6be88, 0x13a78 bytes
    // ci.dll PAGE:0x6acf0, 0x13a78 bytes
    // ci.dll PAGE:0x6be94, 0x13a78 bytes
    //
    _d5(sdk::unknown_ptr) policy_parse_binary;
    
    // [SIPolicyParseDeniedSigners]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d9c0, 0x8dc0 bytes
    // ci.dll PAGE:0x6bbfc, 0x13a78 bytes
    // ci.dll PAGE:0x6a988, 0x13a78 bytes
    // ci.dll PAGE:0x6bc08, 0x13a78 bytes
    //
    _d6(sdk::unknown_ptr) policy_parse_denied_signers;
    
    // [SIPolicyParseFileRules]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d7b0, 0x8dc0 bytes
    // ci.dll PAGE:0x6b9d8, 0x13a78 bytes
    // ci.dll PAGE:0x6a764, 0x13a78 bytes
    // ci.dll PAGE:0x6b9e4, 0x13a78 bytes
    //
    _d7(sdk::unknown_ptr) policy_parse_file_rules;
    
    // [SIPolicyParsePolicySigners]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x8f20, 0x8dc0 bytes
    // ci.dll .text:0x7e40, 0x13a78 bytes
    // ci.dll .text:0x76ec, 0x13a78 bytes
    // ci.dll .text:0x7dc0, 0x13a78 bytes
    //
    _d8(sdk::unknown_ptr) policy_parse_policy_signers;
    
    // [SIPolicyParseSecureSettings]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x406c4, 0x8dc0 bytes
    // ci.dll PAGE:0x70244, 0x13a78 bytes
    // ci.dll PAGE:0x6f274, 0x13a78 bytes
    // ci.dll PAGE:0x70314, 0x13a78 bytes
    //
    _d9(sdk::unknown_ptr) policy_parse_secure_settings;
    
    // [SIPolicyParseSigningScenarios]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x8d3c, 0x8dc0 bytes
    // ci.dll .text:0x7c48, 0x13a78 bytes
    // ci.dll .text:0x74f4, 0x13a78 bytes
    // ci.dll .text:0x7bc8, 0x13a78 bytes
    //
    _e0(sdk::unknown_ptr) policy_parse_signing_scenarios;
    
    // [SIPolicyParseString]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3db2c, 0x8dc0 bytes
    // ci.dll PAGE:0x6be10, 0x13a78 bytes
    // ci.dll PAGE:0x6ac78, 0x13a78 bytes
    // ci.dll PAGE:0x6be1c, 0x13a78 bytes
    //
    _e1(sdk::unknown_ptr) policy_parse_string;
    
    // [SiPolicyPerformance]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x11c60, 0x8dc0 bytes
    // ci.dll .rdata:0x2dc00, 0x13a78 bytes
    // ci.dll .rdata:0x26288, 0x13a78 bytes
    // ci.dll .rdata:0x2dc00, 0x13a78 bytes
    //
    _e2(sdk::unknown_ptr) policy_performance;
    
    // [SIPolicyQueryBlob]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d6f4, 0x8dc0 bytes
    // ci.dll PAGE:0x728d4, 0x13a78 bytes
    // ci.dll PAGE:0x72278, 0x13a78 bytes
    // ci.dll PAGE:0x729e0, 0x13a78 bytes
    //
    _e3(sdk::unknown_ptr) policy_query_blob;
    
    // [SIPolicyQueryPolicyInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d580, 0x8dc0 bytes
    // ci.dll PAGE:0x72528, 0x13a78 bytes
    // ci.dll PAGE:0x71ecc, 0x13a78 bytes
    // ci.dll PAGE:0x72634, 0x13a78 bytes
    //
    _e4(sdk::unknown_ptr) policy_query_policy_information;
    
    // [SIPolicyQuerySecurityPolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x408f0, 0x8dc0 bytes
    // ci.dll PAGE:0x71184, 0x13a78 bytes
    // ci.dll PAGE:0x704fc, 0x13a78 bytes
    // ci.dll PAGE:0x71254, 0x13a78 bytes
    //
    _e5(sdk::unknown_ptr) policy_query_security_policy;
    
    // [SIPolicyQuerySubVerBlock]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3fd6c, 0x8dc0 bytes
    // ci.dll PAGE:0x6f558, 0x13a78 bytes
    // ci.dll PAGE:0x6e55c, 0x13a78 bytes
    // ci.dll PAGE:0x6f628, 0x13a78 bytes
    //
    _e6(sdk::unknown_ptr) policy_query_sub_ver_block;
    
    // [SIPolicySecureSettingSearchCompare]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x40b70, 0x8dc0 bytes
    // ci.dll PAGE:0x71220, 0x13a78 bytes
    // ci.dll PAGE:0x70670, 0x13a78 bytes
    // ci.dll PAGE:0x712f0, 0x13a78 bytes
    //
    _e7(sdk::unknown_ptr) policy_secure_setting_search_compare;
    
    // [SIPolicySetActivePolicy]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3e454, 0x8dc0 bytes
    // ci.dll PAGE:0x6ca28, 0x13a78 bytes
    // ci.dll PAGE:0x6b950, 0x13a78 bytes
    // ci.dll PAGE:0x6caac, 0x13a78 bytes
    //
    _e8(sdk::unknown_ptr) policy_set_active_policy;
    
    // [SIPolicyStatusPrint]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d3cc, 0x8dc0 bytes
    // ci.dll PAGE:0x722ec, 0x13a78 bytes
    // ci.dll PAGE:0x71c58, 0x13a78 bytes
    // ci.dll PAGE:0x723f8, 0x13a78 bytes
    //
    _e9(sdk::unknown_ptr) policy_status_print;
    
    // [SIPolicyUninitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3e284, 0x8dc0 bytes
    // ci.dll PAGE:0x6c7d8, 0x13a78 bytes
    // ci.dll PAGE:0x6b644, 0x13a78 bytes
    // ci.dll PAGE:0x6c7e4, 0x13a78 bytes
    //
    _f0(sdk::unknown_ptr) policy_uninitialize;
    
    // [SIPolicyValidateChainAgainstSigner]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3f77c, 0x8dc0 bytes
    // ci.dll PAGE:0x6ea04, 0x13a78 bytes
    // ci.dll PAGE:0x6d9d0, 0x13a78 bytes
    // ci.dll PAGE:0x6ead4, 0x13a78 bytes
    //
    _f1(sdk::unknown_ptr) policy_validate_chain_against_signer;
    
    // [SIPolicyValidatePolicyEkuBuffer]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll PAGE:0x3d760, 0x8dc0 bytes
    // ci.dll PAGE:0x6b980, 0x13a78 bytes
    // ci.dll PAGE:0x6a70c, 0x13a78 bytes
    // ci.dll PAGE:0x6b98c, 0x13a78 bytes
    //
    _f2(sdk::unknown_ptr) policy_validate_policy_eku_buffer;
};
#include "magic/api.end.hpp"
