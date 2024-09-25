#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STRONG_SIGN_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x60be876a4d7564fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STRONG_SIGN_PARA.dwInfoChoice", dw_info_choice, 0x20, 0x20, true, 0x719c9678c04cba59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_STRONG_SIGN_PARA.pvInfo", pv_info, 0x40, 0x40, true, 0xa8bb533f4b3c22cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_strong_sign_serialized_info_t*), "_CERT_STRONG_SIGN_PARA.pSerializedInfo", p_serialized_info, 0x40, 0x40, true, 0x8da3b5ec39d92e3a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_STRONG_SIGN_PARA.pszOID", psz_oid, 0x40, 0x40, true, 0xe1889d23d43397d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif