#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK.Data", data, 0x0, 0x40, true, 0xdba17065d031c084)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK.VirtualFunctionIndex", virtual_function_index, 0x40, 0x20, true, 0x8835b98043cef67a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK.BlockId", block_id, 0x60, 0x20, true, 0xab2608bdb8cf57d1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK.Length", length, 0x80, 0x20, true, 0x5dc0411eb0c476f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif