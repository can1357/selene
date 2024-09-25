#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PLUGPLAY_EVENT_BLOCK.EventGuid", event_guid, 0x0, 0x80, true, 0x82f0f0c6e3410b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::plugplay_event_category_t), "_PLUGPLAY_EVENT_BLOCK.EventCategory", event_category, 0x80, 0x20, true, 0xac3e7f4e9a7554fc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_PLUGPLAY_EVENT_BLOCK.Result", result, 0xc0, 0x40, true, 0xded50a6cc3f24299)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_EVENT_BLOCK.Flags", flags, 0x100, 0x20, true, 0x214ccec54e3dfd02)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_EVENT_BLOCK.TotalSize", total_size, 0x120, 0x20, true, 0x48e585861f70406e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PLUGPLAY_EVENT_BLOCK.DeviceObject", device_object, 0x140, 0x40, true, 0xa9f54e592d968324)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PLUGPLAY_EVENT_BLOCK.DeviceClass.ClassGuid", class_guid, 0x0, 0x80, true, 0x9520ff1f7f8766eb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.DeviceClass.SymbolicLinkName", symbolic_link_name, 0x80, 0x10, true, 0x429abd9f4d844a0d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_device_class_t), "_PLUGPLAY_EVENT_BLOCK.DeviceClass", device_class, 0x180, 0xa0, true, 0x26994223ed4bb052)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.TargetDevice.DeviceId", device_id, 0x0, 0x10, true, 0xca13ff31adaa1521)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.TargetDevice.DeviceIds", device_ids, 0x0, 0x10, true, 0xdb02e84154e00dbe)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_target_device_t), "_PLUGPLAY_EVENT_BLOCK.TargetDevice", target_device, 0x180, 0x10, true, 0xa75f0f42fc322af8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.InstallDevice.DeviceId", device_id, 0x0, 0x10, true, 0xdc208cbf24e44fcb)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_install_device_t), "_PLUGPLAY_EVENT_BLOCK.InstallDevice", install_device, 0x180, 0x10, true, 0x2fd583a5cb5a27d3)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PLUGPLAY_EVENT_BLOCK.CustomNotification.NotificationStructure", notification_structure, 0x0, 0x40, true, 0x35a04bb3b3938437)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.CustomNotification.DeviceId", device_id, 0x40, 0x10, true, 0x4c436d54e9ec83d4)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.CustomNotification.DeviceIds", device_ids, 0x40, 0x10, true, 0x1c42a58c789f6e86)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u11_custom_notification_t), "_PLUGPLAY_EVENT_BLOCK.CustomNotification", custom_notification, 0x180, 0x80, true, 0x732ca66a338711d4)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PLUGPLAY_EVENT_BLOCK.ProfileNotification.Notification", notification, 0x0, 0x40, true, 0x66611b30a2766939)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u16_profile_notification_t), "_PLUGPLAY_EVENT_BLOCK.ProfileNotification", profile_notification, 0x180, 0x40, true, 0xf59a5d92d2b3f02b)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_EVENT_BLOCK.PowerNotification.NotificationCode", notification_code, 0x0, 0x20, true, 0x153854652fad3c24)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_EVENT_BLOCK.PowerNotification.NotificationData", notification_data, 0x20, 0x20, true, 0x83b1f551ab9a2ad0)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u21_power_notification_t), "_PLUGPLAY_EVENT_BLOCK.PowerNotification", power_notification, 0x180, 0x40, true, 0x6bcbc5a6417debb1)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum pnp::veto_type_t), "_PLUGPLAY_EVENT_BLOCK.VetoNotification.VetoType", veto_type, 0x0, 0x20, true, 0x3f10da1415f8373a)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.VetoNotification.DeviceIdVetoNameBuffer", device_id_veto_name_buffer, 0x20, 0x10, true, 0xda6aa3616379dbfd)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u26_veto_notification_t), "_PLUGPLAY_EVENT_BLOCK.VetoNotification", veto_notification, 0x180, 0x40, true, 0xd811d08d4b6301a4)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PLUGPLAY_EVENT_BLOCK.BlockedDriverNotification.BlockedDriverGuid", blocked_driver_guid, 0x0, 0x80, true, 0x7888716954589297)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u31_blocked_driver_notification_t), "_PLUGPLAY_EVENT_BLOCK.BlockedDriverNotification", blocked_driver_notification, 0x180, 0x80, true, 0xb001e56d54fc9a32)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.InvalidIDNotification.ParentId", parent_id, 0x0, 0x10, true, 0x426f7a3858e527ed)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u36_invalid_id_notification_t), "_PLUGPLAY_EVENT_BLOCK.InvalidIDNotification", invalid_id_notification, 0x180, 0x10, true, 0xabd108a336cc4a86)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PLUGPLAY_EVENT_BLOCK.PowerSettingNotification.PowerSettingGuid", power_setting_guid, 0x0, 0x80, true, 0xe83bae662b7fd31e)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_EVENT_BLOCK.PowerSettingNotification.Flags", flags, 0x80, 0x20, true, 0x750b8284feecbfa8)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_EVENT_BLOCK.PowerSettingNotification.SessionId", session_id, 0xa0, 0x20, true, 0x4e946614f24ec5b7)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_EVENT_BLOCK.PowerSettingNotification.DataLength", data_length, 0xc0, 0x20, true, 0x43b9f8bb586eecbe)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_PLUGPLAY_EVENT_BLOCK.PowerSettingNotification.Data", data, 0xe0, 0x8, true, 0x3be459db10bf4a1e)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u41_power_setting_notification_t), "_PLUGPLAY_EVENT_BLOCK.PowerSettingNotification", power_setting_notification, 0x180, 0x0, true, 0x3999a023908ac850)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.PropertyChangeNotification.DeviceId", device_id, 0x0, 0x10, true, 0xf0271f0a1c698203)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_target_device_t), "_PLUGPLAY_EVENT_BLOCK.PropertyChangeNotification", property_change_notification, 0x180, 0x10, true, 0xbf1864d281172a1f)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_EVENT_BLOCK.DeviceInstanceNotification.DeviceId", device_id, 0x0, 0x10, true, 0x53a9dd4af23edba3)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_target_device_t), "_PLUGPLAY_EVENT_BLOCK.DeviceInstanceNotification", device_instance_notification, 0x180, 0x10, true, 0xb6d004fb135e0b9a)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#endif