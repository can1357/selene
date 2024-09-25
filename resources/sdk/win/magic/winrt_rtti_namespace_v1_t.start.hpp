#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRttiNamespace_V1.Kind", kind, 0x0, 0x20, true, 0x7cad484c525ffae4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRttiNamespace_V1.Version", version, 0x20, 0x20, true, 0x6d591d1f4966e89d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiNamespace_V1.Namespace", _namespace, 0x40, 0x40, true, 0x14570b0591339a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRttiNamespace_V1.Name", name, 0x80, 0x40, true, 0x1e1304e3f8afd11a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRttiNamespace_V1.PropertyMap", property_map, 0xc0, 0x80, true, 0x7b18d118e1ca0237)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif