#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMInterfacePointer.ulCntData", ul_cnt_data, 0x0, 0x20, true, 0xd8ba4ff837eb5087)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagMInterfacePointer.abData", ab_data, 0x20, 0x8, true, 0xd3529a124e760670)
#else
#define _m00
#define _m01
#endif