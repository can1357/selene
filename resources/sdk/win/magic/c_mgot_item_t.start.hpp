#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::mgot_scm_token_t), "CMgotItem._mgotScmToken", mgot_scm_token, 0x40, 0x0, true, 0x98785cbc52248ea3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CMgotItem._hApt", h_apt, 0x140, 0x20, true, 0x9f6f060cd898c3b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void const*), "CMgotItem._pVtableAddress", p_vtable_address, 0x180, 0x40, true, 0x7900fc5c3e5055d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CMgotItem._bIsAgile", b_is_agile, 0x1c0, 0x8, true, 0x598dd016f00659)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CMgotItem._wItemSig", w_item_sig, 0x0, 0x10, true, 0x993cb690f8971c40)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::midl_irot_0001_t), "CMgotItem._securityModel", security_model, 0x0, 0x0, false, 0xb7d11ef6bac7fc1f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif