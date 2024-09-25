#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::collection_state_t), "_PDO_EXTENSION.prevState", prev_state, 0x0, 0x20, true, 0xd1d7bfafe474a1d5)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::collection_state_t), "_PDO_EXTENSION.state", state, 0x20, 0x20, true, 0x39af158aed2aebb6)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PDO_EXTENSION.collectionNum", collection_num, 0x40, 0x20, true, 0x3e49b67fc00d302a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PDO_EXTENSION.collectionIndex", collection_index, 0x60, 0x20, true, 0x7866160824e0ca8)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "_PDO_EXTENSION.removeLock", remove_lock, 0x80, 0x0, true, 0x62bcaf17d0f127f5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PDO_EXTENSION.pdo", pdo, 0x180, 0x40, true, 0x5a87746807eadbdd)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_PDO_EXTENSION.name", name, 0x1c0, 0x40, true, 0x845fa25ff4e5127a)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::hidclass_device_extension_t*), "_PDO_EXTENSION.deviceFdoExt", device_fdo_ext, 0x200, 0x40, true, 0xc13bf5ad72b99862)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_PDO_EXTENSION.systemPowerState", system_power_state, 0x240, 0x20, true, 0xc5c3dd67352e492a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_PDO_EXTENSION.devicePowerState", device_power_state, 0x260, 0x20, true, 0x92d09df2db3c1214)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PDO_EXTENSION.remoteWakeEnabled", remote_wake_enabled, 0x280, 0x8, true, 0x3b7ff02943147c1b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PDO_EXTENSION.remoteWakeSpinLock", remote_wake_spin_lock, 0x2c0, 0x40, true, 0x477ab017aca8687f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PDO_EXTENSION.remoteWakeIrp", remote_wake_irp, 0x300, 0x40, true, 0x818b6927829b6689)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.remoteWakePending", remote_wake_pending, 0x340, 0x20, true, 0x504dd323a7f31656)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PDO_EXTENSION.waitWakeIrp", wait_wake_irp, 0x380, 0x40, true, 0x779c046d838b87d0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum hid::device_object_state_t)>*), "_PDO_EXTENSION.StatusChangeFn", status_change_fn, 0x3c0, 0x40, true, 0xf87677c00dcd74a6)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PDO_EXTENSION.StatusChangeContext", status_change_context, 0x400, 0x40, true, 0x24464b4ca2fbc639)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.openCount", open_count, 0x440, 0x20, true, 0xdeda6ee21fa1080a)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.opensForRead", opens_for_read, 0x460, 0x20, true, 0x6b4660fca4feb88)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.opensForWrite", opens_for_write, 0x480, 0x20, true, 0x181570032d61f66e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.restrictionsForRead", restrictions_for_read, 0x4a0, 0x20, true, 0x721cb139559f7092)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.restrictionsForWrite", restrictions_for_write, 0x4c0, 0x20, true, 0x30fc891b3fbb9af)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.restrictionsForAnyOpen", restrictions_for_any_open, 0x4e0, 0x20, true, 0x7913f19ac994cbe)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PDO_EXTENSION.MouseOrKeyboard", mouse_or_keyboard, 0x800, 0x8, true, 0x63cc27a000c1d017)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PDO_EXTENSION.SessionSecurityEnabled", session_security_enabled, 0x808, 0x8, true, 0xc923951e695e739b)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PDO_EXTENSION.WakeOnSxEnabled", wake_on_sx_enabled, 0x810, 0x8, true, 0x2c4a4b6e2287ba79)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PDO_EXTENSION.S0IdleStopCount", s0_idle_stop_count, 0x840, 0x20, true, 0x832dab02007a95d0)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::wmilib_context_t), "_PDO_EXTENSION.WmiLibInfo", wmi_lib_info, 0x880, 0x0, true, 0xc143e86775dc77b8)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<void*, 2>, 6>), "_PDO_EXTENSION.HandleTypeTracking", handle_type_tracking, 0x500, 0x0, true, 0xbd1d9dbf5aaea317)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PDO_EXTENSION.ClientInputSuppressionRequestsNeeded", client_input_suppression_requests_needed, 0x860, 0x20, true, 0x2cb89e8661d73155)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PDO_EXTENSION.LastStopIdleForIoTime", last_stop_idle_for_io_time, 0xa80, 0x40, true, 0xb37f1a670eed17e5)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PDO_EXTENSION.IdleTimeout", idle_timeout, 0x820, 0x20, true, 0x62a83d53ae730894)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PDO_EXTENSION.Reenumerate", reenumerate, 0x0, 0x0, false, 0xca5babf07cfde88c)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PDO_EXTENSION.ReenumerateReported", reenumerate_reported, 0x0, 0x0, false, 0x3f5c7ed856dc5306)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PDO_EXTENSION.IdleTimeoutInMsec", idle_timeout_in_msec, 0x0, 0x0, false, 0x34888220168e496c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PDO_EXTENSION.WinRtInterfaceRestrictionLevel", win_rt_interface_restriction_level, 0x0, 0x0, false, 0xfb21ff3e9810af25)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#endif