#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_UNMAPCPUHOSTAPERTURE.NumberOfPages", number_of_pages, 0x0, 0x40, true, 0xf66a7ac65238231f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_DXGKARG_UNMAPCPUHOSTAPERTURE.pCpuHostAperturePages", p_cpu_host_aperture_pages, 0x40, 0x40, true, 0xaa70ae0239329b1d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_UNMAPCPUHOSTAPERTURE.SegmentId", segment_id, 0x80, 0x10, true, 0x34af3b8da0396d01)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_UNMAPCPUHOSTAPERTURE.PhysicalAdapterIndex", physical_adapter_index, 0x90, 0x10, true, 0xa47d7979329b016f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif