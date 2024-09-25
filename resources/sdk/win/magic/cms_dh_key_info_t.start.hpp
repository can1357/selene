#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMS_DH_KEY_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x3a72fcdccbff902b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMS_DH_KEY_INFO.Algid", algid, 0x20, 0x20, true, 0xa68e89f76fab7f0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CMS_DH_KEY_INFO.pszContentEncObjId", psz_content_enc_obj_id, 0x40, 0x40, true, 0x8017660e27d6eb64)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMS_DH_KEY_INFO.PubInfo", pub_info, 0x80, 0x80, true, 0xc6eed9df0d279e38)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMS_DH_KEY_INFO.pReserved", p_reserved, 0x100, 0x40, true, 0xc5ff4439cd839e32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif