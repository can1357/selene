#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRttiParameterizedInterface_V1.Kind", kind, 0x0, 0x20, true, 0x539273de85dde75b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRttiParameterizedInterface_V1.Version", version, 0x20, 0x20, true, 0x7c86dfdda1a9ca6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiParameterizedInterface_V1.Namespace", _namespace, 0x40, 0x40, true, 0x1f48ff2b056fdc9a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRttiParameterizedInterface_V1.Name", name, 0x80, 0x40, true, 0xd0a88c7680c69520)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRttiParameterizedInterface_V1.PropertyMap", property_map, 0xc0, 0x80, true, 0x67fc78647bfcbc81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif