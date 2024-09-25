#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CChannelObject._dwState", dw_state, 0x240, 0x20, true, 0xb320e9d79cf28c71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CChannelObject._cRefs", c_refs, 0x260, 0x20, true, 0x70552a5a6f32e0fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CChannelObject._dwAptID", dw_apt_id, 0x280, 0x20, true, 0xf558a5937fb605a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_client_call_mgr_t*), "CChannelObject._pCallMgr", p_call_mgr, 0x2c0, 0x40, true, 0x889324b553bac7f9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_client_channel_t*), "CChannelObject._pChnl", p_chnl, 0x300, 0x40, true, 0x3c678a2a91481260)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CChannelObject._hr", hr, 0x340, 0x20, true, 0xfc0ffbf4b7adcd06)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::async_com_client_call_t*), "CChannelObject._pClientCall", p_client_call, 0x380, 0x40, true, 0xb813c9c1247c463c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_synchronize_t*), "CChannelObject._pSync", p_sync, 0x3c0, 0x40, true, 0x57cc60f65cb02c03)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_pending_call_t), "CChannelObject._pendingCall", pending_call, 0x400, 0xc0, true, 0x51debdb0fd4bf325)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rpcolemessage_t), "CChannelObject._msg", msg, 0x4c0, 0x80, true, 0x2a18763099d93f7d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CChannelObject._containerId", container_id, 0x760, 0x80, true, 0x282021b8c1071960)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_proxy_buffer_t*), "CChannelObject._pProxyObj", p_proxy_obj, 0x800, 0x40, true, 0xf7f05419cb33d156)
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
#endif