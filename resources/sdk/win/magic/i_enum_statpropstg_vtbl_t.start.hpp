#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, const struct nt::guid_t*, void**)>*), "IEnumSTATPROPSTGVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x72784f633ca04af3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statpropstg_t*)>*), "IEnumSTATPROPSTGVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x89d25d4fd57b7ecc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statpropstg_t*)>*), "IEnumSTATPROPSTGVtbl.Release", release, 0x80, 0x40, true, 0x2b797c1a33b95f37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, uint32_t, struct tag::statpropstg_t*, uint32_t*)>*), "IEnumSTATPROPSTGVtbl.Next", next, 0xc0, 0x40, true, 0xfc9c7a07e0b613b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, uint32_t)>*), "IEnumSTATPROPSTGVtbl.Skip", skip, 0x100, 0x40, true, 0xb854aef8f53bba41)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*)>*), "IEnumSTATPROPSTGVtbl.Reset", reset, 0x140, 0x40, true, 0xc606507b91bfe4b2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, struct win::i_enum_statpropstg_t**)>*), "IEnumSTATPROPSTGVtbl.Clone", clone, 0x180, 0x40, true, 0xba0721f23518ea3f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif