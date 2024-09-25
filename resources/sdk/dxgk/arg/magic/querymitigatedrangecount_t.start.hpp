#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYMITIGATEDRANGECOUNT.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x1ca26c17b839c264)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_DXGKARG_QUERYMITIGATEDRANGECOUNT.RangeCount", range_count, 0x20, 0xc0, true, 0x5097f35a1d6e67f4)
#else
#define _m00
#define _m01
#endif