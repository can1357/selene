#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEGMENT_HEAP_EXTRA.AllocationTag", allocation_tag, 0x0, 0x10, true, 0xfa5420ad8770b14a)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SEGMENT_HEAP_EXTRA.InterceptorIndex", interceptor_index, 0x10, 0x4, true, 0x63ff03cf1415102c, 4, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SEGMENT_HEAP_EXTRA.UserFlags", user_flags, 0x14, 0x4, true, 0x512c006243f0a2c5, 4, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEGMENT_HEAP_EXTRA.ExtraSizeInUnits", extra_size_in_units, 0x18, 0x8, true, 0x5460cd1913710434)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEGMENT_HEAP_EXTRA.Settable", settable, 0x40, 0x40, true, 0x1463a8c467acf199)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif