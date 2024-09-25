#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REFERENCE.SpinLock", spin_lock, 0x0, 0x40, true, 0xfd526eace31d23d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REFERENCE.ReferenceCount", reference_count, 0x40, 0x10, true, 0x5e9257aa4d2d1a41)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_REFERENCE.Closing", closing, 0x50, 0x8, true, 0x9d95b785f968ec6d)
#else
#define _m00
#define _m01
#define _m02
#endif