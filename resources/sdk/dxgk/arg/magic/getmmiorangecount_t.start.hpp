#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMMIORANGECOUNT.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0xf35a8f3a7ee3739e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_DXGKARG_GETMMIORANGECOUNT.RangeCount", range_count, 0x20, 0xc0, true, 0x646600cb1fd67852)
#else
#define _m00
#define _m01
#endif