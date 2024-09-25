#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgCredentials_Cert.EncodedCertSize", encoded_cert_size, 0x0, 0x20, true, 0x2a8cd68bbefafb51)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SecPkgCredentials_Cert.EncodedCert", encoded_cert, 0x40, 0x40, true, 0xdc3e85629a2d548a)
#else
#define _m00
#define _m01
#endif