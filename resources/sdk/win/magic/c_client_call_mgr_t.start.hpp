#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CClientCallMgr._dwFlags", dw_flags, 0x140, 0x20, true, 0xeefcaeca9583f4d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CClientCallMgr._cRefs", c_refs, 0x160, 0x20, true, 0x938b343c3cfe2b12)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CClientCallMgr._pUnkOuter", p_unk_outer, 0x180, 0x40, true, 0x389ba85814cac75)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_client_call_mgr_t*), "CClientCallMgr._pNextMgr", p_next_mgr, 0x1c0, 0x40, true, 0xa0cf2f5dcd4f1973)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CClientCallMgr._pStdId", p_std_id, 0x300, 0x40, true, 0xe52adaec3adb55de)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_proxy_buffer_t*), "CClientCallMgr._pProxyObj", p_proxy_obj, 0x340, 0x40, true, 0x1f58961143508e93)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_channel_object_t*), "CClientCallMgr._pChnlObj", p_chnl_obj, 0x380, 0x40, true, 0x91d1c3d87a56943d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_client_security_t*), "CClientCallMgr._pICS", p_ics, 0x3c0, 0x40, true, 0x1d2b4ec414aa2aee)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_cancel_method_calls_t*), "CClientCallMgr._pICMC", p_icmc, 0x400, 0x40, true, 0xfdb1f55482b78458)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_event_t), "CClientCallMgr._cStdEvent", c_std_event, 0x440, 0xc0, true, 0xce4b6998a2745f92)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CClientCallMgr._requestedAsyncIID", requested_async_iid, 0x200, 0x80, true, 0xb2b3b258511602b3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CClientCallMgr._proxyAsyncIID", proxy_async_iid, 0x280, 0x80, true, 0x756fd55df04ab64d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CClientCallMgr._asyncIID", async_iid, 0x0, 0x0, false, 0x59295dc2b992bdcf)
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
#define _m11
#define _m12
#endif