#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_DXGK_GPUVERSION.BiosVersion", bios_version, 0x0, 0x0, true, 0x11dad4b176e6d8ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_DXGK_GPUVERSION.GpuArchitecture", gpu_architecture, 0x200, 0x0, true, 0x1bddbbf25500b21b)
#else
#define _m00
#define _m01
#endif