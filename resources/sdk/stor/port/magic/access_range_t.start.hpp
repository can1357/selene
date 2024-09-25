#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_ACCESS_RANGE.RangeStart", range_start, 0x0, 0x40, true, 0x1ed51810a3f46556)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_RANGE.RangeLength", range_length, 0x40, 0x20, true, 0x11ff1d50f57dba9a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACCESS_RANGE.RangeInMemory", range_in_memory, 0x60, 0x8, true, 0x362fd0cce5ec972c)
#else
#define _m00
#define _m01
#define _m02
#endif