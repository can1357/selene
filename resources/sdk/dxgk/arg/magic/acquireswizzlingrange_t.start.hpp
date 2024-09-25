#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_ACQUIRESWIZZLINGRANGE.hAllocation", h_allocation, 0x0, 0x40, true, 0x699daaa76ededa56)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_ACQUIRESWIZZLINGRANGE.PrivateDriverData", private_driver_data, 0x40, 0x20, true, 0xa32f51db03027549)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_ACQUIRESWIZZLINGRANGE.RangeId", range_id, 0x60, 0x20, true, 0xe02ff9239a9d77a3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_ACQUIRESWIZZLINGRANGE.SegmentId", segment_id, 0x80, 0x20, true, 0xf0529c9909ab2467)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_ACQUIRESWIZZLINGRANGE.RangeSize", range_size, 0xc0, 0x40, true, 0x288caef34c098ca1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_ACQUIRESWIZZLINGRANGE.CPUTranslatedAddress", cpu_translated_address, 0x100, 0x40, true, 0x2a37ae11770697a3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif