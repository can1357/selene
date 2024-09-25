#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRANSFERFLAGS.Swizzle", swizzle, 0x0, 0x1, true, 0xee400531281634e2, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRANSFERFLAGS.Unswizzle", unswizzle, 0x1, 0x1, true, 0x758e375f177d0440, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRANSFERFLAGS.AllocationIsIdle", allocation_is_idle, 0x2, 0x1, true, 0x75dce99c5a7763ab, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRANSFERFLAGS.TransferStart", transfer_start, 0x3, 0x1, true, 0x94d92e7dd780cc8b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRANSFERFLAGS.TransferEnd", transfer_end, 0x4, 0x1, true, 0x6aded46c3213338, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_TRANSFERFLAGS.Value", value, 0x0, 0x20, true, 0xd34cf8398763211)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif