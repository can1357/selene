#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_MISC_CSR.MRSEncoding", mrs_encoding, 0x0, 0x10, true, 0x7edb29998d390d37)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_MISC_CSR.Value", value, 0x10, 0x40, true, 0xa6a033c32ea20125)
#else
#define _m00
#define _m01
#endif