#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GPUVERSION.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0x57c12e9122eecdb7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_D3DKMT_GPUVERSION.BiosVersion", bios_version, 0x20, 0x0, true, 0x78e8d12bcb7a10c1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_D3DKMT_GPUVERSION.GpuArchitecture", gpu_architecture, 0x220, 0x0, true, 0x3ad62fa88012f1b0)
#else
#define _m00
#define _m01
#define _m02
#endif