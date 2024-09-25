#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRESENTMULTIPLANEOVERLAYLIST.LayerIndex", layer_index, 0x0, 0x20, true, 0xfc4dd0306b3cd126)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_PRESENTMULTIPLANEOVERLAYLIST.Enabled", enabled, 0x20, 0x20, true, 0xff4f558cbdefdc3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_PRESENTMULTIPLANEOVERLAYLIST.hDeviceSpecificAllocation", h_device_specific_allocation, 0x40, 0x40, true, 0xdb09dbe9480ce9f2)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_DXGK_PRESENTMULTIPLANEOVERLAYLIST.SegmentId", segment_id, 0x80, 0x5, true, 0x858fc67d9d019419, 5, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_PRESENTMULTIPLANEOVERLAYLIST.PhysicalAddress", physical_address, 0xc0, 0x40, true, 0x893ddea8a1e18194)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif