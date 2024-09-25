#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/devpropkey_t.hpp"

#include "magic/api.start.hpp"
namespace devpkey
{
    // [DEVPKEY_Device_AtsSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xf9a0, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) device_ats_settings;
    
    // [DEVPKEY_Device_CreatorProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x176d0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) device_creator_process_id;
    
    // [DEVPKEY_Device_DependencyBootSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x280f50, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) device_dependency_boot_session;
    
    // [DEVPKEY_Device_DriverShimIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xeb30, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) device_driver_shim_ids;
    
    // [DEVPKEY_Device_EffectiveRestrictedSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xf1a8, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) device_effective_restricted_sd;
    
    // [DEVPKEY_Device_FirmwareDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x25e090, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) device_firmware_dependencies;
    
    // [DEVPKEY_Device_InheritedRestrictedSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xfc70, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) device_inherited_restricted_sd;
    
    // [DEVPKEY_Device_IommuDomainPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x18aa0, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) device_iommu_domain_policy;
    
    // [DEVPKEY_DriverDatabase_ParentNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x18ba8, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) driver_database_parent_node;
    
    // [DEVPKEY_DriverPackage_FirmwareDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x280e00, 0x32828 bytes
    //
    _m09(sdk::unknown_ptr) driver_package_firmware_dependencies;
    
    // [DEVPKEY_DriverPackage_FirmwareDependencyBootSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x280de8, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) driver_package_firmware_dependency_boot_session;
    
    // [DEVPKEY_DriverPackage_OsVersionCeiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x17d58, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) driver_package_os_version_ceiling;
    
    // [DEVPKEY_DriverPackage_OsVersionFloor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x17d40, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) driver_package_os_version_floor;
    
    // [DEVPKEY_DriverPackage_UniqueId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3c308, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) driver_package_unique_id;
    
    // [DEVPKEY_Device_AssignedToGuest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e490, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18fc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e410, 0x1fe000 bytes
    //
    _m14(sdk::unknown_ptr) device_assigned_to_guest;
    
    // [DEVPKEY_DeviceClass_CompoundLowerFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9fc0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf688, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaf30, 0x1fe000 bytes
    //
    _m15(sdk::unknown_ptr) device_class_compound_lower_filters;
    
    // [DEVPKEY_DeviceClass_CompoundUpperFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9fd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf6a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaf48, 0x1fe000 bytes
    //
    _m16(sdk::unknown_ptr) device_class_compound_upper_filters;
    
    // [DEVPKEY_DeviceClass_ConfigFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xcaa0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfd18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc3f0, 0x1fe000 bytes
    //
    _m17(sdk::unknown_ptr) device_class_config_filters;
    
    // [DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xca88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfd30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc3d8, 0x1fe000 bytes
    //
    _m18(sdk::unknown_ptr) device_class_config_notify_wnf_triggers;
    
    // [DEVPKEY_DeviceClass_ConfigurableClassVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2dc70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bcd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dfb0, 0x1fe000 bytes
    //
    _m19(sdk::unknown_ptr) device_class_configurable_class_version;
    
    // [DEVPKEY_DeviceClass_LowerFilterCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e140, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17e30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e0c0, 0x1fe000 bytes
    //
    _m20(sdk::unknown_ptr) device_class_lower_filter_cache;
    
    // [DEVPKEY_DeviceClass_LowerFilterDefaultLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e3a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c5a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e6e8, 0x1fe000 bytes
    //
    _m21(sdk::unknown_ptr) device_class_lower_filter_default_level;
    
    // [DEVPKEY_DeviceClass_LowerFilterLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e6e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c950, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ea28, 0x1fe000 bytes
    //
    _m22(sdk::unknown_ptr) device_class_lower_filter_levels;
    
    // [DEVPKEY_DeviceClass_UpperFilterCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e128, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17e18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e0a8, 0x1fe000 bytes
    //
    _m23(sdk::unknown_ptr) device_class_upper_filter_cache;
    
    // [DEVPKEY_DeviceClass_UpperFilterDefaultLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ed18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d058, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f058, 0x1fe000 bytes
    //
    _m24(sdk::unknown_ptr) device_class_upper_filter_default_level;
    
    // [DEVPKEY_DeviceClass_UpperFilterLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ef18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d348, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f258, 0x1fe000 bytes
    //
    _m25(sdk::unknown_ptr) device_class_upper_filter_levels;
    
    // [DEVPKEY_Device_CompoundLowerFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9db0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf658, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xad08, 0x1fe000 bytes
    //
    _m26(sdk::unknown_ptr) device_compound_lower_filters;
    
    // [DEVPKEY_Device_CompoundUpperFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9dc8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf4e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xad20, 0x1fe000 bytes
    //
    _m27(sdk::unknown_ptr) device_compound_upper_filters;
    
    // [DEVPKEY_DeviceContainer_BatteryLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e238, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18bd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e1b8, 0x1fe000 bytes
    //
    _m28(sdk::unknown_ptr) device_container_battery_level;
    
    // [DEVPKEY_DeviceContainer_BatteryLow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e160, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18a88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e0e0, 0x1fe000 bytes
    //
    _m29(sdk::unknown_ptr) device_container_battery_low;
    
    // [DEVPKEY_Device_DmaRemappingPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xc158, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf9b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xbab8, 0x1fe000 bytes
    //
    _m30(sdk::unknown_ptr) device_dma_remapping_policy;
    
    // [DEVPKEY_Device_DriverInGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb578, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf468, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9f98, 0x1fe000 bytes
    //
    _m31(sdk::unknown_ptr) device_driver_in_group;
    
    // [DEVPKEY_Device_ExtendedAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e298, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18da0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e218, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) device_extended_address;
    
    // [DEVPKEY_Device_InvalidatedDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e268, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18c08, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e1e8, 0x1fe000 bytes
    //
    _m33(sdk::unknown_ptr) device_invalidated_drivers;
    
    // [DEVPKEY_Device_LowerFilterCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e0e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17e60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e060, 0x1fe000 bytes
    //
    _m34(sdk::unknown_ptr) device_lower_filter_cache;
    
    // [DEVPKEY_Device_LowerFilterDefaultLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e1a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18ae8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e128, 0x1fe000 bytes
    //
    _m35(sdk::unknown_ptr) device_lower_filter_default_level;
    
    // [DEVPKEY_Device_LowerFilterLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e208, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18b60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e188, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) device_lower_filter_levels;
    
    // [DEVPKEY_Device_OmitFromSystemSpec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb458, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf670, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9ea8, 0x1fe000 bytes
    //
    _m37(sdk::unknown_ptr) device_omit_from_system_spec;
    
    // [DEVPKEY_Device_Owners]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2db60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bb68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dea0, 0x1fe000 bytes
    //
    _m38(sdk::unknown_ptr) device_owners;
    
    // [DEVPKEY_Device_PanelColor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xba78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xed78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa478, 0x1fe000 bytes
    //
    _m39(sdk::unknown_ptr) device_panel_color;
    
    // [DEVPKEY_DevicePanel_Color]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2de28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bef0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e168, 0x1fe000 bytes
    //
    _m40(sdk::unknown_ptr) device_panel_color_;
    
    // [DEVPKEY_DevicePanel_ContainerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e170, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c2a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e4b0, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) device_panel_container_id;
    
    // [DEVPKEY_DevicePanel_Group]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d790, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b728, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dad0, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) device_panel_group;
    
    // [DEVPKEY_Device_PanelGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xba60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xed60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa460, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) device_panel_group_;
    
    // [DEVPKEY_DevicePanel_Height]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e7e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ca60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eb28, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) device_panel_height;
    
    // [DEVPKEY_Device_PanelHeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xba48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xebe0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa448, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) device_panel_height_;
    
    // [DEVPKEY_Device_PanelId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa098, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10d88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb008, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) device_panel_id;
    
    // [DEVPKEY_DevicePanel_JointMovementOrientation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d9c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b990, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dd08, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) device_panel_joint_movement_orientation;
    
    // [DEVPKEY_DevicePanel_JointMovementPosition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ea88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cd40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2edc8, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) device_panel_joint_movement_position;
    
    // [DEVPKEY_DevicePanel_JointMovementPositionMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e7d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ca48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eb10, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) device_panel_joint_movement_position_max;
    
    // [DEVPKEY_DevicePanel_JointMovementPositionMin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2eaa0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cd58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ede0, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) device_panel_joint_movement_position_min;
    
    // [DEVPKEY_DevicePanel_JointMovementPositionStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e948, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cbd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ec88, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) device_panel_joint_movement_position_start;
    
    // [DEVPKEY_DevicePanel_JointSourcePanelEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e4f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c738, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e830, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) device_panel_joint_source_panel_edge;
    
    // [DEVPKEY_DevicePanel_JointSourcePositionX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e2e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c478, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e620, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) device_panel_joint_source_position_x;
    
