#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropsetstg_t*, const struct nt::guid_t*, void**)>*), "IEnumSTATPROPSETSTGVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x81d8da2b576e535b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statpropsetstg_t*)>*), "IEnumSTATPROPSETSTGVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x8320b742da3ac757)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statpropsetstg_t*)>*), "IEnumSTATPROPSETSTGVtbl.Release", release, 0x80, 0x40, true, 0xb1d030926551d11)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropsetstg_t*, uint32_t, struct tag::statpropsetstg_t*, uint32_t*)>*), "IEnumSTATPROPSETSTGVtbl.Next", next, 0xc0, 0x40, true, 0x272a458000eed909)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropsetstg_t*, uint32_t)>*), "IEnumSTATPROPSETSTGVtbl.Skip", skip, 0x100, 0x40, true, 0x1543a506dba03eb1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropsetstg_t*)>*), "IEnumSTATPROPSETSTGVtbl.Reset", reset, 0x140, 0x40, true, 0xa97d3e9ae5f278a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropsetstg_t*, struct win::i_enum_statpropsetstg_t**)>*), "IEnumSTATPROPSETSTGVtbl.Clone", clone, 0x180, 0x40, true, 0x97e2208d53becdd6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif