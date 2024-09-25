#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdMarshal._dwFlags", dw_flags, 0x40, 0x20, true, 0x726aea565c6d9ff3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdMarshal._cIPIDs", c_ipi_ds, 0x60, 0x20, true, 0x4256a9d3316f013b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "CStdMarshal._pFirstIPID", p_first_ipid, 0x80, 0x40, true, 0xefcbf26cfac8cc77)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CStdMarshal._pStdId", p_std_id, 0xc0, 0x40, true, 0x5f3dfd4f538fa61a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_com_chnl_t*), "CStdMarshal._pChnl", p_chnl, 0x100, 0x40, true, 0x424bf75cca28be5b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CStdMarshal._clsidHandler", clsid_handler, 0x140, 0x80, true, 0x83768e2f2becfd7c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdMarshal._cNestedCalls", c_nested_calls, 0x1c0, 0x20, true, 0x4f28d40d22ad7385)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdMarshal._cTableRefs", c_table_refs, 0x1e0, 0x20, true, 0x1159c383d22835c2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rem_unknown_t*), "CStdMarshal._pSecureRemUnk", p_secure_rem_unk, 0x200, 0x40, true, 0xbc6e99029ebb6785)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CStdMarshal._pAsyncRelease", p_async_release, 0x240, 0x40, true, 0x5a5997b9dc23fa11)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CStdMarshal._pCtxEntryHead", p_ctx_entry_head, 0x280, 0x40, true, 0x1fa4ebca505be6fe)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CStdMarshal._pCtxFreeList", p_ctx_free_list, 0x2c0, 0x40, true, 0x8dd3f36f7cec069d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "CStdMarshal._csCtxEntry", cs_ctx_entry, 0x300, 0x40, true, 0x3572d52c7e78699a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStdMarshal._fCsInitialized", f_cs_initialized, 0x440, 0x20, true, 0x81c94c11b2e23366)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_policy_set_t*), "CStdMarshal._pPS", p_ps, 0x480, 0x40, true, 0x3c91f61eed49c639)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cid_object_t*), "CStdMarshal._pID", p_id, 0x4c0, 0x40, true, 0x815b8d54acb42617)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ref_cache_t*), "CStdMarshal._pRefCache", p_ref_cache, 0x500, 0x40, true, 0x5f3aeef54b49cf29)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t*), "CStdMarshal._factoryClassName", factory_class_name, 0x540, 0x40, true, 0x59f3918a5ddf9079)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdMarshal._dwMarshalTime", dw_marshal_time, 0x0, 0x0, false, 0xdf1f2537c98eba97)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdMarshal._dwLastCallTime", dw_last_call_time, 0x0, 0x0, false, 0x60a45e58dbe4baf7)
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
#define _m19
#endif