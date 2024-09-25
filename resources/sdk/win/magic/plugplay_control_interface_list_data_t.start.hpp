#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_INTERFACE_LIST_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0xcdefb7a193f5b660)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_PLUGPLAY_CONTROL_INTERFACE_LIST_DATA.InterfaceGuid", interface_guid, 0x80, 0x40, true, 0x18ca5381112b5900)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_INTERFACE_LIST_DATA.InterfaceList", interface_list, 0xc0, 0x40, true, 0xf7b871a681f0561b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_INTERFACE_LIST_DATA.InterfaceListSize", interface_list_size, 0x100, 0x20, true, 0x924942c82912a9d4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_INTERFACE_LIST_DATA.Flags", flags, 0x120, 0x20, true, 0x76aa01713a85eece)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif