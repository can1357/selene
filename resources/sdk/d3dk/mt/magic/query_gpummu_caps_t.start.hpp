#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERY_GPUMMU_CAPS.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0x84911c19c7b9bb57)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::gpummu_caps_t), "_D3DKMT_QUERY_GPUMMU_CAPS.Caps", caps, 0x20, 0x40, true, 0x5f6175ea5cb6bb52)
#else
#define _m00
#define _m01
#endif