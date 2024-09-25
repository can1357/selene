#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFNLIST_SHORT.Total", total, 0x0, 0x40, true, 0x445806a15f6a913e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFNLIST_SHORT.Flink", flink, 0x40, 0x40, true, 0xfabbe30f31ffd7fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFNLIST_SHORT.Blink", blink, 0x80, 0x40, true, 0x86e0316175bf28af)
#else
#define _m00
#define _m01
#define _m02
#endif