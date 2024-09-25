#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDP_GETCOLDESC_DBG.BreakOffset", break_offset, 0x0, 0x20, true, 0xf3b1a67708e06ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDP_GETCOLDESC_DBG.ErrorCode", error_code, 0x20, 0x20, true, 0x5160e393b0430c3b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_HIDP_GETCOLDESC_DBG.Args", args, 0x40, 0xc0, true, 0xa8d31ed1162f7a69)
#else
#define _m00
#define _m01
#define _m02
#endif