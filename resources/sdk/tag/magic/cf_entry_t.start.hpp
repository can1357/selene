#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagCFEntry.pclsid", pclsid, 0x0, 0x40, true, 0x536e4bccebd90aef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_unknown_t*, const struct nt::guid_t&, void**)>*), "tagCFEntry.pfnCI", pfn_ci, 0x40, 0x40, true, 0x18016a745bbfb332)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCFEntry.dwFlags", dw_flags, 0x80, 0x20, true, 0xa574bb2800220562)
#else
#define _m00
#define _m01
#define _m02
#endif