    // [DEVPKEY_DevicePanel_JointSourcePositionY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d7c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b760, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2db08, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) device_panel_joint_source_position_y;
    
    // [DEVPKEY_DevicePanel_JointSourcePositionZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e970, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cc00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ecb0, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) device_panel_joint_source_position_z;
    
    // [DEVPKEY_DevicePanel_JointTargetPanelEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f1c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d688, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f500, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) device_panel_joint_target_panel_edge;
    
    // [DEVPKEY_DevicePanel_JointTargetPanelId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2dc18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bc80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2df58, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) device_panel_joint_target_panel_id;
    
    // [DEVPKEY_DevicePanel_JointTargetPositionX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e788, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ca00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eac8, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) device_panel_joint_target_position_x;
    
    // [DEVPKEY_DevicePanel_JointTargetPositionY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ee60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d230, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f1a0, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) device_panel_joint_target_position_y;
    
    // [DEVPKEY_DevicePanel_JointTargetPositionZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d7e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b778, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2db20, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) device_panel_joint_target_position_z;
    
    // [DEVPKEY_DevicePanel_JointTargetRotationX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d778, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b710, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dab8, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) device_panel_joint_target_rotation_x;
    
    // [DEVPKEY_DevicePanel_JointTargetRotationY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e720, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c998, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ea60, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) device_panel_joint_target_rotation_y;
    
    // [DEVPKEY_DevicePanel_JointTargetRotationZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2def0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c008, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e230, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) device_panel_joint_target_rotation_z;
    
    // [DEVPKEY_DevicePanel_JointType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e9d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cc68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ed10, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) device_panel_joint_type;
    
    // [DEVPKEY_Device_PanelLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xba30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xebc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa430, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) device_panel_length;
    
    // [DEVPKEY_Device_PanelPositionX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xba18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xed48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa418, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) device_panel_position_x;
    
    // [DEVPKEY_Device_PanelPositionY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xba00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xed30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa400, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) device_panel_position_y;
    
    // [DEVPKEY_Device_PanelPositionZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb9e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xed18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa3e8, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) device_panel_position_z;
    
    // [DEVPKEY_Device_PanelRotationX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb9d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xed00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa3d0, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) device_panel_rotation_x;
    
    // [DEVPKEY_Device_PanelRotationY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb9b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xece8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa3b8, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) device_panel_rotation_y;
    
    // [DEVPKEY_Device_PanelRotationZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb9a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xecd0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa3a0, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) device_panel_rotation_z;
    
    // [DEVPKEY_Device_PanelShape]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb988, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xecb8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa388, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) device_panel_shape;
    
    // [DEVPKEY_Device_PanelSide]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb970, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeca0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa370, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) device_panel_side;
    
    // [DEVPKEY_DevicePanel_Side]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2efe8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d4b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f328, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) device_panel_side_;
    
    // [DEVPKEY_Device_PanelVisible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb958, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xec88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa358, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) device_panel_visible;
    
    // [DEVPKEY_Device_PanelWidth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb940, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xebb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa340, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) device_panel_width;
    
    // [DEVPKEY_DevicePanel_Width]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ec00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cef0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ef40, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) device_panel_width_;
    
    // [DEVPKEY_Device_PendingSoftwareInstall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e1c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18b00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e140, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) device_pending_software_install;
    
    // [DEVPKEY_Device_PhysicalDeviceLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa0b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10da0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb020, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) device_physical_device_location;
    
    // [DEVPKEY_Device_PhysicalDeviceLocationJoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1daa0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17698, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1da30, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) device_physical_device_location_joint;
    
    // [DEVPKEY_Device_PhysicalDeviceLocationPanel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1dab8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17680, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1da48, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) device_physical_device_location_panel;
    
    // [DEVPKEY_Device_PhysicalDeviceLocationSpatial]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb928, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xec70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa328, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) device_physical_device_location_spatial;
    
    // [DEVPKEY_Device_PreventDriverLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa020, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf6b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaf90, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) device_prevent_driver_load;
    
    // [DEVPKEY_Device_RebootRequiredReason]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa1d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10ed8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb118, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) device_reboot_required_reason;
    
    // [DEVPKEY_Device_StateDirectoryId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e1f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c350, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e538, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) device_state_directory_id;
    
    // [DEVPKEY_Device_UpdateWithUngroupedDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb560, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf480, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9f80, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) device_update_with_ungrouped_drivers;
    
    // [DEVPKEY_Device_UpperFilterCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e0c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17e48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e048, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) device_upper_filter_cache;
    
    // [DEVPKEY_Device_UpperFilterDefaultLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e250, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18bf0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e1d0, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) device_upper_filter_default_level;
    
    // [DEVPKEY_Device_UpperFilterLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e220, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18bc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e1a0, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) device_upper_filter_levels;
    
    // [DEVPKEY_DriverDatabase_Extended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1c7b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18b18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c730, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) driver_database_extended;
    
    // [DEVPKEY_DriverDatabase_LastUpdateDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1df58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17b30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ded8, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) driver_database_last_update_date;
    
    // [DEVPKEY_DriverDatabase_SchemaVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb910, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe308, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa310, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) driver_database_schema_version;
    
    // [DEVPKEY_DriverDatabase_SetupOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd870, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12248, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd488, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) driver_database_setup_options;
    
    // [DEVPKEY_DriverDatabase_SetupStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd858, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12260, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd470, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) driver_database_setup_status;
    
    // [DEVPKEY_DriverDatabase_SoftwareRegistryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e3c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12230, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e700, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) driver_database_software_registry_path;
    
    // [DEVPKEY_DriverDatabase_SystemPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ec60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17b48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2efa0, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) driver_database_system_path;
    
    // [DEVPKEY_DriverDatabase_SystemRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1def0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12188, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1de70, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) driver_database_system_root;
    
    // [DEVPKEY_DriverPackage_CatalogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1aa30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17d28, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1a9b0, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) driver_package_catalog_file;
    
    // [DEVPKEY_DriverPackage_DriverFlightIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa280, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10f78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb1c0, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) driver_package_driver_flight_ids;
    
    // [DEVPKEY_DriverPackage_DriverPackageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f128, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d5b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f468, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) driver_package_driver_package_id;
    
    // [DEVPKEY_DriverPackage_EffectiveFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1aa60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17d10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1a9e0, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) driver_package_effective_file_size;
    
    // [DEVPKEY_DriverPackage_ExtensionContractIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9f20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11038, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xae90, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) driver_package_extension_contract_ids;
    
    // [DEVPKEY_DriverPackage_FamilyId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f378, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d8a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f6b8, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) driver_package_family_id;
    
    // [DEVPKEY_DriverPackage_FileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1aa90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17cf8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1aa10, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) driver_package_file_size;
    
    // [DEVPKEY_DriverPackage_GroupIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xca18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10f38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc368, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) driver_package_group_ids;
    
    // [DEVPKEY_DriverPackage_Integrated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ebd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe218, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ef18, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) driver_package_integrated;
    
    // [DEVPKEY_DriverPackage_Invalidated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9e90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10fa8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xae00, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) driver_package_invalidated;
    
    // [DEVPKEY_DriverPackage_Primitive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb8b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe260, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa2b0, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) driver_package_primitive;
    
    // [DEVPKEY_DriverPackage_PrimitiveFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xbaa0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe2d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa4a0, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) driver_package_primitive_flags;
    
    // [DEVPKEY_DriverPackage_SubmissionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa268, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10f90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb1a8, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) driver_package_submission_id;
    
    // [DEVPKEY_NODE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9e28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe200, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xad80, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) node;
    
    // [DEVPKEY_Device_AdditionalSoftwareRequested]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280ff8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e3d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18f08, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e368, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) device_additional_software_requested;
    
    // [DEVPKEY_Device_Address]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271ce8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ce68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f878, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ce18, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) device_address;
    
    // [DEVPKEY_Device_BaseContainerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e6b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb3a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe6c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9df8, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) device_base_container_id;
    
    // [DEVPKEY_Device_BiosDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e578, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9f90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10d58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaf00, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) device_bios_device_name;
    
    // [DEVPKEY_Device_BusNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271d78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cf40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f950, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ce90, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) device_bus_number;
    
    // [DEVPKEY_Device_BusRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ecc0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cdd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xec40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cd58, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) device_bus_relations;
    
    // [DEVPKEY_Device_BusReportedDeviceDesc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e0f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb4f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe6f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9f38, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) device_bus_reported_device_desc;
    
    // [DEVPKEY_Device_BusTypeGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271da8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbf98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe458, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb8f8, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) device_bus_type_guid;
    
    // [DEVPKEY_Device_Capabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e688, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb408, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe598, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9e58, 0x1fe000 bytes
    //
    _n20(struct nt::devpropkey_t*) device_capabilities;
    
    // [DEVPKEY_Device_Characteristics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271d00, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ceb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f8c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ce00, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) device_characteristics;
    
    // [DEVPKEY_Device_Children]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eca8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cdc0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeaa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cd28, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) device_children;
    
    // [DEVPKEY_Device_Class]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271af8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1c768, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f570, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c6e8, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) device_class;
    
    // [DEVPKEY_DeviceClass_Characteristics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ea50, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e370, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18ea8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e2d8, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) device_class_characteristics;
    
    // [DEVPKEY_DeviceClass_ClassCoInstallers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ea08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9f68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe6b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaed8, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) device_class_class_co_installers;
    
    // [DEVPKEY_DeviceClass_ClassInstaller]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e9f0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb660, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe830, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa070, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) device_class_class_installer;
    
    // [DEVPKEY_DeviceClass_ClassName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ea20, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e0f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17e00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e078, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) device_class_class_name;
    
    // [DEVPKEY_DeviceClass_CompatibleFeatureScores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280e90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb780, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe950, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa190, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) device_class_compatible_feature_scores;
    
    // [DEVPKEY_DeviceClass_Configurable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280ed8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9f50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe710, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaec0, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) device_class_configurable;
    
    // [DEVPKEY_DeviceClass_ConfigurableOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280ec0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb648, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe818, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa058, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) device_class_configurable_override;
    
    // [DEVPKEY_DeviceClass_DefaultService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e960, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb768, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe938, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa178, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) device_class_default_service;
    
    // [DEVPKEY_DeviceClass_DevType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ea80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e3a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18ed8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e2f0, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) device_class_dev_type;
    
    // [DEVPKEY_DeviceClass_DHPRebalanceOptOut]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e930, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e2c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18de8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e230, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) device_class_dhp_rebalance_opt_out;
    
    // [DEVPKEY_DeviceClass_Exclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ea68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e358, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18e90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e308, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) device_class_exclusive;
    
    // [DEVPKEY_DeviceClass_FSFilterClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e8d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e1d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18b30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e158, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) device_class_fs_filter_class;
    
    // [DEVPKEY_Device_ClassGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e838, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9d50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11068, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaca8, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) device_class_guid;
    
    // [DEVPKEY_DeviceClass_Icon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ea08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e340, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18e78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e2c0, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) device_class_icon;
    
    // [DEVPKEY_DeviceClass_IconPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e948, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e2b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18dd0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e248, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) device_class_icon_path;
    
    // [DEVPKEY_DeviceClass_LastDeleteDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e8e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbae8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xef58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa4e8, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) device_class_last_delete_date;
    
    // [DEVPKEY_DeviceClass_LowerFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eac8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9ff0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf6e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaf60, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) device_class_lower_filters;
    
    // [DEVPKEY_DeviceClass_LowerLogoVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e900, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e190, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18ad0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e110, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) device_class_lower_logo_version;
    
    // [DEVPKEY_DeviceClass_Name]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ea38, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e110, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17de8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e090, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) device_class_name;
    
    // [DEVPKEY_DeviceClass_NoDisplayClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e9a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e2e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18e18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e290, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) device_class_no_display_class;
    
    // [DEVPKEY_DeviceClass_NoInstallClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e9c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e328, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18e60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e278, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) device_class_no_install_class;
    
    // [DEVPKEY_DeviceClass_NoUseClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e978, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb7a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18e00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa1b8, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) device_class_no_use_class;
    
    // [DEVPKEY_DeviceClass_PolicyExempt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280ea8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb750, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe920, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa160, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) device_class_policy_exempt;
    
    // [DEVPKEY_DeviceClass_PropPageProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e9d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e310, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18e48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e2a8, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) device_class_prop_page_provider;
    
    // [DEVPKEY_DeviceClass_Security]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eab0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e3b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18ef0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e320, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) device_class_security;
    
    // [DEVPKEY_DeviceClass_SecuritySDS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ea98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e388, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18ec0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e338, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) device_class_security_sds;
    
    // [DEVPKEY_DeviceClass_SilentInstall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e990, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e2f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18e30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e260, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) device_class_silent_install;
    
    // [DEVPKEY_DeviceClass_UpperFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eae0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa008, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf6f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaf78, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) device_class_upper_filters;
    
    // [DEVPKEY_Device_CompatibleIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e778, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb470, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe728, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9ec0, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) device_compatible_ids;
    
    // [DEVPKEY_Device_ConfigFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e650, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc9d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfc20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc320, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) device_config_flags;
    
    // [DEVPKEY_Device_ConfigurationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2810a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb738, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe860, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa148, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) device_configuration_id;
    
    // [DEVPKEY_DeviceContainer_ConfigFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ea98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc018, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10db8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb978, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) device_container_config_flags;
    
    // [DEVPKEY_DeviceContainer_HasProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271ab0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1a5f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17728, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1a570, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) device_container_has_problem;
    
    // [DEVPKEY_Device_ContainerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e6e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa038, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf4f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xafa8, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) device_container_id;
    
    // [DEVPKEY_DeviceContainer_IsConnected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ea80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcb00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfdc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc450, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) device_container_is_connected;
    
    // [DEVPKEY_DeviceContainer_IsLocalMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e1c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9d18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe7f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb630, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) device_container_is_local_machine;
    
    // [DEVPKEY_DeviceContainer_IsRebootRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271a98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9d00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17740, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb648, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) device_container_is_reboot_required;
    
    // [DEVPKEY_Device_DebuggerSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e288, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33750, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xedf0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33a78, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) device_debugger_safe;
    
    // [DEVPKEY_Device_DependencyDependents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ec18, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cd78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xec28, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cce0, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) device_dependency_dependents;
    
    // [DEVPKEY_Device_DependencyProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ec30, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cd60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xec10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ccf8, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) device_dependency_providers;
    
    // [DEVPKEY_Device_DevNodeStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e7c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xca00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf520, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc350, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) device_dev_node_status;
    
    // [DEVPKEY_Device_DevNodeStatusDeviceDisconnected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dda8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e098, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18980, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e018, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) device_dev_node_status_device_disconnected;
    
    // [DEVPKEY_Device_DevNodeStatusHasProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dd78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e068, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18950, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1dfe8, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) device_dev_node_status_has_problem;
    
    // [DEVPKEY_Device_DevNodeStatusNeedRestart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ddc0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e0b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18998, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e030, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) device_dev_node_status_need_restart;
    
    // [DEVPKEY_Device_DevNodeStatusPrivateProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dd90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e080, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18938, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e000, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) device_dev_node_status_private_problem;
    
    // [DEVPKEY_Device_DevNodeStatusStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dd60, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e050, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18968, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1dfd0, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) device_dev_node_status_started;
    
    // [DEVPKEY_Device_DevType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271d30, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cee0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f8f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ce30, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) device_dev_type;
    
    // [DEVPKEY_Device_DeviceDesc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e220, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb420, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe618, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9e70, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) device_device_desc;
    
    // [DEVPKEY_Device_DHP_Rebalance_Policy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2810d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33798, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f508, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33ad8, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) device_dhp_rebalance_policy;
    
    // [DEVPKEY_Device_Driver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271e50, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cfa0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f9b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cf20, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) device_driver;
    
    // [DEVPKEY_Device_DriverCoInstallers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eb28, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e460, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18f98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e3b0, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) device_driver_co_installers;
    
    // [DEVPKEY_Device_DriverDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ec00, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa2b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x110b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb1f0, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) device_driver_date;
    
    // [DEVPKEY_Device_DriverDesc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ebd0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb720, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe908, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa130, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) device_driver_desc;
    
    // [DEVPKEY_Device_DriverExtendedInfs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280f38, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e220, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeb78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e560, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) device_driver_extended_infs;
    
    // [DEVPKEY_Device_DriverIncludedConfigs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280f20, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e988, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeb60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ecc8, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) device_driver_included_configs;
    
    // [DEVPKEY_Device_DriverIncludedInfs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e918, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e178, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeb48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e0f8, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) device_driver_included_infs;
    
    // [DEVPKEY_Device_DriverInfPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ebb8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa240, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11080, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb180, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) device_driver_inf_path;
    
    // [DEVPKEY_Device_DriverInfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eba0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb708, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe8f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa118, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) device_driver_inf_section;
    
    // [DEVPKEY_Device_DriverInfSectionExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eb88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e478, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18fb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e3f8, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) device_driver_inf_section_ext;
    
    // [DEVPKEY_Device_DriverLogoLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281028, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e400, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18f38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e380, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) device_driver_logo_level;
    
    // [DEVPKEY_Device_DriverNodeStrongName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280fb0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb6f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe848, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa100, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) device_driver_node_strong_name;
    
    // [DEVPKEY_Device_DriverProblemDesc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e5a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb510, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe740, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9f50, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) device_driver_problem_desc;
    
    // [DEVPKEY_Device_DriverPropPageProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eb40, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e448, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18f80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e3e0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) device_driver_prop_page_provider;
    
    // [DEVPKEY_Device_DriverProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eb58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb6d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe8d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa0e8, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) device_driver_provider;
    
    // [DEVPKEY_Device_DriverRank]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281040, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb6c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe8c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa0d0, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) device_driver_rank;
    
    // [DEVPKEY_Device_DriverVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ebe8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb6a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe8a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa0b8, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) device_driver_version;
    
    // [DEVPKEY_Device_EjectionRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e700, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb348, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe520, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d98, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) device_ejection_relations;
    
    // [DEVPKEY_Device_EnumeratorName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e820, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cef8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f908, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cea8, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) device_enumerator_name;
    
    // [DEVPKEY_Device_Exclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271d18, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ce98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f8a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ce48, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) device_exclusive;
    
    // [DEVPKEY_Device_ExtendedConfigurationIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281088, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33780, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeb18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33ac0, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) device_extended_configuration_ids;
    
    // [DEVPKEY_Device_FirstInstallDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281058, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa1b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10e88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb0f0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) device_first_install_date;
    
    // [DEVPKEY_Device_FriendlyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e208, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb390, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf628, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9de0, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) device_friendly_name;
    
    // [DEVPKEY_Device_FriendlyNameAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261990, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa0e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf4c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb050, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) device_friendly_name_attributes;
    
    // [DEVPKEY_Device_GenericDriverInstalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281010, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e3e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18f20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e350, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) device_generic_driver_installed;
    
    // [DEVPKEY_Device_HardwareConfigurationIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e078, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb4b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe658, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9f08, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) device_hardware_configuration_index;
    
    // [DEVPKEY_Device_HardwareIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e868, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa0c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12368, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb038, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) device_hardware_ids;
    
    // [DEVPKEY_Device_HasProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e748, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb288, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf610, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9cc8, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) device_has_problem;
    
    // [DEVPKEY_DeviceId_DriverInfMatches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280da0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9e40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf180, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xad98, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) device_id_driver_inf_matches;
    
    // [DEVPKEY_DeviceId_DriverInfNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e9e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9e58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe440, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xadb0, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) device_id_driver_inf_names;
    
    // [DEVPKEY_Device_InLocalMachineContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e718, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb330, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe538, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d80, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) device_in_local_machine_container;
    
    // [DEVPKEY_Device_InstallDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281070, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa1f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10ec0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb130, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) device_install_date;
    
    // [DEVPKEY_Device_InstallError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e060, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa080, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfdd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaff0, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) device_install_error;
    
    // [DEVPKEY_Device_InstallFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271c40, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1c810, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeb00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c790, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) device_install_flags;
    
    // [DEVPKEY_Device_InstallState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271c70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cdf0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f800, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cd88, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) device_install_state;
    
    // [DEVPKEY_Device_InstanceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e938, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9d68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf538, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xacc0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) device_instance_id;
    
    // [DEVPKEY_DeviceInterfaceClass_DefaultInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e890, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa188, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf438, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb0c8, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) device_interface_class_default_interface;
    
    // [DEVPKEY_DeviceInterface_ClassGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e980, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9e10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf1c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xad68, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) device_interface_class_guid;
    
    // [DEVPKEY_DeviceInterfaceClass_Name]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280fe0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33768, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f4f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33aa8, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) device_interface_class_name;
    
    // [DEVPKEY_DeviceInterface_Enabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ea40, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc1d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf640, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xadc8, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) device_interface_enabled;
    
    // [DEVPKEY_DeviceInterface_FriendlyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ea58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc1e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfb88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xbb30, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) device_interface_friendly_name;
    
    // [DEVPKEY_DeviceInterface_ReferenceString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271c58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cd48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18db8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ccc8, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) device_interface_reference_string;
    
    // [DEVPKEY_Device_IsConnected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e6d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb3c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe4e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9e10, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) device_is_connected;
    
    // [DEVPKEY_Device_IsPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e790, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb2d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf568, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d20, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) device_is_present;
    
    // [DEVPKEY_Device_IsRebootRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e548, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb360, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf4b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9db0, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) device_is_reboot_required;
    
    // [DEVPKEY_Device_LastArrivalDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e0e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb4e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe6e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9f20, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) device_last_arrival_date;
    
    // [DEVPKEY_Device_LastKnownParent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e560, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbe98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe4b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb8d0, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) device_last_known_parent;
    
    // [DEVPKEY_Device_LastRemovalDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e490, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb488, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe698, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9ed8, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) device_last_removal_date;
    
    // [DEVPKEY_Device_LegacyBusType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271d90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cf28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f938, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cec0, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) device_legacy_bus_type;
    
    // [DEVPKEY_Device_LocationInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271e20, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cf88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f998, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cef0, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) device_location_info;
    
    // [DEVPKEY_Device_LocationPaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e1b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb600, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe7e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa020, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) device_location_paths;
    
    // [DEVPKEY_Device_LowerFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271dc0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9de0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf498, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xad38, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) device_lower_filters;
    
    // [DEVPKEY_Device_Manufacturer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271e38, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb690, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe890, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa0a0, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) device_manufacturer;
    
    // [DEVPKEY_Device_MatchingDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eb70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb678, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe878, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa088, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) device_matching_device_id;
    
    // [DEVPKEY_Device_MatchingTargetComputerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280f08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ec18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeae8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ef58, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) device_matching_target_computer_id;
    
    // [DEVPKEY_Device_MigrationRank]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280d88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ef40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d3b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f280, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) device_migration_rank;
    
    // [DEVPKEY_Device_Numa_Node]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2810b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33738, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f4d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33a90, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) device_numa_node;
    
    // [DEVPKEY_Device_Numa_Proximity_Domain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e0a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9fa8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe670, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaf18, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) device_numa_proximity_domain;
    
    // [DEVPKEY_Device_Parent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e7d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb378, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf580, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9dc8, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) device_parent;
    
    // [DEVPKEY_Device_PDOName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271e08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cf70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f980, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cf08, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) device_pdo_name;
    
    // [DEVPKEY_Device_PendingConfigurationIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280f80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e810, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xea08, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eb50, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) device_pending_configuration_ids;
    
    // [DEVPKEY_Device_PowerData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271cb8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ce38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f848, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cde8, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) device_power_data;
    
    // [DEVPKEY_Device_PowerRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e730, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb270, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf5f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9cb0, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) device_power_relations;
    
    // [DEVPKEY_Device_PresenceNotForDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e638, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb4a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe640, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9ef0, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) device_presence_not_for_device;
    
    // [DEVPKEY_Device_ProblemCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e760, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc9e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf5c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc338, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) device_problem_code;
    
    // [DEVPKEY_Device_ProblemStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ec60, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb838, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe9f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa248, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) device_problem_status;
    
    // [DEVPKEY_Device_ProblemStatusOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280fc8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb8e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10e70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa2e0, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) device_problem_status_override;
    
    // [DEVPKEY_Device_RemovalPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e850, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ce50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f860, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cda0, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) device_removal_policy;
    
    // [DEVPKEY_Device_RemovalPolicyDefault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271ca0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ce08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f818, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cdb8, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) device_removal_policy_default;
    
    // [DEVPKEY_Device_RemovalPolicyOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271c88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ce20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f830, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cd70, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) device_removal_policy_override;
    
    // [DEVPKEY_Device_RemovalRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e7a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb2b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf550, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d08, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) device_removal_relations;
    
    // [DEVPKEY_Device_Reported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260998, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa330, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfc58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb270, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) device_reported;
    
    // [DEVPKEY_Device_ReportedDeviceIdsHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e7f0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb3d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf5b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9e28, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) device_reported_device_ids_hash;
    
    // [DEVPKEY_Device_RequestConfigurationIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280f68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e4c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xead0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e808, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) device_request_configuration_ids;
    
    // [DEVPKEY_Device_ResourcePickerExceptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eaf8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e430, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18f68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e398, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) device_resource_picker_exceptions;
    
    // [DEVPKEY_Device_ResourcePickerTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eb10, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e418, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18f50, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e3c8, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) device_resource_picker_tags;
    
    // [DEVPKEY_Device_RestrictedSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e968, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9d98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe580, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xacf0, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) device_restricted_sd;
    
    // [DEVPKEY_Device_RollbackDriverNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280f98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f0b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeab8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f3f0, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) device_rollback_driver_node;
    
    // [DEVPKEY_Device_SafeRemovalRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e808, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb2a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf5e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9ce0, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) device_safe_removal_required;
    
    // [DEVPKEY_Device_SafeRemovalRequiredOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e6a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc9b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe5d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc308, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) device_safe_removal_required_override;
    
    // [DEVPKEY_Device_Security]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271d60, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cf10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f920, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ce60, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) device_security;
    
    // [DEVPKEY_Device_SecuritySDS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271d48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cec8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f8d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ce78, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) device_security_sds;
    
