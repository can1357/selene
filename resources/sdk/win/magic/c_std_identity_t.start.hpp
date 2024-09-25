#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CStdIdentity._pStdId", p_std_id, 0x100, 0x40, true, 0xdcb5e9a0a3253d4b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdIdentity._dwFlags", dw_flags, 0x80, 0x20, true, 0x3ab7eef8696a829f)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdIdentity._cIPIDs", c_ipi_ds, 0xa0, 0x20, true, 0xc2f7138134e77f37)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "CStdIdentity._pFirstIPID", p_first_ipid, 0xc0, 0x40, true, 0x32df5419596b4fdb)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_com_chnl_t*), "CStdIdentity._pChnl", p_chnl, 0x140, 0x40, true, 0x84abe4a242fd6a4d)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CStdIdentity._clsidHandler", clsid_handler, 0x180, 0x80, true, 0xd9d00d16fe7afe89)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdIdentity._cNestedCalls", c_nested_calls, 0x200, 0x20, true, 0x9923178eefc8555d)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdIdentity._cTableRefs", c_table_refs, 0x220, 0x20, true, 0xb595313a61a79389)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rem_unknown_t*), "CStdIdentity._pSecureRemUnk", p_secure_rem_unk, 0x240, 0x40, true, 0xa6298e294ede8bf5)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CStdIdentity._pAsyncRelease", p_async_release, 0x280, 0x40, true, 0xfa66d0084be25079)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CStdIdentity._pCtxEntryHead", p_ctx_entry_head, 0x2c0, 0x40, true, 0xa28225976116ee45)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CStdIdentity._pCtxFreeList", p_ctx_free_list, 0x300, 0x40, true, 0xbd15b502ded781a)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "CStdIdentity._csCtxEntry", cs_ctx_entry, 0x340, 0x40, true, 0x88b8f8847c3775ac)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdIdentity._fCsInitialized", f_cs_initialized, 0x480, 0x20, true, 0xdc84010ba7c5615d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_policy_set_t*), "CStdIdentity._pPS", p_ps, 0x4c0, 0x40, true, 0xe76a82685d5d1612)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cid_object_t*), "CStdIdentity._pID", p_id, 0x500, 0x40, true, 0xe0d12f35095be535)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ref_cache_t*), "CStdIdentity._pRefCache", p_ref_cache, 0x540, 0x40, true, 0x5b1d18b51940a078)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CStdIdentity._pUnkOuter", p_unk_outer, 0x840, 0x40, true, 0x62d34276f8207014)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdIdentity.m_refs", m_refs, 0x9c0, 0x20, true, 0x9a0d2f9d9c6b12b5)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdIdentity.m_flags", m_flags, 0x9e0, 0x20, true, 0x4caf0515768f944e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CStdIdentity.m_pUnkOuter", m_p_unk_outer, 0xa00, 0x40, true, 0xa88c9b4c9ec95a82)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CStdIdentity.m_pUnkControl", m_p_unk_control, 0xa40, 0x40, true, 0xae54e5d68419f76a)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CStdIdentity.m_pVtableAddress", m_p_vtable_address, 0xa80, 0x40, true, 0x5a46c869c659e09f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_external_connection_t*), "CStdIdentity.m_pIEC", m_p_iec, 0xac0, 0x40, true, 0x85a00510c93bd1b3)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CStdIdentity.m_moid", m_moid, 0xb00, 0x80, true, 0x1dff3d37ec6511c1)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdIdentity.m_dwAptId", m_dw_apt_id, 0xb80, 0x20, true, 0x43f1ceefccf678e0)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "CStdIdentity.m_cStrongRefs", m_c_strong_refs, 0xba0, 0x20, true, 0xf113696d225ca2a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "CStdIdentity.m_cWeakRefs", m_c_weak_refs, 0xbc0, 0x20, true, 0x2a40b00bde69695d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdIdentity.m_cMarshalsInProgress", m_c_marshals_in_progress, 0xbe0, 0x20, true, 0xc80a27d64e8710c7)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdIdentity.m_cMarshalsInCall", m_c_marshals_in_call, 0xc00, 0x20, true, 0x9150941d50759bc0)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdIdentity.m_cSameProcessDirectMarshals", m_c_same_process_direct_marshals, 0xc20, 0x20, true, 0xd9f07fd970b3f176)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CStdIdentity.m_ConnStatus", m_conn_status, 0xc40, 0x20, true, 0x5255383838b396bb)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CStdIdentity.m_pVoid", m_p_void, 0xc80, 0x40, true, 0x413d7599414a93bb)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t*), "CStdIdentity._factoryClassName", factory_class_name, 0x580, 0x40, true, 0x651a332e68880ec7)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdIdentity._dwMarshalTime", dw_marshal_time, 0x0, 0x0, false, 0xa97bdfbd7ee7f5bc)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdIdentity._dwLastCallTime", dw_last_call_time, 0x0, 0x0, false, 0xaace39a393e09faf)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#endif