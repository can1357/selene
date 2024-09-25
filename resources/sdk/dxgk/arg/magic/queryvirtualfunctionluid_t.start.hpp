#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYVIRTUALFUNCTIONLUID.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x9eafe008c859e3f4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t*), "_DXGKARG_QUERYVIRTUALFUNCTIONLUID.pLuid", p_luid, 0x40, 0x40, true, 0x5a9bf219584ca8fd)
#else
#define _m00
#define _m01
#endif