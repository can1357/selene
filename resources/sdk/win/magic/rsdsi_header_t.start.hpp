#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDSI_HEADER.dwSig", dw_sig, 0x0, 0x20, true, 0x5b5fc6f7b0c0224c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RSDSI_HEADER.guidSig", guid_sig, 0x20, 0x80, true, 0xf996c08b9310c4d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDSI_HEADER.age", age, 0xa0, 0x20, true, 0xf084e6ab0d7ff99d)
#else
#define _m00
#define _m01
#define _m02
#endif