    // [DEVPKEY_Device_Service]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271e68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa228, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11098, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb168, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) device_service;
    
    // [DEVPKEY_Device_SessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e950, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9d80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf168, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xacd8, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) device_session_id;
    
    // [DEVPKEY_Device_Siblings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ec90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cd90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xea40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cd40, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) device_siblings;
    
    // [DEVPKEY_Device_Stack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ec48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb820, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe990, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa230, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) device_stack;
    
    // [DEVPKEY_Device_TransportRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ec78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cda8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xebf8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cd10, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) device_transport_relations;
    
    // [DEVPKEY_Device_UINumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271df0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cf58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f968, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ced8, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) device_ui_number;
    
    // [DEVPKEY_Device_UINumberDescFormat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271cd0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ce80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1f890, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cdd0, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) device_ui_number_desc_format;
    
    // [DEVPKEY_Device_UpperFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271dd8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9df8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf450, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xad50, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) device_upper_filters;
    
    // [DEVPKEY_Device_UserSelectedDriverInstalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280ef0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e1f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18b48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e170, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) device_user_selected_driver_installed;
    
    // [DEVPKEY_DriverDatabase_AccessMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271be0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1c798, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18ab8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c718, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) driver_database_access_mask;
    
    // [DEVPKEY_DriverDatabase_ConfigMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260ab0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd7d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12308, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd3e8, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) driver_database_config_mode;
    
    // [DEVPKEY_DriverDatabase_ConfigOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260a98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd7b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12320, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd3d0, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) driver_database_config_options;
    
    // [DEVPKEY_DriverDatabase_Disabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271bf8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1c7c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18b78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c748, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) driver_database_disabled;
    
    // [DEVPKEY_DriverDatabase_FilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280e78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e2a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17b60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e5e8, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) driver_database_file_path;
    
    // [DEVPKEY_DriverDatabase_LoadStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271bc8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1c780, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18a70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c700, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) driver_database_load_status;
    
    // [DEVPKEY_DriverDatabase_Loaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271c28, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1c7f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe290, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c778, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) driver_database_loaded;
    
    // [DEVPKEY_DriverDatabase_OemDriverInfFileMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279758, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e010, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17b00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1df90, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) driver_database_oem_driver_inf_file_map;
    
    // [DEVPKEY_DriverDatabase_ProcessorArchitecture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279770, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e028, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17ae8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1dfa8, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) driver_database_processor_architecture;
    
    // [DEVPKEY_DriverDatabase_RegistryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280e60, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f5a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17b78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f8e8, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) driver_database_registry_path;
    
    // [DEVPKEY_DriverDatabase_Selected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271c10, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1c7e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18b90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1c760, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) driver_database_selected;
    
    // [DEVPKEY_DriverDatabase_UnloadTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e270, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd888, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12200, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd4a0, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) driver_database_unload_timeout;
    
    // [DEVPKEY_DriverDatabase_Updated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260a80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd7a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12338, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd3b8, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) driver_database_updated;
    
    // [DEVPKEY_DriverDatabase_Version]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e258, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb8f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe2f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa2f8, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) driver_database_version;
    
    // [DEVPKEY_DriverFile_DriverInfName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280dd0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e0a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17db8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e3e8, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) driver_file_driver_inf_name;
    
    // [DEVPKEY_DriverFile_SubDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280db8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f4e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17dd0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f820, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) driver_file_sub_directory;
    
    // [DEVPKEY_DriverInfFile_ActiveConfigurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e2b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1aed8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17d88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ae58, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) driver_inf_file_active_configurations;
    
    // [DEVPKEY_DriverInfFile_ActiveDriverPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e2d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9f38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11050, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaea8, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) driver_inf_file_active_driver_package;
    
    // [DEVPKEY_DriverInfFile_DriverPackages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e2f0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1af00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17d70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ae80, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) driver_inf_file_driver_packages;
    
    // [DEVPKEY_DriverInfFile_Locked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e278, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1aea0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17da0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ae20, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) driver_inf_file_locked;
    
    // [DEVPKEY_DriverPackage_BootCritical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e050, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1acc8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17c38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ac48, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) driver_package_boot_critical;
    
    // [DEVPKEY_DriverPackage_ClassGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e0e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xca60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10ef0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc3b0, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) driver_package_class_guid;
    
    // [DEVPKEY_DriverPackage_ClassVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26de40, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ab18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17ce0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1aa98, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) driver_package_class_version;
    
    // [DEVPKEY_DriverPackage_Configurable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280e48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb8c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe248, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa2c8, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) driver_package_configurable;
    
    // [DEVPKEY_DriverPackage_ConfigurableFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e018, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbad0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe2c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa4d0, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) driver_package_configurable_flags;
    
    // [DEVPKEY_DriverPackage_ConfigurableOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dfd8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbab8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe2a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa4b8, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) driver_package_configurable_override;
    
    // [DEVPKEY_DriverPackage_ConfigurationScopes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280e18, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f360, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d888, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f6a0, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) driver_package_configuration_scopes;
    
    // [DEVPKEY_DriverPackage_Configurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280e30, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f2e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d810, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f628, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) driver_package_configurations;
    
    // [DEVPKEY_DriverPackage_DriverDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e0b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9ec0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10fd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xae30, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) driver_package_driver_date;
    
    // [DEVPKEY_DriverPackage_DriverInfName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e250, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ae78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17b90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1adf8, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) driver_package_driver_inf_name;
    
    // [DEVPKEY_DriverPackage_DriverVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e088, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9ed8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10ff0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xae48, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) driver_package_driver_version;
    
    // [DEVPKEY_DriverPackage_ExtensionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dfa0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9f08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11020, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xae78, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) driver_package_extension_id;
    
    // [DEVPKEY_DriverPackage_F6]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e178, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1adb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17bd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ad30, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) driver_package_f6;
    
    // [DEVPKEY_DriverPackage_ImportDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26de70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ab48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17cc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1aac8, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) driver_package_import_date;
    
    // [DEVPKEY_DriverPackage_Inbox]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e200, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ae38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe230, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1adb8, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) driver_package_inbox;
    
    // [DEVPKEY_DriverPackage_Locale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e140, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ad58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17c08, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1acd8, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) driver_package_locale;
    
    // [DEVPKEY_DriverPackage_LockLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26df40, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ac00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17c68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ab80, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) driver_package_lock_level;
    
    // [DEVPKEY_DriverPackage_NeedsReconfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26de08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xca30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10f20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc380, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) driver_package_needs_reconfig;
    
    // [DEVPKEY_DriverPackage_OriginalInfName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e238, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa298, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10f60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb1d8, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) driver_package_original_inf_name;
    
    // [DEVPKEY_DriverPackage_ProcessorArchitecture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e158, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ad90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17bf0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ad10, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) driver_package_processor_architecture;
    
    // [DEVPKEY_DriverPackage_ProductName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26df10, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1abd0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17c98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ab50, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) driver_package_product_name;
    
    // [DEVPKEY_DriverPackage_ProviderName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e118, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xca48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10f08, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc398, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) driver_package_provider_name;
    
    // [DEVPKEY_DriverPackage_Published]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e1d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ae10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17ba8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ad90, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) driver_package_published;
    
    // [DEVPKEY_DriverPackage_SignerName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e038, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbf70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe278, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb8b8, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) driver_package_signer_name;
    
    // [DEVPKEY_DriverPackage_SignerScore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25eb20, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9ef0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11008, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xae60, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) driver_package_signer_score;
    
    // [DEVPKEY_DriverPackage_SourceMediaPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260ca0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb850, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe978, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa260, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) driver_package_source_media_path;
    
    // [DEVPKEY_DriverPackage_StatusFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26df70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ac30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17c50, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1abb0, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) driver_package_status_flags;
    
    // [DEVPKEY_DriverPackage_SystemCritical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dea8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ab80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17cb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ab00, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) driver_package_system_critical;
    
    // [DEVPKEY_DriverPackage_TargetComputerIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26dee8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9ea8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10fc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xae18, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) driver_package_target_computer_ids;
    
    // [DEVPKEY_NAME]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e530, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb318, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf598, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d68, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) name;
    
    // [DEVPKEY_Spare_Memory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2810e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f800, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3dd28, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2fb40, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) spare_memory;
    
    // [DEVPKEY_Spare_Processor_Apic_Id]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281100, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f818, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3dd40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2fb58, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) spare_processor_apic_id;
    
    // [DEVPKEY_WIA_DeviceType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2619a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb878, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe9a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa288, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) wia_device_type;
    
    // [DEVPKEY_DeviceInterface_HID_WakeCapable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .rdata:0x268ea0, 0x27ef0 bytes
    //
    _p17(sdk::unknown_ptr) device_interface_hid_wake_capable;
    
    // [DEVPKEY_InteractiveControl_DeviceType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2eed20, 0x13864 bytes
    // win32kfull.sys .rdata:0x2f3888, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4270, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3858, 0x1596d bytes
    //
    _p18(sdk::unknown_ptr) interactive_control_device_type;
    
