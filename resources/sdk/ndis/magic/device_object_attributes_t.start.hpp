#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_DEVICE_OBJECT_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0xda7726c41b7cd1c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_DEVICE_OBJECT_ATTRIBUTES.DeviceName", device_name, 0x40, 0x40, true, 0x64bfa52919e30b63)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_DEVICE_OBJECT_ATTRIBUTES.SymbolicName", symbolic_name, 0x80, 0x40, true, 0xbad71601fb069886)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>**), "_NDIS_DEVICE_OBJECT_ATTRIBUTES.MajorFunctions", major_functions, 0xc0, 0x40, true, 0x6b6f83cde9887efc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_DEVICE_OBJECT_ATTRIBUTES.ExtensionSize", extension_size, 0x100, 0x20, true, 0x3d786a4496a24ff3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_NDIS_DEVICE_OBJECT_ATTRIBUTES.DefaultSDDLString", default_sddl_string, 0x140, 0x40, true, 0x66e360d0effeb87d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_NDIS_DEVICE_OBJECT_ATTRIBUTES.DeviceClassGuid", device_class_guid, 0x180, 0x40, true, 0xc68d9c16f3dfbb4a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif