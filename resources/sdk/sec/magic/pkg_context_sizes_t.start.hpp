#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_Sizes.cbMaxToken", cb_max_token, 0x0, 0x20, true, 0x9ef4f302c1872ae2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_Sizes.cbMaxSignature", cb_max_signature, 0x20, 0x20, true, 0xe999df7f09615033)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_Sizes.cbBlockSize", cb_block_size, 0x40, 0x20, true, 0x2c2eaa8b72287e7c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_Sizes.cbSecurityTrailer", cb_security_trailer, 0x60, 0x20, true, 0x202234dbd8bd7b4b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif