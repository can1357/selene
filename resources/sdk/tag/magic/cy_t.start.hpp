#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCY.Lo", lo, 0x0, 0x20, true, 0x6acd749b9e224386)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCY.Hi", hi, 0x20, 0x20, true, 0x5365a9382e18250b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagCY.int64", int64, 0x0, 0x40, true, 0x6d4c383845fbe4d5)
#else
#define _m00
#define _m01
#define _m02
#endif