    // [DEVPKEY_PciDevice_D3ColdSupport]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2c458, 0x1cf0 bytes
    //
    _p19(sdk::unknown_ptr) pci_device_d3_cold_support;
    
    // [DEVPKEY_PciDevice_OnPostPath]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2b320, 0x1cf0 bytes
    // pci.sys .rdata:0x2db88, 0x1cf0 bytes
    // pci.sys .rdata:0x2a6d0, 0x1cf0 bytes
    //
    _p20(sdk::unknown_ptr) pci_device_on_post_path;
    
    // [DEVPKEY_PciDevice_SupportedLinkSubState]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2b338, 0x1cf0 bytes
    // pci.sys .rdata:0x2dba0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a6e8, 0x1cf0 bytes
    //
    _p21(sdk::unknown_ptr) pci_device_supported_link_sub_state;
    
    // [DEVPKEY_PciDevice_AcsCapabilityRegister]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bd28, 0x1d08 bytes
    // pci.sys .rdata:0x2b398, 0x1cf0 bytes
    // pci.sys .rdata:0x2dbe8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a748, 0x1cf0 bytes
    //
    _p22(sdk::unknown_ptr) pci_device_acs_capability_register;
    
    // [DEVPKEY_PciDevice_AcsCompatibleUpHierarchy]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bd40, 0x1d08 bytes
    // pci.sys .rdata:0x2b3b0, 0x1cf0 bytes
    // pci.sys .rdata:0x2dc00, 0x1cf0 bytes
    // pci.sys .rdata:0x2a760, 0x1cf0 bytes
    //
    _p23(sdk::unknown_ptr) pci_device_acs_compatible_up_hierarchy;
    
    // [DEVPKEY_PciDevice_AcsSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bd70, 0x1d08 bytes
    // pci.sys .rdata:0x2b3e0, 0x1cf0 bytes
    // pci.sys .rdata:0x2dc30, 0x1cf0 bytes
    // pci.sys .rdata:0x2a790, 0x1cf0 bytes
    //
    _p24(sdk::unknown_ptr) pci_device_acs_support;
    
    // [DEVPKEY_PciDevice_AERCapabilityPresent]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1be60, 0x1d08 bytes
    // pci.sys .rdata:0x2b4d0, 0x1cf0 bytes
    // pci.sys .rdata:0x2dd20, 0x1cf0 bytes
    // pci.sys .rdata:0x2a880, 0x1cf0 bytes
    //
    _p25(sdk::unknown_ptr) pci_device_aer_capability_present;
    
    // [DEVPKEY_PciDevice_AriSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bd58, 0x1d08 bytes
    // pci.sys .rdata:0x2b3c8, 0x1cf0 bytes
    // pci.sys .rdata:0x2dc18, 0x1cf0 bytes
    // pci.sys .rdata:0x2a778, 0x1cf0 bytes
    //
    _p26(sdk::unknown_ptr) pci_device_ari_support;
    
    // [DEVPKEY_PciDevice_AtomicsSupported]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bcf8, 0x1d08 bytes
    // pci.sys .rdata:0x2b350, 0x1cf0 bytes
    // pci.sys .rdata:0x2dbb8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a700, 0x1cf0 bytes
    //
    _p27(sdk::unknown_ptr) pci_device_atomics_supported;
    
    // [DEVPKEY_PciDevice_AtsSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bd10, 0x1d08 bytes
    // pci.sys .rdata:0x2b380, 0x1cf0 bytes
    // pci.sys .rdata:0x2dbd0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a730, 0x1cf0 bytes
    //
    _p28(sdk::unknown_ptr) pci_device_ats_support;
    
    // [DEVPKEY_PciDevice_BarTypes]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1be78, 0x1d08 bytes
    // pci.sys .rdata:0x2b4e8, 0x1cf0 bytes
    // pci.sys .rdata:0x2dd38, 0x1cf0 bytes
    // pci.sys .rdata:0x2a898, 0x1cf0 bytes
    //
    _p29(sdk::unknown_ptr) pci_device_bar_types;
    
    // [DEVPKEY_PciDevice_BaseClass]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bfb0, 0x1d08 bytes
    // pci.sys .rdata:0x2b620, 0x1cf0 bytes
    // pci.sys .rdata:0x2de70, 0x1cf0 bytes
    // pci.sys .rdata:0x2a9d0, 0x1cf0 bytes
    //
    _p30(sdk::unknown_ptr) pci_device_base_class;
    
    // [DEVPKEY_PciDevice_Correctable_Error_Mask]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1be00, 0x1d08 bytes
    // pci.sys .rdata:0x2b470, 0x1cf0 bytes
    // pci.sys .rdata:0x2dcc0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a820, 0x1cf0 bytes
    //
    _p31(sdk::unknown_ptr) pci_device_correctable_error_mask;
    
    // [DEVPKEY_PciDevice_CurrentLinkSpeed]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bf20, 0x1d08 bytes
    // pci.sys .rdata:0x2b590, 0x1cf0 bytes
    // pci.sys .rdata:0x2dde0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a940, 0x1cf0 bytes
    //
    _p32(sdk::unknown_ptr) pci_device_current_link_speed;
    
    // [DEVPKEY_PciDevice_CurrentLinkWidth]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bf08, 0x1d08 bytes
    // pci.sys .rdata:0x2b578, 0x1cf0 bytes
    // pci.sys .rdata:0x2ddc8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a928, 0x1cf0 bytes
    //
    _p33(sdk::unknown_ptr) pci_device_current_link_width;
    
    // [DEVPKEY_PciDevice_CurrentPayloadSize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bf68, 0x1d08 bytes
    // pci.sys .rdata:0x2b5d8, 0x1cf0 bytes
    // pci.sys .rdata:0x2de28, 0x1cf0 bytes
    // pci.sys .rdata:0x2a988, 0x1cf0 bytes
    //
    _p34(sdk::unknown_ptr) pci_device_current_payload_size;
    
    // [DEVPKEY_PciDevice_CurrentSpeedAndMode]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bfc8, 0x1d08 bytes
    // pci.sys .rdata:0x2b638, 0x1cf0 bytes
    // pci.sys .rdata:0x2de88, 0x1cf0 bytes
    // pci.sys .rdata:0x2a9e8, 0x1cf0 bytes
    //
    _p35(sdk::unknown_ptr) pci_device_current_speed_and_mode;
    
    // [DEVPKEY_PciDevice_ECRC_Errors]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bde8, 0x1d08 bytes
    // pci.sys .rdata:0x2b458, 0x1cf0 bytes
    // pci.sys .rdata:0x2dca8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a808, 0x1cf0 bytes
    //
    _p36(sdk::unknown_ptr) pci_device_ecrc_errors;
    
    // [DEVPKEY_PciDevice_Error_Reporting]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bdd0, 0x1d08 bytes
    // pci.sys .rdata:0x2b440, 0x1cf0 bytes
    // pci.sys .rdata:0x2dc90, 0x1cf0 bytes
    // pci.sys .rdata:0x2a7f0, 0x1cf0 bytes
    //
    _p37(sdk::unknown_ptr) pci_device_error_reporting;
    
    // [DEVPKEY_PciDevice_ExpressSpecVersion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bec0, 0x1d08 bytes
    // pci.sys .rdata:0x2b530, 0x1cf0 bytes
    // pci.sys .rdata:0x2dd80, 0x1cf0 bytes
    // pci.sys .rdata:0x2a8e0, 0x1cf0 bytes
    //
    _p38(sdk::unknown_ptr) pci_device_express_spec_version;
    
    // [DEVPKEY_PciDevice_FirmwareErrorHandling]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1be48, 0x1d08 bytes
    // pci.sys .rdata:0x2b4b8, 0x1cf0 bytes
    // pci.sys .rdata:0x2dd08, 0x1cf0 bytes
    // pci.sys .rdata:0x2a868, 0x1cf0 bytes
    //
    _p39(sdk::unknown_ptr) pci_device_firmware_error_handling;
    
    // [DEVPKEY_PciDevice_InterruptMessageMaximum]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1be90, 0x1d08 bytes
    // pci.sys .rdata:0x2b500, 0x1cf0 bytes
    // pci.sys .rdata:0x2dd50, 0x1cf0 bytes
    // pci.sys .rdata:0x2a8b0, 0x1cf0 bytes
    //
    _p40(sdk::unknown_ptr) pci_device_interrupt_message_maximum;
    
    // [DEVPKEY_PciDevice_InterruptSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bea8, 0x1d08 bytes
    // pci.sys .rdata:0x2b518, 0x1cf0 bytes
    // pci.sys .rdata:0x2dd68, 0x1cf0 bytes
    // pci.sys .rdata:0x2a8c8, 0x1cf0 bytes
    //
    _p41(sdk::unknown_ptr) pci_device_interrupt_support;
    
    // [DEVPKEY_PciDevice_MaxLinkSpeed]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bef0, 0x1d08 bytes
    // pci.sys .rdata:0x2b560, 0x1cf0 bytes
    // pci.sys .rdata:0x2ddb0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a910, 0x1cf0 bytes
    //
    _p42(sdk::unknown_ptr) pci_device_max_link_speed;
    
    // [DEVPKEY_PciDevice_MaxLinkWidth]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bed8, 0x1d08 bytes
    // pci.sys .rdata:0x2b548, 0x1cf0 bytes
    // pci.sys .rdata:0x2dd98, 0x1cf0 bytes
    // pci.sys .rdata:0x2a8f8, 0x1cf0 bytes
    //
    _p43(sdk::unknown_ptr) pci_device_max_link_width;
    
    // [DEVPKEY_PciDevice_MaxPayloadSize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bf50, 0x1d08 bytes
    // pci.sys .rdata:0x2b5c0, 0x1cf0 bytes
    // pci.sys .rdata:0x2de10, 0x1cf0 bytes
    // pci.sys .rdata:0x2a970, 0x1cf0 bytes
    //
    _p44(sdk::unknown_ptr) pci_device_max_payload_size;
    
    // [DEVPKEY_PciDevice_MaxReadRequestSize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bf38, 0x1d08 bytes
    // pci.sys .rdata:0x2b5a8, 0x1cf0 bytes
    // pci.sys .rdata:0x2ddf8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a958, 0x1cf0 bytes
    //
    _p45(sdk::unknown_ptr) pci_device_max_read_request_size;
    
    // [DEVPKEY_PciDevice_ProgIf]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bf80, 0x1d08 bytes
    // pci.sys .rdata:0x2b5f0, 0x1cf0 bytes
    // pci.sys .rdata:0x2de40, 0x1cf0 bytes
    // pci.sys .rdata:0x2a9a0, 0x1cf0 bytes
    //
    _p46(sdk::unknown_ptr) pci_device_prog_if;
    
    // [DEVPKEY_PciDevice_RequiresReservedMemoryRegion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bba0, 0x1d08 bytes
    // pci.sys .rdata:0x2b368, 0x1cf0 bytes
    // pci.sys .rdata:0x2db70, 0x1cf0 bytes
    // pci.sys .rdata:0x2a718, 0x1cf0 bytes
    //
    _p47(sdk::unknown_ptr) pci_device_requires_reserved_memory_region;
    
    // [DEVPKEY_PciDevice_RootError_Reporting]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bdb8, 0x1d08 bytes
    // pci.sys .rdata:0x2b428, 0x1cf0 bytes
    // pci.sys .rdata:0x2dc78, 0x1cf0 bytes
    // pci.sys .rdata:0x2a7d8, 0x1cf0 bytes
    //
    _p48(sdk::unknown_ptr) pci_device_root_error_reporting;
    
    // [DEVPKEY_PciDevice_S0WakeupSupported]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bda0, 0x1d08 bytes
    // pci.sys .rdata:0x2b410, 0x1cf0 bytes
    // pci.sys .rdata:0x2dc60, 0x1cf0 bytes
    // pci.sys .rdata:0x2a7c0, 0x1cf0 bytes
    //
    _p49(sdk::unknown_ptr) pci_device_s0_wakeup_supported;
    
    // [DEVPKEY_PciDevice_SriovSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bd88, 0x1d08 bytes
    // pci.sys .rdata:0x2b3f8, 0x1cf0 bytes
    // pci.sys .rdata:0x2dc48, 0x1cf0 bytes
    // pci.sys .rdata:0x2a7a8, 0x1cf0 bytes
    //
    _p50(sdk::unknown_ptr) pci_device_sriov_support;
    
    // [DEVPKEY_PciDevice_SubClass]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bf98, 0x1d08 bytes
    // pci.sys .rdata:0x2b608, 0x1cf0 bytes
    // pci.sys .rdata:0x2de58, 0x1cf0 bytes
    // pci.sys .rdata:0x2a9b8, 0x1cf0 bytes
    //
    _p51(sdk::unknown_ptr) pci_device_sub_class;
    
    // [DEVPKEY_PciDevice_Uncorrectable_Error_Mask]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1be30, 0x1d08 bytes
    // pci.sys .rdata:0x2b4a0, 0x1cf0 bytes
    // pci.sys .rdata:0x2dcf0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a850, 0x1cf0 bytes
    //
    _p52(sdk::unknown_ptr) pci_device_uncorrectable_error_mask;
    
    // [DEVPKEY_PciDevice_Uncorrectable_Error_Severity]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1be18, 0x1d08 bytes
    // pci.sys .rdata:0x2b488, 0x1cf0 bytes
    // pci.sys .rdata:0x2dcd8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a838, 0x1cf0 bytes
    //
    _p53(sdk::unknown_ptr) pci_device_uncorrectable_error_severity;
    
    // [DEVPKEY_PciRootBus_ASPMSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c210, 0x1d08 bytes
    // pci.sys .rdata:0x2b260, 0x1cf0 bytes
    // pci.sys .rdata:0x2dfa8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a5a0, 0x1cf0 bytes
    //
    _p54(sdk::unknown_ptr) pci_root_bus_aspm_support;
    
    // [DEVPKEY_PciRootBus_ClockPowerManagementSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c1f8, 0x1d08 bytes
    // pci.sys .rdata:0x2b248, 0x1cf0 bytes
    // pci.sys .rdata:0x2df90, 0x1cf0 bytes
    // pci.sys .rdata:0x2a588, 0x1cf0 bytes
    //
    _p55(sdk::unknown_ptr) pci_root_bus_clock_power_management_support;
    
    // [DEVPKEY_PciRootBus_CurrentSpeedAndMode]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c2a0, 0x1d08 bytes
    // pci.sys .rdata:0x2b2f0, 0x1cf0 bytes
    // pci.sys .rdata:0x2e038, 0x1cf0 bytes
    // pci.sys .rdata:0x2a630, 0x1cf0 bytes
    //
    _p56(sdk::unknown_ptr) pci_root_bus_current_speed_and_mode;
    
    // [DEVPKEY_PciRootBus_DeviceIDMessagingCapable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c270, 0x1d08 bytes
    // pci.sys .rdata:0x2b2c0, 0x1cf0 bytes
    // pci.sys .rdata:0x2e008, 0x1cf0 bytes
    // pci.sys .rdata:0x2a600, 0x1cf0 bytes
    //
    _p57(sdk::unknown_ptr) pci_root_bus_device_id_messaging_capable;
    
    // [DEVPKEY_PciRootBus_ExtendedConfigAvailable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c240, 0x1d08 bytes
    // pci.sys .rdata:0x2b290, 0x1cf0 bytes
    // pci.sys .rdata:0x2dfd8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a5d0, 0x1cf0 bytes
    //
    _p58(sdk::unknown_ptr) pci_root_bus_extended_config_available;
    
    // [DEVPKEY_PciRootBus_ExtendedPCIConfigOpRegionSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c228, 0x1d08 bytes
    // pci.sys .rdata:0x2b278, 0x1cf0 bytes
    // pci.sys .rdata:0x2dfc0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a5b8, 0x1cf0 bytes
    //
    _p59(sdk::unknown_ptr) pci_root_bus_extended_pci_config_op_region_support;
    
    // [DEVPKEY_PciRootBus_MSISupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c1c8, 0x1d08 bytes
    // pci.sys .rdata:0x2b218, 0x1cf0 bytes
    // pci.sys .rdata:0x2df60, 0x1cf0 bytes
    // pci.sys .rdata:0x2a558, 0x1cf0 bytes
    //
    _p60(sdk::unknown_ptr) pci_root_bus_msi_support;
    
    // [DEVPKEY_PciRootBus_NativePciExpressControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c138, 0x1d08 bytes
    // pci.sys .rdata:0x2b188, 0x1cf0 bytes
    // pci.sys .rdata:0x2ded0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a4c8, 0x1cf0 bytes
    //
    _p61(sdk::unknown_ptr) pci_root_bus_native_pci_express_control;
    
    // [DEVPKEY_PciRootBus_PCIExpressAERControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c168, 0x1d08 bytes
    // pci.sys .rdata:0x2b1b8, 0x1cf0 bytes
    // pci.sys .rdata:0x2df00, 0x1cf0 bytes
    // pci.sys .rdata:0x2a4f8, 0x1cf0 bytes
    //
    _p62(sdk::unknown_ptr) pci_root_bus_pci_express_aer_control;
    
    // [DEVPKEY_PciRootBus_PCIExpressCapabilityControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c150, 0x1d08 bytes
    // pci.sys .rdata:0x2b1a0, 0x1cf0 bytes
    // pci.sys .rdata:0x2dee8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a4e0, 0x1cf0 bytes
    //
    _p63(sdk::unknown_ptr) pci_root_bus_pci_express_capability_control;
    
