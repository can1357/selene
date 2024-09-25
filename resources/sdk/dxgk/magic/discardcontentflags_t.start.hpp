#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DISCARDCONTENTFLAGS.AllocationIsIdle", allocation_is_idle, 0x0, 0x1, true, 0x81822bcbfe29a2cb, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISCARDCONTENTFLAGS.Value", value, 0x0, 0x20, true, 0x93fd56a65985bc36)
#else
#define _m00
#define _m01
#endif