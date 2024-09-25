#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statdata_t*, const struct nt::guid_t*, void**)>*), "IEnumSTATDATAVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x19876e9f9b4d2d59)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statdata_t*)>*), "IEnumSTATDATAVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x62431847ce206afb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statdata_t*)>*), "IEnumSTATDATAVtbl.Release", release, 0x80, 0x40, true, 0xaf38158b77aaae52)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statdata_t*, uint32_t, struct tag::statdata_t*, uint32_t*)>*), "IEnumSTATDATAVtbl.Next", next, 0xc0, 0x40, true, 0xe38e9d4707993e15)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statdata_t*, uint32_t)>*), "IEnumSTATDATAVtbl.Skip", skip, 0x100, 0x40, true, 0xb873a57246ddc717)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statdata_t*)>*), "IEnumSTATDATAVtbl.Reset", reset, 0x140, 0x40, true, 0x58da74f0c817c330)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statdata_t*, struct win::i_enum_statdata_t**)>*), "IEnumSTATDATAVtbl.Clone", clone, 0x180, 0x40, true, 0x439e8f320d1aee8a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif