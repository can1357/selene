#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_unknown_t*, const struct nt::guid_t*, void**)>*), "IEnumUnknownVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xa750efcc2b69441c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_unknown_t*)>*), "IEnumUnknownVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xb615f54ce3259aaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_unknown_t*)>*), "IEnumUnknownVtbl.Release", release, 0x80, 0x40, true, 0xe3e15db49b353749)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_unknown_t*, uint32_t, struct win::i_unknown_t**, uint32_t*)>*), "IEnumUnknownVtbl.Next", next, 0xc0, 0x40, true, 0xb5176cef089a41b2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_unknown_t*, uint32_t)>*), "IEnumUnknownVtbl.Skip", skip, 0x100, 0x40, true, 0x2fcb09e313dd21c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_unknown_t*)>*), "IEnumUnknownVtbl.Reset", reset, 0x140, 0x40, true, 0x2451179d6bf2abad)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_unknown_t*, struct win::i_enum_unknown_t**)>*), "IEnumUnknownVtbl.Clone", clone, 0x180, 0x40, true, 0x91ceb341b6f586e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif