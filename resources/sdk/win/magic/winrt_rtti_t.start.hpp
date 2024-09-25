#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRtti.Kind", kind, 0x0, 0x20, true, 0x5ba7c0e66a027ea7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRtti.Version", version, 0x20, 0x20, true, 0x5e1c1cf3acc8fa3d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRtti.Namespace", _namespace, 0x40, 0x40, true, 0x92e7f93f7519c3d6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRtti.Name", name, 0x80, 0x40, true, 0x36ba22694a71ee91)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRtti.PropertyMap", property_map, 0xc0, 0x80, true, 0x3506e4bc713cc127)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif