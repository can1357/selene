#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUCLOCKDATA_FLAGS.ContextManagementProcessor", context_management_processor, 0x0, 0x1, true, 0x1a4e54ef1e4d76a2, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPUCLOCKDATA_FLAGS.Value", value, 0x0, 0x20, true, 0x895dbb97dd1f3ed0)
#else
#define _m00
#define _m01
#endif