#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_STORAGE_RANGE_ATTRIBUTES.LengthInBytes", length_in_bytes, 0x0, 0x40, true, 0x8327af92deb6fb5e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_STORAGE_RANGE_ATTRIBUTES.AllFlags", all_flags, 0x40, 0x20, true, 0x22fc61865a0e8925)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_STORAGE_RANGE_ATTRIBUTES.IsRangeBad", is_range_bad, 0x40, 0x1, true, 0x67eae9b79ade058b, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif