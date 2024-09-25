#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRttiParameterizedDelegateInstance_V1.Kind", kind, 0x0, 0x20, true, 0xcf45e505be203de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRttiParameterizedDelegateInstance_V1.Version", version, 0x20, 0x20, true, 0x549732f67428903c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiParameterizedDelegateInstance_V1.Namespace", _namespace, 0x40, 0x40, true, 0xecdcbccbd2b12c8e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRttiParameterizedDelegateInstance_V1.Name", name, 0x80, 0x40, true, 0x18ae158c3041fb2e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRttiParameterizedDelegateInstance_V1.PropertyMap", property_map, 0xc0, 0x80, true, 0x2b4eeeeff3005593)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "WinrtRttiParameterizedDelegateInstance_V1.Iid", iid, 0x140, 0x40, true, 0xaabd872f7be5582d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiParameterizedDelegateInstance_V1.ParameterizedDelegate", parameterized_delegate, 0x180, 0x40, true, 0x3139fea3f2b7c3e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif