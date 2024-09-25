#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CChannelHandle._hRpc", h_rpc, 0x80, 0x40, true, 0xdf179076c205b9e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CChannelHandle._lAuthn", l_authn, 0xc0, 0x20, true, 0x9e65ba041ce0d3de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CChannelHandle._lImp", l_imp, 0xe0, 0x20, true, 0x6b39fe8bfb63552e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CChannelHandle._hToken", h_token, 0x100, 0x40, true, 0xc8f350abca179cc4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::e_handle_state_t), "CChannelHandle._eState", e_state, 0x140, 0x20, true, 0x5113aa67dbc502e6)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "CChannelHandle._fFirstCall", f_first_call, 0x160, 0x1, true, 0x3f8e4e0eb2307a49, 1, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CChannelHandle._fDoNotDisturb", f_do_not_disturb, 0x180, 0x8, true, 0xe40e74ab832ceae7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CChannelHandle._bExemptFromAstaToAstaBlock", b_exempt_from_asta_to_asta_block, 0x188, 0x8, true, 0x37fa7fd6397580c3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CChannelHandle._bDisableAsyncRemotingForWinrtAsync", b_disable_async_remoting_for_winrt_async, 0x190, 0x8, true, 0xff68a95d5792a704)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CChannelHandle._bIsNonDefaultAssociation", b_is_non_default_association, 0x198, 0x8, true, 0xd0ae6749b2c65d06)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::schannel_cred_t), "CChannelHandle._sCred", s_cred, 0x1c0, 0x80, true, 0xd987ec790c41fe7d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "CChannelHandle._pCert", p_cert, 0x440, 0x40, true, 0x5894926ebf02544b)
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