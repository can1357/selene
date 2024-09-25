#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.Data", data, 0x0, 0x40, true, 0x5a5f18af1ed72293)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.VirtualFunctionIndex", virtual_function_index, 0x40, 0x20, true, 0xa6b5fc0a685d4726)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.Offset", offset, 0x60, 0x20, true, 0x511dcaedcdfabc8d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.Length", length, 0x80, 0x20, true, 0x4acea8e5ef008fb0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif