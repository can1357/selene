#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_GPUMMU_CAPS.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xb6d2d06051099e61)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::escape_gpummucaps_t), "_D3DKMT_GET_GPUMMU_CAPS.GpuMmuCaps", gpu_mmu_caps, 0x40, 0x0, true, 0x148187a21e8e5c38)
#else
#define _m00
#define _m01
#endif