    // [DEVPKEY_PciRootBus_PCIExpressNativeHotPlugControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c1b0, 0x1d08 bytes
    // pci.sys .rdata:0x2b200, 0x1cf0 bytes
    // pci.sys .rdata:0x2df48, 0x1cf0 bytes
    // pci.sys .rdata:0x2a540, 0x1cf0 bytes
    //
    _p64(sdk::unknown_ptr) pci_root_bus_pci_express_native_hot_plug_control;
    
    // [DEVPKEY_PciRootBus_PCIExpressNativePMEControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c180, 0x1d08 bytes
    // pci.sys .rdata:0x2b1d0, 0x1cf0 bytes
    // pci.sys .rdata:0x2df18, 0x1cf0 bytes
    // pci.sys .rdata:0x2a510, 0x1cf0 bytes
    //
    _p65(sdk::unknown_ptr) pci_root_bus_pci_express_native_pme_control;
    
    // [DEVPKEY_PciRootBus_PCISegmentGroupsSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c1e0, 0x1d08 bytes
    // pci.sys .rdata:0x2b230, 0x1cf0 bytes
    // pci.sys .rdata:0x2df78, 0x1cf0 bytes
    // pci.sys .rdata:0x2a570, 0x1cf0 bytes
    //
    _p66(sdk::unknown_ptr) pci_root_bus_pci_segment_groups_support;
    
    // [DEVPKEY_PciRootBus_SecondaryBusWidth]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c258, 0x1d08 bytes
    // pci.sys .rdata:0x2b2a8, 0x1cf0 bytes
    // pci.sys .rdata:0x2dff0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a5e8, 0x1cf0 bytes
    //
    _p67(sdk::unknown_ptr) pci_root_bus_secondary_bus_width;
    
    // [DEVPKEY_PciRootBus_SecondaryInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c2b8, 0x1d08 bytes
    // pci.sys .rdata:0x2b308, 0x1cf0 bytes
    // pci.sys .rdata:0x2e050, 0x1cf0 bytes
    // pci.sys .rdata:0x2a648, 0x1cf0 bytes
    //
    _p68(sdk::unknown_ptr) pci_root_bus_secondary_interface;
    
    // [DEVPKEY_PciRootBus_SHPCNativeHotPlugControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c198, 0x1d08 bytes
    // pci.sys .rdata:0x2b1e8, 0x1cf0 bytes
    // pci.sys .rdata:0x2df30, 0x1cf0 bytes
    // pci.sys .rdata:0x2a528, 0x1cf0 bytes
    //
    _p69(sdk::unknown_ptr) pci_root_bus_shpc_native_hot_plug_control;
    
    // [DEVPKEY_PciRootBus_SupportedSpeedsAndModes]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c288, 0x1d08 bytes
    // pci.sys .rdata:0x2b2d8, 0x1cf0 bytes
    // pci.sys .rdata:0x2e020, 0x1cf0 bytes
    // pci.sys .rdata:0x2a618, 0x1cf0 bytes
    //
    _p70(sdk::unknown_ptr) pci_root_bus_supported_speeds_and_modes;
    
    // [DEVPKEY_PciRootBus_SystemMsiSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c120, 0x1d08 bytes
    // pci.sys .rdata:0x2b170, 0x1cf0 bytes
    // pci.sys .rdata:0x2deb8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a4b0, 0x1cf0 bytes
    //
    _p71(sdk::unknown_ptr) pci_root_bus_system_msi_support;
    
    // [DEVPKEY_DeviceInterface_HID_WakeScreenOnInputCapable]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x234b0, 0x2bf0 bytes
    //
    _p72(sdk::unknown_ptr) device_interface_hid_wake_screen_on_input_capable;
    
    // [DEVPKEY_DeviceInterface_HID_IsReadOnly]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x161f0, 0x1a48 bytes
    // hidclass.sys .rdata:0x20520, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23520, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20520, 0x2bf0 bytes
    //
    _p73(sdk::unknown_ptr) device_interface_hid_is_read_only;
    
    // [DEVPKEY_DeviceInterface_HID_VersionNumber]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x161a8, 0x1a48 bytes
    // hidclass.sys .rdata:0x204f0, 0x2bf0 bytes
    // hidclass.sys .rdata:0x234f0, 0x2bf0 bytes
    // hidclass.sys .rdata:0x204f0, 0x2bf0 bytes
    //
    _p74(sdk::unknown_ptr) device_interface_hid_version_number;
    
    // [DEVPKEY_DeviceInterface_Restricted]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16248, 0x1a48 bytes
    // hidclass.sys .rdata:0x20480, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23468, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20480, 0x2bf0 bytes
    //
    _p75(sdk::unknown_ptr) device_interface_restricted;
    
    // [DEVPKEY_Device_PostInstallInProgress]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys .rdata:0x7a428, 0x1c8a8 bytes
    //
    _p76(sdk::unknown_ptr) device_post_install_in_progress;
    
    // [DEVPKEY_InfraCast_DeviceAddress]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .rdata:0x3ea60, 0x60098 bytes
    //
    _p77(sdk::unknown_ptr) infra_cast_device_address;
    
    // [DEVPKEY_Monitor_Dpcd_DP_IN_Adapter_Number]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .rdata:0x108aa0, 0x84380 bytes
    //
    _p78(sdk::unknown_ptr) monitor_dpcd_dp_in_adapter_number;
    
    // [DEVPKEY_Monitor_Dpcd_USB4_Driver_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .rdata:0x108a70, 0x84380 bytes
    //
    _p79(sdk::unknown_ptr) monitor_dpcd_usb4_driver_id;
    
    // [DEVPKEY_Monitor_Dpcd_USB4_ROUTER_TOPOLOGY_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .rdata:0x108a88, 0x84380 bytes
    //
    _p80(sdk::unknown_ptr) monitor_dpcd_usb4_router_topology_id;
    
    // [DEVPKEY_WiFiDirect_DeviceAddress]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .rdata:0x3ea78, 0x60098 bytes
    //
    _p81(sdk::unknown_ptr) wi_fi_direct_device_address;
    
    // [DEVPKEY_WiFiDirect_MiracastVersion]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .rdata:0x3ea90, 0x60098 bytes
    //
    _p82(sdk::unknown_ptr) wi_fi_direct_miracast_version;
    
    // [DEVPKEY_Device_InstallInProgress]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x755e8, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8b260, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x75a30, 0x762b0 bytes
    //
    _p83(sdk::unknown_ptr) device_install_in_progress;
    
    // [DEVPKEY_Gpu_IddVirtualMonitorDevice]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x8cb00, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x108730, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x8cac0, 0x762b0 bytes
    //
    _p84(sdk::unknown_ptr) gpu_idd_virtual_monitor_device;
    
    // [DEVPKEY_Gpu_Luid]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x77048, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8dbe0, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x763f8, 0x762b0 bytes
    //
    _p85(sdk::unknown_ptr) gpu_luid;
    
    // [DEVPKEY_Gpu_PhysicalAdapterIndex]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x77030, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8dbc8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x76410, 0x762b0 bytes
    //
    _p86(sdk::unknown_ptr) gpu_physical_adapter_index;
    
    // [DEVPKEY_Gpup_Supports_Guest_Hibernation]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x8cae8, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x108718, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x8caa8, 0x762b0 bytes
    //
    _p87(sdk::unknown_ptr) gpup_supports_guest_hibernation;
    
    // [DEVPKEY_Gpup_Supports_Hot_Driver_Update]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x8cad0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x108700, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x8ca90, 0x762b0 bytes
    //
    _p88(sdk::unknown_ptr) gpup_supports_hot_driver_update;
    
    // [DEVPKEY_Monitor_AdapterLuid]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x773f0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8bcf0, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x76078, 0x762b0 bytes
    //
    _p89(sdk::unknown_ptr) monitor_adapter_luid;
    
    // [DEVPKEY_Monitor_TargetId]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x77408, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8bcd8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x76090, 0x762b0 bytes
    //
    _p90(sdk::unknown_ptr) monitor_target_id;
    
    // [DEVPKEY_DeviceContainer_Manufacturer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3ea48, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x82450, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x107790, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x82510, 0x762b0 bytes
    //
    _p91(sdk::unknown_ptr) device_container_manufacturer;
    
    // [DEVPKEY_DeviceContainer_ModelName]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3ea30, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x82438, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x107778, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x824f8, 0x762b0 bytes
    //
    _p92(sdk::unknown_ptr) device_container_model_name;
    
    // [DEVPKEY_DeviceContainer_ModelNumber]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3ea18, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x82420, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x107760, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x824e0, 0x762b0 bytes
    //
    _p93(sdk::unknown_ptr) device_container_model_number;
};
#include "magic/api.end.hpp"
