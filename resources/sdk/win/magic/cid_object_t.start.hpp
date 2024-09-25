#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "CIDObject._pidChain", pid_chain, 0x40, 0x80, true, 0x50b97357980e07ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "CIDObject._oidChain", oid_chain, 0xc0, 0x80, true, 0x6358bba66faa414e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CIDObject._dwState", dw_state, 0x140, 0x20, true, 0xe3ee90b281d165a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CIDObject._cRefs", c_refs, 0x160, 0x20, true, 0x9f88fd14be92b414)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CIDObject._pServer", p_server, 0x180, 0x40, true, 0x7b3e9692b70909ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "CIDObject._pServerCtx", p_server_ctx, 0x1c0, 0x40, true, 0xdcd32860598560f9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CIDObject._oid", oid, 0x200, 0x80, true, 0xde2c63fda5455df4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CIDObject._aptID", apt_id, 0x280, 0x20, true, 0x1952eb75797679f9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_wrapper_t*), "CIDObject._pStdWrapper", p_std_wrapper, 0x2c0, 0x40, true, 0xf47b21c257e72e24)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CIDObject._pStdID", p_std_id, 0x300, 0x40, true, 0xd8396994cfa5a06a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CIDObject._cCalls", c_calls, 0x340, 0x20, true, 0xbd339a3824e0fc02)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CIDObject._cLocks", c_locks, 0x360, 0x20, true, 0x5869e502ee6789)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "CIDObject._oidUnpinReqChain", oid_unpin_req_chain, 0x380, 0x80, true, 0x53bca8152ba96b0b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CIDObject._dwOidUnpinReqState", dw_oid_unpin_req_state, 0x400, 0x20, true, 0xe330758731ffcde8)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CIDObject._pvObjectTrackCookie", pv_object_track_cookie, 0x440, 0x40, true, 0x80b9caaac9f1e94c)
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
#define _m13
#define _m14
#endif