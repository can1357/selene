#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0x29a62a7533a06edb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA.InterfaceGuid", interface_guid, 0x80, 0x40, true, 0xfee454585e6731b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA.Reference", reference, 0xc0, 0x80, true, 0x2ba26cdd206079c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA.Register", _register, 0x140, 0x8, true, 0xf2ae833a5fbd224a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA.SymLink", sym_link, 0x180, 0x40, true, 0x57a5c7ca7a7b01dd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA.SymLinkLength", sym_link_length, 0x1c0, 0x20, true, 0x990e925b61f9277e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif