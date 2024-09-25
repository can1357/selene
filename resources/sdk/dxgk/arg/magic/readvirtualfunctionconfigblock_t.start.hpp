#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK.Data", data, 0x0, 0x40, true, 0x32fbf988934fabb7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK.VirtualFunctionIndex", virtual_function_index, 0x40, 0x20, true, 0x632cd0cde3c439ca)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK.BlockId", block_id, 0x60, 0x20, true, 0x4ce2917762f8e08d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK.Length", length, 0x80, 0x20, true, 0x42b59c5a222a24b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif