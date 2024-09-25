#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_BAD_RANGES_OUTPUT_RANGE.Flags", flags, 0x0, 0x20, true, 0xd3231814970bc5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUERY_BAD_RANGES_OUTPUT_RANGE.StartOffset", start_offset, 0x40, 0x40, true, 0xf77da6154d467e43)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUERY_BAD_RANGES_OUTPUT_RANGE.LengthInBytes", length_in_bytes, 0x80, 0x40, true, 0xb405e59492dcec7e)
#else
#define _m00
#define _m01
#define _m02
#endif