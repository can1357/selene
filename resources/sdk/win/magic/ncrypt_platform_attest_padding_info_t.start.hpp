#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_PLATFORM_ATTEST_PADDING_INFO.magic", magic, 0x0, 0x20, true, 0x688d70189ed763c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_PLATFORM_ATTEST_PADDING_INFO.pcrMask", pcr_mask, 0x20, 0x20, true, 0x32a5eabd082e46c8)
#else
#define _m00
#define _m01
#endif