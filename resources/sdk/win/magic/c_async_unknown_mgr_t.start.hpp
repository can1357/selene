#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAsyncUnknownMgr._dwState", dw_state, 0xc0, 0x20, true, 0x7dbd7c86e96f9c5a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CAsyncUnknownMgr._hr", hr, 0xe0, 0x20, true, 0xc7a9730a2f47cc96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_eflags_t), "CAsyncUnknownMgr.eflags", eflags, 0x100, 0x20, true, 0xfedfd435e311d7ba)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAsyncUnknownMgr._dwFlags", dw_flags, 0x180, 0x20, true, 0x2394bc669fe5b36a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_client_call_mgr_t*), "CAsyncUnknownMgr._pNextMgr", p_next_mgr, 0x1c0, 0x40, true, 0xa77171d0b621e789)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAsyncUnknownMgr._cRefs", c_refs, 0x200, 0x20, true, 0x4836b26806de225b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CAsyncUnknownMgr._pUnkOuter", p_unk_outer, 0x240, 0x40, true, 0xb1cbfcc0a916d95c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CAsyncUnknownMgr._pStdId", p_std_id, 0x280, 0x40, true, 0xbf026c1934755b9f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CAsyncUnknownMgr._pARUObj", p_aru_obj, 0x2c0, 0x40, true, 0x72ee3c44c7bcbc59)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::async_i_rem_unknown2_t*), "CAsyncUnknownMgr._pARU", p_aru, 0x300, 0x40, true, 0x1e52b11ea5d8df27)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::multi_qi_t), "CAsyncUnknownMgr._MQI", mqi, 0x340, 0xc0, true, 0x9e2b30cf0e7ff645)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAsyncUnknownMgr._ulRefs", ul_refs, 0x400, 0x20, true, 0xfb6ee181299039a7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::qicontext_t*), "CAsyncUnknownMgr._pQIC", p_qic, 0x440, 0x40, true, 0xd45381e54deec2ec)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAsyncUnknownMgr._cAcquired", c_acquired, 0x480, 0x20, true, 0x3fb2106a48ad00cc)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAsyncUnknownMgr._cMQIs", c_mq_is, 0x4a0, 0x20, true, 0x96a870a10b8b87a4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "CAsyncUnknownMgr._pIIDs", p_ii_ds, 0x4c0, 0x40, true, 0x84d8208471e64fc9)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::multi_qi_t**), "CAsyncUnknownMgr._ppMQI", pp_mqi, 0x500, 0x40, true, 0xbb263b63b1f332d7)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::multi_qi_t*), "CAsyncUnknownMgr._pMQISave", p_mqi_save, 0x540, 0x40, true, 0x358977c79178c061)
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
#endif