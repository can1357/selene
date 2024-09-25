#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_DESTROYALLOCATION2FLAGS.AssumeNotInUse", assume_not_in_use, 0x0, 0x1, true, 0xbc35b0aece65863c, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_DESTROYALLOCATION2FLAGS.SynchronousDestroy", synchronous_destroy, 0x1, 0x1, true, 0x7fbbcf1bff9da627, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_DESTROYALLOCATION2FLAGS.SystemUseOnly", system_use_only, 0x1f, 0x1, true, 0x71fe81aef37f3ad4, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDICB_DESTROYALLOCATION2FLAGS.Value", value, 0x0, 0x20, true, 0xa221f4b94f79761f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif