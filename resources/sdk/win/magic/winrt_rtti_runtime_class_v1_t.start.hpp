#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRttiRuntimeClass_V1.Kind", kind, 0x0, 0x20, true, 0x71e7406581d7c1d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRttiRuntimeClass_V1.Version", version, 0x20, 0x20, true, 0xdfdcf9a631448f42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiRuntimeClass_V1.Namespace", _namespace, 0x40, 0x40, true, 0xf16952d504a6bcd6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRttiRuntimeClass_V1.Name", name, 0x80, 0x40, true, 0xc7e39524daf7ce9f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRttiRuntimeClass_V1.PropertyMap", property_map, 0xc0, 0x80, true, 0xb0ed69dc7c531d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiRuntimeClass_V1.DefaultInterface", default_interface, 0x140, 0x40, true, 0xa5e04a3b6c4a69d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif