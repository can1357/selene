#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDEVICELOCATION.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0xf2d9eea2fb409a9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDEVICELOCATION.SegmentNumber", segment_number, 0x20, 0x20, true, 0x7e4aa3282a95a671)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDEVICELOCATION.BusNumber", bus_number, 0x40, 0x20, true, 0x4863e0735e419100)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDEVICELOCATION.FunctionNumber", function_number, 0x60, 0x20, true, 0x3999e9d482133fe1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif