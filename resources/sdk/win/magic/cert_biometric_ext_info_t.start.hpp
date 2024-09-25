#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_BIOMETRIC_EXT_INFO.cBiometricData", c_biometric_data, 0x0, 0x20, true, 0xdc27a0b1929a6dc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_biometric_data_t*), "_CERT_BIOMETRIC_EXT_INFO.rgBiometricData", rg_biometric_data, 0x40, 0x40, true, 0xa1dc6e74f2fc7504)
#else
#define _m00
#define _m01
#endif