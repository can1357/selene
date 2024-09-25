#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_LOST_QUERY_OUTPUT.Version", version, 0x0, 0x20, true, 0x7b8254271f01480)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_LOST_QUERY_OUTPUT.Size", size, 0x20, 0x20, true, 0xbf70abb6344a1557)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DSM_LOST_QUERY_OUTPUT.Alignment", alignment, 0x40, 0x40, true, 0xa271eaa8ca7a3d61)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_LOST_QUERY_OUTPUT.NumberOfBits", number_of_bits, 0x80, 0x20, true, 0xa3be24b907efdb50)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DEVICE_DSM_LOST_QUERY_OUTPUT.BitMap", bit_map, 0xa0, 0x20, true, 0x14902c5af974877c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif