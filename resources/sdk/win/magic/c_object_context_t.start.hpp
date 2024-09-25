#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CObjectContext._cRefs", c_refs, 0x1c0, 0x20, true, 0x1d305f3f9d423acf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CObjectContext._cUserRefs", c_user_refs, 0x1e0, 0x20, true, 0x60e326bd872171ea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CObjectContext._cInternalRefs", c_internal_refs, 0x200, 0x20, true, 0x7594b7359f5b8a3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CObjectContext._dwFlags", dw_flags, 0x220, 0x20, true, 0xa8e86b5187ef8af5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "CObjectContext._propChain", prop_chain, 0x240, 0x80, true, 0xcd1c44e557614d98)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "CObjectContext._uuidChain", uuid_chain, 0x2c0, 0x80, true, 0x8efb3819e73ad93b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::interface_data_t*), "CObjectContext._pifData", pif_data, 0x340, 0x40, true, 0x7085a6a06b713b67)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CObjectContext._MarshalSizeMax", marshal_size_max, 0x380, 0x20, true, 0xea5a7b272be839b9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_com_apartment_t*), "CObjectContext._pApartment", p_apartment, 0x3c0, 0x40, true, 0xbf63a81d56d44f74)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CObjectContext._dwHashOfId", dw_hash_of_id, 0x400, 0x20, true, 0xc4ef281812f7a14f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CObjectContext._contextId", context_id, 0x420, 0x80, true, 0x721f563849572216)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CObjectContext._urtCtxId", urt_ctx_id, 0x4c0, 0x40, true, 0x643a3d5f8f384ec0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sps_cache_t), "CObjectContext._PSCache", ps_cache, 0x500, 0x0, true, 0x9eb60b6a85381e27)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_marshal_t*), "CObjectContext._pMarshalProp", p_marshal_prop, 0x600, 0x40, true, 0xb3b896688bd6ec1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CObjectContext._cReleaseThreads", c_release_threads, 0x640, 0x20, true, 0xdd8acc80ee3383bb)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_context_prop_list_t), "CObjectContext._properties", properties, 0x680, 0x0, true, 0x28ef3d5719146e34)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CObjectContext._pMtsContext", p_mts_context, 0x880, 0x40, true, 0x8e3a8bd389508630)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_context_life_t volatile*), "CObjectContext._pContextLife", p_context_life, 0x8c0, 0x40, true, 0x4b29de2c3f91dd2d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_connection_manager_t*), "CObjectContext._pConnectionMgr", p_connection_mgr, 0x900, 0x40, true, 0x7c9dbefb658825be)
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
#define _m15
#define _m16
#define _m17
#define _m18
#endif