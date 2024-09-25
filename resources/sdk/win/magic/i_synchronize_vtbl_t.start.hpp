#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_synchronize_t*, const struct nt::guid_t&, void**)>*), "ISynchronizeVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x3630a11283a82f09)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_synchronize_t*)>*), "ISynchronizeVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x16f8842646dbf1c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_synchronize_t*)>*), "ISynchronizeVtbl.Release", release, 0x80, 0x40, true, 0x5486c5fa028bdad1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_synchronize_t*, uint32_t, uint32_t)>*), "ISynchronizeVtbl.Wait", wait, 0xc0, 0x40, true, 0x619201ec4ba62bc4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_synchronize_t*)>*), "ISynchronizeVtbl.Signal", signal, 0x100, 0x40, true, 0x6cbde57a54a6d745)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_synchronize_t*)>*), "ISynchronizeVtbl.Reset", reset, 0x140, 0x40, true, 0x7fc3641fd5a2082b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif