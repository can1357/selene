#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "CPolicySet._chain", chain, 0x80, 0x80, true, 0xc400c7190716ec3d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPolicySet._dwFlags", dw_flags, 0x100, 0x20, true, 0x644b291f078bb5a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPolicySet._cPolicies", c_policies, 0x120, 0x20, true, 0x4a06a1ac4224a3a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPolicySet._dwAptID", dw_apt_id, 0x140, 0x20, true, 0xc6fcedb45dda1f43)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "CPolicySet._pClientCtx", p_client_ctx, 0x180, 0x40, true, 0x48ab472bf97a9448)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "CPolicySet._pServerCtx", p_server_ctx, 0x1c0, 0x40, true, 0xae9a3f797e07763b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::policy_entry_t*), "CPolicySet._pFirstEntry", p_first_entry, 0x200, 0x40, true, 0xc005bc47bd4c9de9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::policy_entry_t*), "CPolicySet._pLastEntry", p_last_entry, 0x240, 0x40, true, 0xf1ebb3463a6e1cf1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sps_cache_t), "CPolicySet._PSCache", ps_cache, 0x280, 0x0, true, 0xc57d14204869c22f)
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