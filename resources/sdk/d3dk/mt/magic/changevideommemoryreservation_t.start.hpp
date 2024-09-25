#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION.hProcess", h_process, 0x0, 0x40, true, 0xabe6976e703e2f07)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION.hAdapter", h_adapter, 0x40, 0x20, true, 0xf4dade64ec30755a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::memory_segment_group_t), "_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION.MemorySegmentGroup", memory_segment_group, 0x60, 0x20, true, 0xb37238a43856a954)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION.Reservation", reservation, 0x80, 0x40, true, 0x6d0ed69160c883ec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION.PhysicalAdapterIndex", physical_adapter_index, 0xc0, 0x20, true, 0xcc93a9d2f0fde2e0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif