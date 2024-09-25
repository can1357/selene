#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bi
{
    // [BiGetCurrentBcdMutantHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x81d628, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) get_current_bcd_mutant_handle;
    
    // [BiGetSystemStorePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x52b1c8, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) get_system_store_path;
    
    // [BiIsFirmwareApplication]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12c434, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) is_firmware_application;
    
    // [BiBindEfiEntryToBcdObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d6330, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96d58c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96be6c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) bind_efi_entry_to_bcd_object;
    
    // [BiDeleteElement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76668c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76e0fc, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) delete_element;
    
    // [BiIsLinkedToEfiVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x96f4e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81c0ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ddc8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) is_linked_to_efi_variable;
    
    // [BiIsLinkedToFirmwareVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x767e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81c024, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f908, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) is_linked_to_firmware_variable;
    
    // [BiIsLogEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711950, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) is_log_enabled;
    
    // [BiIsValidDiskDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x766018, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81f620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76da88, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) is_valid_disk_device;
    
    // [BiIsValidObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96a9f0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) is_valid_object;
    
    // [BiLogFileOwnerProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bebb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65b350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bda20, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) log_file_owner_process;
    
    // [BiLogMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76828c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d5b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76fcfc, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) log_message;
    
    // [BiMapEfiDeviceForSpaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5beea4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa1e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bdd14, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) map_efi_device_for_spaces;
    
    // [BiRemoveBootEntryFromNvramDisplayOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x96f818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fbd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e0f8, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) remove_boot_entry_from_nvram_display_order;
    
    // [BiSpacesUpdatePhysicalDevicePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bf00c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65b664, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bde7c, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) spaces_update_physical_device_path;
    
    // [BiAcquireBcdSyncMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52dc2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767e28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d5c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f898, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) acquire_bcd_sync_mutant;
    
    // [BiAcquirePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b7d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x769180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e03c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770bf0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) acquire_privilege;
    
    // [BiAddBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5de8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96cf40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b820, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) add_boot_entry;
    
    // [BiAddBootEntryToEfiBootManagerDisplayOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5e3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96cfb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b898, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) add_boot_entry_to_efi_boot_manager_display_order;
    
    // [BiAddBootEntryToNvramDisplayOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5f80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96d108, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e8d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b9e8, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) add_boot_entry_to_nvram_display_order;
    
    // [BiAddStoreFromFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7652c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a69c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76cd38, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) add_store_from_file;
    
    // [BiAdjustPrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b844, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x769200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770c70, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) adjust_privilege;
    
    // [BiBcdMutantDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c23e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96be0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a6a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95dd0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) bcd_mutant_descriptor;
    
    // [BiBindEfiBootManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d6060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96d1f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ab40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96bad4, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) bind_efi_boot_manager;
    
    // [BiBindEfiEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d6268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96d430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b8dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96bd10, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) bind_efi_entries;
    
    // [BiBindEfiNamespaceObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d641c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96d690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a7f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96bf70, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) bind_efi_namespace_objects;
    
    // [BiBuildIdentifierList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d6484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96d730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81c5fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96c010, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) build_identifier_list;
    
    // [BiCleanupLoadedStores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52bbc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81fa60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76d008, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) cleanup_loaded_stores;
    
    // [BiCloseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52da30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f4ec, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) close_key;
    
    // [BiCloseStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7651f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a63c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76cc60, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) close_store;
    
    // [BiConvertBootEnvironmentDeviceToNt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52c38c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765ac4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81f814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76d534, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) convert_boot_environment_device_to_nt;
    
    // [BiConvertBootEnvironmentDeviceToQualifiedPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5620, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4df20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b030, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) convert_boot_environment_device_to_qualified_partition;
    
    // [BiConvertBootEnvironmentDeviceToUnknown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c838, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e00c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b118, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) convert_boot_environment_device_to_unknown;
    
    // [BiConvertElementFormatToValueType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52dd60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76fab0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) convert_element_format_to_value_type;
    
    // [BiConvertElementToRegistryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52dd88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76806c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e274, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76fadc, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) convert_element_to_registry_data;
    
    // [BiConvertNtDeviceToBootEnvironment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e1c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7684e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e59c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76ff58, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) convert_nt_device_to_boot_environment;
    
    // [BiConvertNtFilePathToBootEnvironment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d57b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b1c8, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) convert_nt_file_path_to_boot_environment;
    
    // [BiConvertQualifiedPartitionToBootEnvironment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d84c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ab50, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) convert_qualified_partition_to_boot_environment;
    
    // [BiConvertRegistryDataToElement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52df94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7682a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d8c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76fd10, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) convert_registry_data_to_element;
    
    // [BiCreateBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d6a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96dd28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e9c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96c608, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) create_boot_entry;
    
    // [BiCreateEfiEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d6d6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96e0d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4ed78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96c9b8, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) create_efi_entry;
    
    // [BiCreateFileDeviceElement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d58ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c9e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b2c8, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) create_file_device_element;
    
    // [BiCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52d104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81be38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76eb70, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) create_key;
    
    // [BiCreateKeySecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52da7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d244, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f540, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) create_key_security_descriptor;
    
    // [BiCreateMergedBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d6ef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96e2bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4ef64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96cb9c, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) create_merged_boot_entry;
    
    // [BiCreateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d4d90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96bdd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b2cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96a6b0, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) create_object;
    
    // [BiCreatePartitionDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e270, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7685b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e674, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770020, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) create_partition_device;
    
    // [BiDeleteBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7220, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96e60c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4f2a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ceec, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) delete_boot_entry;
    
    // [BiDeleteEfiVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7264, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96e68c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4f328, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96cf6c, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) delete_efi_variable;
    
    // [BiDeleteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5227dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75ccc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b81c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x764710, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) delete_key;
    
    // [BiDeleteRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52c100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7656d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81f154, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76d144, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) delete_registry_value;
    
    // [BiDoesHiveExist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52ea68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x769354, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81fcac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770dc4, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) does_hive_exist;
    
    // [BiDoesHiveKeyExist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d54ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c604, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4dc2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96aee4, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) does_hive_key_exist;
    
    // [BiEnumerateBootEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d733c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96e7a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81eec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96d080, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) enumerate_boot_entries;
    
    // [BiEnumerateSubKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52bd04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x766a18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81bb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76e488, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) enumerate_sub_keys;
    
    // [BiExportBcdObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d73f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96e8a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4f43c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96d180, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) export_bcd_objects;
    
    // [BiExportEfiBootManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d74dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96e9c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4f564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96d2a8, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) export_efi_boot_manager;
    
    // [BiExportStoreAlterationsToEfi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96ed38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4f8d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96d618, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) export_store_alterations_to_efi;
    
    // [BiExportStoreAlterationsToFirmware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523b34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75c878, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4dbec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7642c8, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) export_store_alterations_to_firmware;
    
    // [BiFreeIdentifierList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d787c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96edd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x819df4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96d6b8, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) free_identifier_list;
    
    // [BiGetCurrentBootEntryIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52eae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7693f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ee5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770e68, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) get_current_boot_entry_identifier;
    
    // [BiGetDefaultBootEntryIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d4f2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96bfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d6ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96a8b0, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) get_default_boot_entry_identifier;
    
    // [BiGetDeviceFromEfiPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d78f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96ee5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81dde8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96d73c, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) get_device_from_efi_path;
    
    // [BiGetDriveLayoutBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52c8bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x766228, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81f6b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76dc98, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) get_drive_layout_block;
    
    // [BiGetDriveLayoutInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768afc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81eab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77056c, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) get_drive_layout_information;
    
    // [BiGetElement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d928, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ac28, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) get_element;
    
    // [BiGetFilePathFromEfiPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7a8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96efe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81dc80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96d8c0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) get_file_path_from_efi_path;
    
    // [BiGetFirmwareType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52bb50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767ecc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81c064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f93c, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) get_firmware_type;
    
    // [BiGetKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d758, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f760, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) get_key_name;
    
    // [BiGetNtPartitionPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52c4f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765c38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81f1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76d6a8, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) get_nt_partition_path;
    
    // [BiGetObjectDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52d2b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7654c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81cb80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76cf38, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) get_object_description;
    
    // [BiGetObjectIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522618, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767c8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d6f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f6fc, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) get_object_identifier;
    
    // [BiGetObjectReferenceFromEfiEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7be8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81dc0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96da20, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) get_object_reference_from_efi_entry;
    
    // [BiGetPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ec50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7702f0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) get_partition_information;
    
    // [BiGetPartitionVhdFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e5f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768994, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770404, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) get_partition_vhd_file_path;
    
    // [BiGetPartitionVhdFilePathFromUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e618, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7689c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770434, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) get_partition_vhd_file_path_from_unicode_string;
    
    // [BiGetPhysicalDriveName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5a54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96cb94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e35c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b474, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) get_physical_drive_name;
    
    // [BiGetRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52d380, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7672e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d3d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76ed58, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) get_registry_value;
    
    // [BiGetSavedBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7d70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f2d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81db08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96dbb4, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) get_saved_boot_entry;
    
    // [BiGetSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b2b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76945c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a288, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770ecc, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) get_system_partition;
    
    // [BiGetVolumeDiskExtentsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5b94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96cce4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e4ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b5c4, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) get_volume_disk_extents_information;
    
    // [BiHandleFirmwareDefaultEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7df4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f364, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4f984, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96dc44, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) handle_firmware_default_entry;
    
    // [BiIsEnumerateMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d4fc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c07c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d798, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96a95c, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) is_enumerate_match;
    
    // [BiIsObjectAliased]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e16c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76848c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76fefc, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) is_object_aliased;
    
    // [BiIsOfflineHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c49c, 0x32828 bytes
    // ntoskrnl.exe .text:0x396aa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa044, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397f5c, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) is_offline_handle;
    
    // [BiIsPortableWorkspaceBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5594, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4de80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96af90, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) is_portable_workspace_boot;
    
    // [BiIsSynchFirmwareEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c4e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x396988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9eb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397e44, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) is_synch_firmware_entries;
    
    // [BiIsSystemStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52ce3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x766898, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81af84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76e308, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) is_system_store;
    
    // [BiIsVolumePartitionInformationRetained]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e8b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ed64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77070c, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) is_volume_partition_information_retained;
    
    // [BiIsWinPEBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52c984, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7662b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b048, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76dd24, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) is_win_pe_boot;
    
    // [BiIssueGetDriveLayoutIoctl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e7ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768bc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81eb78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770634, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) issue_get_drive_layout_ioctl;
    
    // [BiLoadHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b5e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768f38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ef64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7709a8, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) load_hive;
    
    // [BiLoadSystemStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b044, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7650c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a0a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76cb34, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) load_system_store;
    
    // [BiLookupObjectByBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7f64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f568, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81dbdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96de48, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) lookup_object_by_boot_entry;
    
    // [BiLookupObjectByIdentifierAndBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7f8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fb04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96de78, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) lookup_object_by_identifier_and_boot_entry;
    
    // [BiMarkTreatAsSystemStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b540, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76ce80, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) mark_treat_as_system_store;
    
    // [BiModifyBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d7fe4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f5f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fb64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ded8, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) modify_boot_entry;
    
    // [BiOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52d8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7678f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f364, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) open_key;
    
    // [BiOpenKeyNonBcd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52bfe4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81f990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7708e0, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) open_key_non_bcd;
    
    // [BiOpenStoreKeyFromObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123948, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bea80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa10c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bd8f0, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) open_store_key_from_object;
    
    // [BiOpenSystemStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b9c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x766d0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b4f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76e77c, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) open_system_store;
    
    // [BiQueryBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96df44, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) query_boot_entry_order;
    
    // [BiQueryBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d80d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f73c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a584, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e01c, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) query_boot_options;
    
    // [BiReleaseBcdSyncMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52dc08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767c64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81d670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f6d4, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) release_bcd_sync_mutant;
    
    // [BiReleasePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52b784, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x769128, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81e0c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770b98, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) release_privilege;
    
    // [BiResolveLocateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4d9ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96acf0, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) resolve_locate_device;
    
    // [BiSanitizeHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x122948, 0x32828 bytes
    // ntoskrnl.exe .text:0x271028, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3808c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3227d8, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) sanitize_handle;
    
    // [BiSetBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d818c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f8cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fc84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e1ac, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) set_boot_entry_order;
    
    // [BiSetBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d81e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f944, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fcfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e224, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) set_boot_options;
    
    // [BiSetFirmwareModified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c390, 0x32828 bytes
    // ntoskrnl.exe .text:0x39699c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9f88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397e58, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) set_firmware_modified;
    
    // [BiSetFirmwareModifiedFromObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123904, 0x32828 bytes
    // ntoskrnl.exe .text:0x5beb64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9f3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bd9d4, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) set_firmware_modified_from_object;
    
    // [BiSetObjectDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d50e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96c1a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81a444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96aa84, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) set_object_description;
    
    // [BiSetRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52dc80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x767f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81ba50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76f9c4, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) set_registry_value;
    
    // [BiTranslateBootEntryId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96f9bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81db8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e29c, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) translate_boot_entry_id;
    
    // [BiTranslateBootOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d826c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96fa24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81b9cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e304, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) translate_boot_order;
    
    // [BiTranslateDisplayOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d82e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96faa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fd74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e388, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) translate_display_order;
    
    // [BiTranslateFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96fb30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81df6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e410, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) translate_file_path;
    
    // [BiTranslateObjectIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8428, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96fc0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fdfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e4ec, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) translate_object_identifier;
    
    // [BiTranslateSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52c754, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7660ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81fb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76db1c, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) translate_symbolic_link;
    
    // [BiTranslateSymbolicLinkFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d5c80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96cdd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4e5a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96b6b4, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) translate_symbolic_link_file;
    
    // [BiUnloadHiveByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5239ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75c6d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4dcd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x764128, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) unload_hive_by_handle;
    
    // [BiUnloadHiveByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523a38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75c770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4dd70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7641c0, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) unload_hive_by_name;
    
    // [BiUpdateBcdObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8474, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96fc98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81c338, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e578, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) update_bcd_object;
    
    // [BiUpdateEfiEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d874c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96ff74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4fe84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96e854, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) update_efi_entry;
    
    // [BiUpdateObjectReferenceInEfiEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d88c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97013c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa50050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ea1c, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) update_object_reference_in_efi_entry;
    
    // [BiVerifyBootPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52e998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x768d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81f740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x770800, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) verify_boot_partition;
    
    // [BiWasFirmwareModified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c3d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3969d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9ec8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397e8c, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) was_firmware_modified;
    
    // [BiZwClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c488, 0x32828 bytes
    // ntoskrnl.exe .text:0x267c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318b40, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) zw_close;
    
    // [BiZwCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c4a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396aec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa0d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397fa8, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) zw_create_key;
    
    // [BiZwDeleteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x122940, 0x32828 bytes
    // ntoskrnl.exe .text:0x388a88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9f24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3894f8, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) zw_delete_key;
    
    // [BiZwDeleteValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c4d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x396b4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa234, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398008, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) zw_delete_value_key;
    
    // [BiZwEnumerateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c380, 0x32828 bytes
    // ntoskrnl.exe .text:0x396a2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397ee8, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) zw_enumerate_key;
    
    // [BiZwOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c480, 0x32828 bytes
    // ntoskrnl.exe .text:0x396a88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa02c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397f44, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) zw_open_key;
    
    // [BiZwQueryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c388, 0x32828 bytes
    // ntoskrnl.exe .text:0x396acc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa0b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397f88, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) zw_query_key;
    
    // [BiZwQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c474, 0x32828 bytes
    // ntoskrnl.exe .text:0x396a58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa088, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397f14, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) zw_query_value_key;
    
    // [BiZwSetSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c490, 0x32828 bytes
    // ntoskrnl.exe .text:0x396ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa054, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397f6c, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) zw_set_security_object;
    
    // [BiZwSetValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c4d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x396b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9fd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397fdc, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) zw_set_value_key;
    
    // [BiSignalEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52278, 0x4652 bytes
    // netio.sys .text:0x637fc, 0x4dd3 bytes
    // netio.sys .text:0x639fc, 0x4e8c bytes
    // netio.sys .text:0x637bc, 0x4dd3 bytes
    //
    _z7(sdk::unknown_ptr) signal_event;
};
#include "magic/api.end.hpp"
