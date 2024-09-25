#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRttiInterface_V1.Kind", kind, 0x0, 0x20, true, 0x953a1be3c58a5adc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRttiInterface_V1.Version", version, 0x20, 0x20, true, 0x15c34b5bb3deeb0f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiInterface_V1.Namespace", _namespace, 0x40, 0x40, true, 0xba8c39d6cb5e8223)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRttiInterface_V1.Name", name, 0x80, 0x40, true, 0x99ce6730e000a3f1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRttiInterface_V1.PropertyMap", property_map, 0xc0, 0x80, true, 0xa68ed62c63284ca6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "WinrtRttiInterface_V1.Iid", iid, 0x140, 0x40, true, 0xd66f745390ecb7db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif