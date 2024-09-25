#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_ECCKEY_BLOB.dwCurveType", dw_curve_type, 0x0, 0x20, true, 0xb3dd745f703a3df0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_ECCKEY_BLOB.cbKey", cb_key, 0x20, 0x20, true, 0xa833400b44509b13)
#else
#define _m00
#define _m01
#endif