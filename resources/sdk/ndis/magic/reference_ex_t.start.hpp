#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REFERENCE_EX.SpinLock", spin_lock, 0x0, 0x40, true, 0x97c97508c5374741)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REFERENCE_EX.ReferenceCount", reference_count, 0x40, 0x10, true, 0x8bac5db1d9c92594)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_REFERENCE_EX.Closing", closing, 0x50, 0x8, true, 0x5259a0c94c31dc82)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_REFERENCE_EX.ZeroBased", zero_based, 0x58, 0x8, true, 0x4b24ee492879117b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_handle_t*), "_REFERENCE_EX.RefCountTracker", ref_count_tracker, 0x80, 0x40, true, 0xebba55af58218df8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif