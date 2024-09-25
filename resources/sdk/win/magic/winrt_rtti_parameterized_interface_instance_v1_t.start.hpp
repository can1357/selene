#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_rtti_kind_t), "WinrtRttiParameterizedInterfaceInstance_V1.Kind", kind, 0x0, 0x20, true, 0xe2e2458bc24e503c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtRttiParameterizedInterfaceInstance_V1.Version", version, 0x20, 0x20, true, 0xde8a8835dcba5795)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiParameterizedInterfaceInstance_V1.Namespace", _namespace, 0x40, 0x40, true, 0xf0b7c88ef801e3c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtRttiParameterizedInterfaceInstance_V1.Name", name, 0x80, 0x40, true, 0x65090326b24cbc81)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_method_property_map_t), "WinrtRttiParameterizedInterfaceInstance_V1.PropertyMap", property_map, 0xc0, 0x80, true, 0x9017284eb20c30e6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "WinrtRttiParameterizedInterfaceInstance_V1.Iid", iid, 0x140, 0x40, true, 0x2277043979cb6d61)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::winrt_rtti_t*), "WinrtRttiParameterizedInterfaceInstance_V1.ParameterizedInterface", parameterized_interface, 0x180, 0x40, true, 0x274f9474d907d854)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif