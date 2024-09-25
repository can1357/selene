#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_MAPCPUHOSTAPERTURE.hAllocation", h_allocation, 0x0, 0x40, true, 0x8438fd0e43ec040b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_MAPCPUHOSTAPERTURE.SegmentId", segment_id, 0x40, 0x10, true, 0x5968e5e66db7d283)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_MAPCPUHOSTAPERTURE.PhysicalAdapterIndex", physical_adapter_index, 0x50, 0x10, true, 0xdb692faa120bb1e3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_MAPCPUHOSTAPERTURE.NumberOfPages", number_of_pages, 0x80, 0x40, true, 0x9bcac133c3ce1a14)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_DXGKARG_MAPCPUHOSTAPERTURE.pCpuHostAperturePages", p_cpu_host_aperture_pages, 0xc0, 0x40, true, 0xb49ba95937c65a27)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_DXGKARG_MAPCPUHOSTAPERTURE.pMemorySegmentPages", p_memory_segment_pages, 0x100, 0x40, true, 0x8af578ab61106fd7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif