#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MP_DEVICE_DATA_SET_RANGE.StartingOffset", starting_offset, 0x0, 0x40, true, 0xb0123c5c4d05f012)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MP_DEVICE_DATA_SET_RANGE.LengthInBytes", length_in_bytes, 0x40, 0x40, true, 0xba6200c2333a4129)
#else
#define _m00
#define _m01
#endif