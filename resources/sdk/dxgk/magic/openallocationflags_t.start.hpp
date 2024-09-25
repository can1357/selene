#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_OPENALLOCATIONFLAGS.Create", create, 0x0, 0x1, true, 0x91d1a8f522a4a52, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_OPENALLOCATIONFLAGS.ReadOnly", read_only, 0x1, 0x1, true, 0xea7b2cc241c50c28, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_OPENALLOCATIONFLAGS.Value", value, 0x0, 0x20, true, 0x11c1a489e5392212)
#else
#define _m00
#define _m01
#define _m02
#endif