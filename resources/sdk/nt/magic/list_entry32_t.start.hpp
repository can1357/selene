#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "LIST_ENTRY32.Flink", flink, 0x0, 0x20, true, 0x22ec55b990c88212)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "LIST_ENTRY32.Blink", blink, 0x20, 0x20, true, 0x297459ec47917cc6)
#else
#define _m00
#define _m01
#endif