#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_PRIMARYDATA.hAllocation", h_allocation, 0x0, 0x40, true, 0xeb6ab80e661eb073)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_PRIMARYDATA.SegmentId", segment_id, 0x40, 0x10, true, 0x52f2c52c2b118298)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_PRIMARYDATA.SegmentAddress", segment_address, 0x80, 0x40, true, 0x6796421b45538f80)
#else
#define _m00
#define _m01
#define _m02
#endif