#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_ARG_BLT_FLAGS.Resolve", resolve, 0x0, 0x1, true, 0x778bb5d9acb02ed3, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_ARG_BLT_FLAGS.Convert", convert, 0x1, 0x1, true, 0x92df62aefff85b1f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_ARG_BLT_FLAGS.Stretch", stretch, 0x2, 0x1, true, 0x242c321ebbf0e7ce, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_ARG_BLT_FLAGS.Present", present, 0x3, 0x1, true, 0x81091a41671183cf, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT_FLAGS.Value", value, 0x0, 0x20, true, 0xd973996d4ab60a17)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif