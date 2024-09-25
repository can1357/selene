#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.BootIdentifier", boot_identifier, 0x0, 0x80, true, 0x659952edf4897130)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::firmware_type_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.FirmwareType", firmware_type, 0x80, 0x20, true, 0xa7c8226ecdfd16cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.BootFlags", boot_flags, 0xc0, 0x40, true, 0xc8be7e5e003ab64d)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgMenuOsSelection", dbg_menu_os_selection, 0xc0, 0x1, true, 0x93d701c3c92b7bc5, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgHiberBoot", dbg_hiber_boot, 0xc1, 0x1, true, 0x36f03bd0f41f2188, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgSoftBoot", dbg_soft_boot, 0xc2, 0x1, true, 0xd91d21c2f37af4af, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgMeasuredLaunch", dbg_measured_launch, 0xc3, 0x1, true, 0x1b05816e81679f3e, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgMeasuredLaunchCapable", dbg_measured_launch_capable, 0xc4, 0x1, true, 0xee9b38f3796b9873, 1, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgSystemHiveReplace", dbg_system_hive_replace, 0xc5, 0x1, true, 0x40f065b8b7302155, 1, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgMeasuredLaunchSmmProtections", dbg_measured_launch_smm_protections, 0xc6, 0x1, true, 0x687f487f1e93838, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.DbgMeasuredLaunchSmmLevel", dbg_measured_launch_smm_level, 0xc7, 0x7, true, 0xecab039081d0b2f, 7, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif