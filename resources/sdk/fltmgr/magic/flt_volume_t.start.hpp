#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_object_t), "_FLT_VOLUME.Base", base, 0x0, 0x80, true, 0xf31452ccd2a69d3)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::flt_volume_flags_t), "_FLT_VOLUME.Flags", flags, 0x180, 0x20, true, 0x5460729fbce0d218)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::flt_filesystem_type_t), "_FLT_VOLUME.FileSystemType", file_system_type, 0x1a0, 0x20, true, 0xa36564810149449e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FLT_VOLUME.DeviceObject", device_object, 0x1c0, 0x40, true, 0x44f11b76c5b73823)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FLT_VOLUME.DiskDeviceObject", disk_device_object, 0x200, 0x40, true, 0x67974ae9ecfda823)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_volume_t*), "_FLT_VOLUME.FrameZeroVolume", frame_zero_volume, 0x240, 0x40, true, 0x3420dab7a2a93bc9)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_volume_t*), "_FLT_VOLUME.VolumeInNextFrame", volume_in_next_frame, 0x280, 0x40, true, 0x6971de1c1659fcfc)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_frame_t*), "_FLT_VOLUME.Frame", frame, 0x2c0, 0x40, true, 0x8a4ece421f703b41)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_VOLUME.DeviceName", device_name, 0x300, 0x80, true, 0xb7b5739adcac3808)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_VOLUME.GuidName", guid_name, 0x380, 0x80, true, 0x6e9ef52b29832c9b)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_VOLUME.CDODeviceName", cdo_device_name, 0x400, 0x80, true, 0xbffc0c728415fc5)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_VOLUME.CDODriverName", cdo_driver_name, 0x480, 0x80, true, 0x75f22804942a750b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_resource_list_head_t), "_FLT_VOLUME.InstanceList", instance_list, 0x500, 0x0, true, 0xab20ba67a3c91c48)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::callback_ctrl_t), "_FLT_VOLUME.Callbacks", callbacks, 0x900, 0x40, true, 0xb934a7928451a838)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>), "_FLT_VOLUME.ContextLock", context_lock, 0x2840, 0x40, true, 0x5f52127d84fc36ee)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::context_list_ctrl_t), "_FLT_VOLUME.VolumeContexts", volume_contexts, 0x2880, 0x40, true, 0x923b7af88e564f78)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_resource_list_head_t), "_FLT_VOLUME.StreamListCtrls", stream_list_ctrls, 0x28c0, 0x0, true, 0x347aff3dbe0c4e7c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_resource_list_head_t), "_FLT_VOLUME.FileListCtrls", file_list_ctrls, 0x2cc0, 0x0, true, 0xe1e58a5997e0137c)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_volume_ctrl_t), "_FLT_VOLUME.NameCacheCtrl", name_cache_ctrl, 0x30c0, 0xc0, true, 0xa8a04b0a798b03df)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t), "_FLT_VOLUME.MountNotifyLock", mount_notify_lock, 0x3680, 0x40, true, 0x93358dcc41e30b82)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLT_VOLUME.TargetedOpenActiveCount", targeted_open_active_count, 0x39c0, 0x20, true, 0xb7d02fe103bd5e8c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>), "_FLT_VOLUME.TxVolContextListLock", tx_vol_context_list_lock, 0x3a00, 0x40, true, 0x9f0b208167617a07)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tree_root_t), "_FLT_VOLUME.TxVolContexts", tx_vol_contexts, 0x3a40, 0x40, true, 0xd0f23de78a393f77)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLT_VOLUME.SupportedFeatures", supported_features, 0x3a80, 0x20, true, 0x5c741092081186d7)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_VOLUME.BypassFailingFltNameLen", bypass_failing_flt_name_len, 0x0, 0x0, false, 0x53b9d9d789acd7cb)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_FLT_VOLUME.BypassFailingFltName", bypass_failing_flt_name, 0x0, 0x0, false, 0xebf6e5c38ae58be3)
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
#endif