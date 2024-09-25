#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_string_t*, const struct nt::guid_t*, void**)>*), "IEnumStringVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x16f5dcbd256a7b09)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_string_t*)>*), "IEnumStringVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x2d47c65b156a7552)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_string_t*)>*), "IEnumStringVtbl.Release", release, 0x80, 0x40, true, 0xa0c037078a691153)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_string_t*, uint32_t, wchar_t**, uint32_t*)>*), "IEnumStringVtbl.Next", next, 0xc0, 0x40, true, 0x1436a0f54d5ea25a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_string_t*, uint32_t)>*), "IEnumStringVtbl.Skip", skip, 0x100, 0x40, true, 0xc53e1a846d820d9c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_string_t*)>*), "IEnumStringVtbl.Reset", reset, 0x140, 0x40, true, 0x5177f1fdef33f8cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_string_t*, struct win::i_enum_string_t**)>*), "IEnumStringVtbl.Clone", clone, 0x180, 0x40, true, 0x72566c14fd3c9e4f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif