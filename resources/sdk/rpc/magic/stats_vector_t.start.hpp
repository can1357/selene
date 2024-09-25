#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_STATS_VECTOR.Count", count, 0x0, 0x20, true, 0x48f94dd4ad1afed8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "RPC_STATS_VECTOR.Stats", stats, 0x20, 0x20, true, 0xb3c5e75646fdf027)
#else
#define _m00
#define _m01
#endif