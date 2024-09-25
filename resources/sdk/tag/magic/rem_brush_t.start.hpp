#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemBRUSH.cbData", cb_data, 0x0, 0x20, true, 0x7e7c9a75ef8fb6ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRemBRUSH.data", data, 0x20, 0x8, true, 0x7e762398703a9e68)
#else
#define _m00
#define _m01
#endif