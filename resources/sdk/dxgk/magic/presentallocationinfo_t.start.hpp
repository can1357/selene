#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_PRESENTALLOCATIONINFO.hDeviceSpecificAllocation", h_device_specific_allocation, 0x0, 0x40, true, 0x4f41088d307c88e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_PRESENTALLOCATIONINFO.AllocationVirtualAddress", allocation_virtual_address, 0x40, 0x40, true, 0x54d3d13c2a0ff6e5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_PRESENTALLOCATIONINFO.PhysicalAddress", physical_address, 0x80, 0x40, true, 0x3f8604e5f18657cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_PRESENTALLOCATIONINFO.SegmentId", segment_id, 0xc0, 0x10, true, 0x94730371231318da)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_PRESENTALLOCATIONINFO.PhysicalAdapterIndex", physical_adapter_index, 0xd0, 0x10, true, 0x98d0884007a4fd73)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif