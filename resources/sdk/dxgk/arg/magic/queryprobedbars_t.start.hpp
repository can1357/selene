#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYPROBEDBARS.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x5456859aafcbc84a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_DXGKARG_QUERYPROBEDBARS.BaseRegisterValues", base_register_values, 0x40, 0x40, true, 0x888f7e4f34772564)
#else
#define _m00
#define _m01
#endif