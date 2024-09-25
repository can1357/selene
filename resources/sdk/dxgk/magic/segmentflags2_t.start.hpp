#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS2.Aperture", aperture, 0x0, 0x1, true, 0xfc62c1e072be8bf, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS2.PopulatedFromSystemMemory", populated_from_system_memory, 0x1, 0x1, true, 0xe335bbc183d38519, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS2.SystemMemoryReservedByBios", system_memory_reserved_by_bios, 0x2, 0x1, true, 0x362b6e9bf29c8a39, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS2.CpuVisible", cpu_visible, 0x3, 0x1, true, 0xa82e4d70a205931d, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTFLAGS2.Value", value, 0x0, 0x20, true, 0x8c0350cf9b90b61a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif