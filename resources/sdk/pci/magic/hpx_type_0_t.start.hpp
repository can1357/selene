#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HPX_TYPE_0.CacheLineSize", cache_line_size, 0x0, 0x8, true, 0xb850d16f77ce4470)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HPX_TYPE_0.LatencyTimer", latency_timer, 0x8, 0x8, true, 0xedc437a74a67ed80)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HPX_TYPE_0.EnableSERR", enable_serr, 0x10, 0x8, true, 0x37b45e4168e70303)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HPX_TYPE_0.EnablePERR", enable_perr, 0x18, 0x8, true, 0xb26edee2134b4010)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif