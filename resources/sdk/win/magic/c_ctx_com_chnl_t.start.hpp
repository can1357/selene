#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t const*), "CCtxComChnl._pStdId", p_std_id, 0x180, 0x40, true, 0xbdbf5bac7c3f0090)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t const*), "CCtxComChnl._pOXIDEntry", p_oxid_entry, 0x1c0, 0x40, true, 0x68ef44e3d063a3dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CCtxComChnl._bFreeThreaded", b_free_threaded, 0x200, 0x8, true, 0xd967b9cba5ef1b78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CCtxComChnl._dwAptId", dw_apt_id, 0x220, 0x20, true, 0x38ca20e7a2c8d4ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif