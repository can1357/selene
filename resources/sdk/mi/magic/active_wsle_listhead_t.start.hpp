#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ACTIVE_WSLE_LISTHEAD.Flink", flink, 0x0, 0x0, false, 0xab06b42965028e44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ACTIVE_WSLE_LISTHEAD.Blink", blink, 0x0, 0x0, false, 0xe7da71778f185f7f)
#else
#define _m00
#define _m01
#endif