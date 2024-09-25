#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRpcCall._cRefs", c_refs, 0xc0, 0x20, true, 0xdfb783d004697dd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct win::i_unknown_t*&, struct win::i_unknown_t*>), "CRpcCall._pIdentity", p_identity, 0x100, 0x40, true, 0xdb8c497a83148d68)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rpcolemessage_t*), "CRpcCall._pMessage", p_message, 0x140, 0x40, true, 0xb5093f42dde79a38)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult&), "CRpcCall._hrRet", hr_ret, 0x1c0, 0x40, true, 0x4cadd376c1806d61)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::callsource_t), "CRpcCall._callSource", call_source, 0x200, 0x20, true, 0x96c510fdf2e4d14)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CRpcCall._ServerHR", server_hr, 0x220, 0x20, true, 0x3d33a39b7fb8569f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t&), "CRpcCall._riid", riid, 0x180, 0x40, true, 0x7281d2f7fb077c19)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CRpcCall._iid", iid, 0x0, 0x0, false, 0x77a8f2817281a898)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CRpcCall._embeddedHrRet", embedded_hr_ret, 0x0, 0x0, false, 0xd4067ec86c02d36e)
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
#endif