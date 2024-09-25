#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_OBJID_TABLE.dwAlgId", dw_alg_id, 0x0, 0x20, true, 0xd7428ea164e76590)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CRYPT_OBJID_TABLE.pszObjId", psz_obj_id, 0x40, 0x40, true, 0x5f89635eed843f66)
#else
#define _m00
#define _m01
#endif