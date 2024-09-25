#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_READVIRTUALFUNCTIONCONFIG.Data", data, 0x0, 0x40, true, 0x3ffe4076be1242d4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_READVIRTUALFUNCTIONCONFIG.VirtualFunctionIndex", virtual_function_index, 0x40, 0x20, true, 0x71236346b9dc840)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_READVIRTUALFUNCTIONCONFIG.Offset", offset, 0x60, 0x20, true, 0xf1c549ddc8a7f1b0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_READVIRTUALFUNCTIONCONFIG.Length", length, 0x80, 0x20, true, 0x3638c947892fc933)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif