#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HV_GET_CELL_CONTEXT.Cell", cell, 0x0, 0x20, true, 0x28e294246de1a260)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::get_bin_context_t), "_HV_GET_CELL_CONTEXT.BinContext", bin_context, 0x20, 0x10, true, 0xd8cd1fd08a710e3c)
#else
#define _m00
#define _m01
#endif