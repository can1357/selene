#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_INTERFACE_CHANGE_NOTIFICATION.Version", version, 0x0, 0x10, true, 0xafdfba5b2b7be30b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_INTERFACE_CHANGE_NOTIFICATION.Size", size, 0x10, 0x10, true, 0x86e30720403ca102)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DEVICE_INTERFACE_CHANGE_NOTIFICATION.Event", event, 0x20, 0x80, true, 0xc97d9c6739c2bea6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DEVICE_INTERFACE_CHANGE_NOTIFICATION.InterfaceClassGuid", interface_class_guid, 0xa0, 0x80, true, 0x5f4da6cf9082738d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_DEVICE_INTERFACE_CHANGE_NOTIFICATION.SymbolicLinkName", symbolic_link_name, 0x140, 0x40, true, 0xfa9c2bfa4f1d889d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif