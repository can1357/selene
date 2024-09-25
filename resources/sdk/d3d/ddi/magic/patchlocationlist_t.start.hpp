#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_PATCHLOCATIONLIST.AllocationIndex", allocation_index, 0x0, 0x20, true, 0xa9ac70c3c99db603)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_D3DDDI_PATCHLOCATIONLIST.SlotId", slot_id, 0x20, 0x18, true, 0x67b8bd8cf63cfc25, 24, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_PATCHLOCATIONLIST.Value", value, 0x20, 0x20, true, 0xa05d72366d46a85d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_PATCHLOCATIONLIST.DriverId", driver_id, 0x40, 0x20, true, 0xc43eff7f6823bae0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_PATCHLOCATIONLIST.AllocationOffset", allocation_offset, 0x60, 0x20, true, 0x7ac3ad1dfbf4150d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_PATCHLOCATIONLIST.PatchOffset", patch_offset, 0x80, 0x20, true, 0xc99eac51a5a2bdaa)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_PATCHLOCATIONLIST.SplitOffset", split_offset, 0xa0, 0x20, true, 0x3b32d29c6319f482)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif