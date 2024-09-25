#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "ORPC_DBG_ALL.pSignature", p_signature, 0x0, 0x40, true, 0x346e6247bb259cc3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rpcolemessage_t*), "ORPC_DBG_ALL.pMessage", p_message, 0x40, 0x40, true, 0x59e0d79325ff6785)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "ORPC_DBG_ALL.refiid", refiid, 0x80, 0x40, true, 0x850aeb4fb30eb7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_channel_buffer_t*), "ORPC_DBG_ALL.pChannel", p_channel, 0xc0, 0x40, true, 0x58809b5eb8fff45e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "ORPC_DBG_ALL.pUnkProxyMgr", p_unk_proxy_mgr, 0x100, 0x40, true, 0x2e3763c6bce1415d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ORPC_DBG_ALL.pInterface", p_interface, 0x140, 0x40, true, 0xba79f7bcb5b4476b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "ORPC_DBG_ALL.pUnkObject", p_unk_object, 0x180, 0x40, true, 0x8083bad8bfd8c08f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "ORPC_DBG_ALL.hresult", hresult, 0x1c0, 0x20, true, 0xa26451ce69e2a2da)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ORPC_DBG_ALL.pvBuffer", pv_buffer, 0x200, 0x40, true, 0x8a6d7e68478503e3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ORPC_DBG_ALL.cbBuffer", cb_buffer, 0x240, 0x20, true, 0xf8f725fbae4be173)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ORPC_DBG_ALL.lpcbBuffer", lpcb_buffer, 0x280, 0x40, true, 0xe4391ab8403a8e40)
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