#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_ALLOCATIONLIST.hDeviceSpecificAllocation", h_device_specific_allocation, 0x0, 0x40, true, 0x73df00be5cebdc68)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONLIST.WriteOperation", write_operation, 0x40, 0x1, true, 0x3502f37101ff8e63, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_DXGK_ALLOCATIONLIST.SegmentId", segment_id, 0x41, 0x5, true, 0x4df2a9d8418093ba, 5, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_ALLOCATIONLIST.PhysicalAddress", physical_address, 0x80, 0x40, true, 0x383c647b42b0d5ec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ALLOCATIONLIST.VirtualAddress", virtual_address, 0x80, 0x40, true, 0x943df53d8103e435)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif