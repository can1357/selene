#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRYPT_PKCS12_PBE_PARAMS.iIterations", i_iterations, 0x0, 0x20, true, 0xeb09985c9b037f22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PKCS12_PBE_PARAMS.cbSalt", cb_salt, 0x20, 0x20, true, 0x619c35baa0929428)
#else
#define _m00
#define _m01
#endif