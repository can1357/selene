#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_BIOMETRIC_DATA.dwTypeOfBiometricDataChoice", dw_type_of_biometric_data_choice, 0x0, 0x20, true, 0xdb71289ed3b76e02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_BIOMETRIC_DATA.dwPredefined", dw_predefined, 0x40, 0x20, true, 0xeb101f11d216b2a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_BIOMETRIC_DATA.pszObjId", psz_obj_id, 0x40, 0x40, true, 0x4a9a2269b02b6654)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_hashed_url_t), "_CERT_BIOMETRIC_DATA.HashedUrl", hashed_url, 0x80, 0x80, true, 0x90a7d83f94aeb5ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif