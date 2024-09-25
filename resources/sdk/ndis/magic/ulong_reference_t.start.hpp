#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ULONG_REFERENCE.SpinLock", spin_lock, 0x0, 0x40, true, 0x2dc82edd2b742abf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ULONG_REFERENCE.ReferenceCount", reference_count, 0x40, 0x20, true, 0xf1a12e175d2b60c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ULONG_REFERENCE.Closing", closing, 0x60, 0x8, true, 0xa945b37a552e9022)
#else
#define _m00
#define _m01
#define _m02
#endif