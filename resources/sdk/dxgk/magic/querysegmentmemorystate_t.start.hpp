#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_QUERYSEGMENTMEMORYSTATE.DriverSegmentId", driver_segment_id, 0x0, 0x10, true, 0xcc871817d4fcaef9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_QUERYSEGMENTMEMORYSTATE.PhysicalAdapterIndex", physical_adapter_index, 0x10, 0x10, true, 0xb7463fa4958d2787)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTMEMORYSTATE.NumInvalidMemoryRanges", num_invalid_memory_ranges, 0x20, 0x20, true, 0x877faec01d4039f7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTMEMORYSTATE.NumUEFIFrameBufferRanges", num_uefi_frame_buffer_ranges, 0x20, 0x20, true, 0x463d9eadc3e4c009)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::memoryrange_t*), "_DXGK_QUERYSEGMENTMEMORYSTATE.pMemoryRanges", p_memory_ranges, 0x40, 0x40, true, 0x52e28dd708f13676)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif