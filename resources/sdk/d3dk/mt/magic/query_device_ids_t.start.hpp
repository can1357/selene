#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERY_DEVICE_IDS.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0x9abc40a8fe1b3a95)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::device_ids_t), "_D3DKMT_QUERY_DEVICE_IDS.DeviceIds", device_ids, 0x20, 0xc0, true, 0x40ac6d17fb28b3c9)
#else
#define _m00
#define _m01
#endif