#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::c_interface_proxy_vtbl_t const**), "tagProxyFileInfo.pProxyVtblList", p_proxy_vtbl_list, 0x0, 0x40, true, 0x6df47b6a1b90b2fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::c_interface_stub_vtbl_t const**), "tagProxyFileInfo.pStubVtblList", p_stub_vtbl_list, 0x40, 0x40, true, 0x475ffe58a2ca3773)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char const**), "tagProxyFileInfo.pNamesArray", p_names_array, 0x80, 0x40, true, 0x5b1132fdaa392cbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t**), "tagProxyFileInfo.pDelegatedIIDs", p_delegated_ii_ds, 0xc0, 0x40, true, 0x322f41d29b64f5a2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::guid_t*, int32_t*)> const*), "tagProxyFileInfo.pIIDLookupRtn", p_iid_lookup_rtn, 0x100, 0x40, true, 0x86874613651efaa0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagProxyFileInfo.TableSize", table_size, 0x140, 0x10, true, 0xf271a64cc50c8e50)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagProxyFileInfo.TableVersion", table_version, 0x150, 0x10, true, 0xe929a7dcbe977218)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t**), "tagProxyFileInfo.pAsyncIIDLookup", p_async_iid_lookup, 0x180, 0x40, true, 0x1bd1895b935b954a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagProxyFileInfo.Filler2", filler2, 0x1c0, 0x40, true, 0x82a2f97f7f937e5b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagProxyFileInfo.Filler3", filler3, 0x200, 0x40, true, 0x9c820d14e39e8a0e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagProxyFileInfo.Filler4", filler4, 0x240, 0x40, true, 0xc0167da198c648ce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif