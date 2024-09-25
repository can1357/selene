#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MnkEqBuf.cdwSize", cdw_size, 0x0, 0x20, true, 0x307ed9ee1f2a798d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MnkEqBuf.abEqData", ab_eq_data, 0x20, 0x8, true, 0xbdb25c472d512be5)
#else
#define _m00
#define _m01
#endif