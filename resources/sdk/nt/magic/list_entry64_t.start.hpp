#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "LIST_ENTRY64.Flink", flink, 0x0, 0x40, true, 0xfd37ee5dfdbc30b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "LIST_ENTRY64.Blink", blink, 0x40, 0x40, true, 0xf5290bc1584c11d0)
#else
#define _m00
#define _m01
#endif