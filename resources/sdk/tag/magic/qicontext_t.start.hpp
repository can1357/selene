#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagQICONTEXT.dwFlags", dw_flags, 0x0, 0x20, true, 0x98bec72dda086ff3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::async_i_rem_unknown2_t*), "tagQICONTEXT.pARU", p_aru, 0x40, 0x40, true, 0x4f6ccc1c3bd12f65)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagQICONTEXT.cIIDs", c_ii_ds, 0x80, 0x10, true, 0x1f5aa10d89931063)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "tagQICONTEXT.pIIDs", p_ii_ds, 0xc0, 0x40, true, 0xa965d885653fc3c0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "tagQICONTEXT.hr", hr, 0x100, 0x20, true, 0xd8aaed5c3cde4e78)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::remqiresult_t*), "tagQICONTEXT.pRemQiRes", p_rem_qi_res, 0x140, 0x40, true, 0x3410d5e8e788b63c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "tagQICONTEXT.pIPIDEntry", p_ipid_entry, 0x180, 0x40, true, 0x34fc34368dc6017d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_marshal_t*), "tagQICONTEXT.pIM", p_im, 0x1c0, 0x40, true, 0x82a7e718ed2719b4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult*), "tagQICONTEXT.phr", phr, 0x200, 0x40, true, 0x9465d04e11d0a30f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t**), "tagQICONTEXT.ppMIFs", pp_mi_fs, 0x240, 0x40, true, 0xbf47d28ed4b08a46)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagQICONTEXT.data", data, 0x280, 0x8, true, 0xca7f6f2277e2675c)
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
#endif