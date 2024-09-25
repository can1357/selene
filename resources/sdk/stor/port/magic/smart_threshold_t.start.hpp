#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMART_THRESHOLD.Id", id, 0x0, 0x8, true, 0x61b6ac655bb76ee6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMART_THRESHOLD.Value", value, 0x8, 0x8, true, 0xdcea64521794d116)
#else
#define _m00
#define _m01
#endif