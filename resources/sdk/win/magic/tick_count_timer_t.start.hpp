#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "TickCountTimer._dwTimeout", dw_timeout, 0x0, 0x20, true, 0x358dc9e3a009bf34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "TickCountTimer._initialCount", initial_count, 0x40, 0x40, true, 0x9ddb24827561b406)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "TickCountTimer._bStarted", b_started, 0x80, 0x8, true, 0x1a6393047284a1cd)
#else
#define _m00
#define _m01
#define _m02
#endif