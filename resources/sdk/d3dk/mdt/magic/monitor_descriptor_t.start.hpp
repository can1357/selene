#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_MONITOR_DESCRIPTOR.Id", id, 0x0, 0x20, true, 0x6bd8992b9e664e79)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_descriptor_type_t), "_D3DKMDT_MONITOR_DESCRIPTOR.Type", type, 0x20, 0x20, true, 0x2d5ec1319dde8f69)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMDT_MONITOR_DESCRIPTOR.DataSize", data_size, 0x40, 0x40, true, 0xdb97f6073ffb77b4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMDT_MONITOR_DESCRIPTOR.pData", p_data, 0x80, 0x40, true, 0x9936a418091fc9be)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_capabilities_origin_t), "_D3DKMDT_MONITOR_DESCRIPTOR.Origin", origin, 0xc0, 0x20, true, 0x7caade05498700c3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif