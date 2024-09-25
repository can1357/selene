#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRttiParameterizedDelegate_V1.Kind", kind, 0x0, 0x20, true, 0x9947fc66beac0e13)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRttiParameterizedDelegate_V1.Version", version, 0x20, 0x20, true, 0x942fecd7d011cccd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiParameterizedDelegate_V1.Namespace", _namespace, 0x40, 0x40, true, 0x10ec7b76f9b34b00)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRttiParameterizedDelegate_V1.Name", name, 0x80, 0x40, true, 0x5ce19c2219e1f88a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRttiParameterizedDelegate_V1.PropertyMap", property_map, 0xc0, 0x80, true, 0x8f2b08cffc930fc4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif