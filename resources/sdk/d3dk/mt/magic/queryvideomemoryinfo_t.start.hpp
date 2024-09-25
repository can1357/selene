#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYVIDEOMEMORYINFO.ProcessHandle", process_handle, 0x0, 0x40, true, 0x91babebf12ccff47)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYVIDEOMEMORYINFO.AdapterHandle", adapter_handle, 0x40, 0x20, true, 0x23e45ee91af43399)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::memory_segment_group_t), "_D3DKMT_QUERYVIDEOMEMORYINFO.MemorySegmentGroup", memory_segment_group, 0x60, 0x20, true, 0xec9e6a1335dfcb9b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_QUERYVIDEOMEMORYINFO.Budget", budget, 0x80, 0x40, true, 0x1a4a868edfb6433b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_QUERYVIDEOMEMORYINFO.CurrentUsage", current_usage, 0xc0, 0x40, true, 0x2f06bf69f06c9253)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_QUERYVIDEOMEMORYINFO.CurrentReservation", current_reservation, 0x100, 0x40, true, 0xb0cccf737cbafd84)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_QUERYVIDEOMEMORYINFO.AvailableForReservation", available_for_reservation, 0x140, 0x40, true, 0xc57a79846da55a28)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYVIDEOMEMORYINFO.PhysicalAdapterIndex", physical_adapter_index, 0x180, 0x20, true, 0x6e5b8f136f71a991)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif