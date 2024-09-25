#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_GPUMMU_CAPS.Flags.ReadOnlyMemorySupported", read_only_memory_supported, 0x0, 0x1, true, 0x702f09cf9a1452fc, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_GPUMMU_CAPS.Flags.NoExecuteMemorySupported", no_execute_memory_supported, 0x1, 0x1, true, 0xc9fb28a9d006de98, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_GPUMMU_CAPS.Flags.CacheCoherentMemorySupported", cache_coherent_memory_supported, 0x2, 0x1, true, 0x2c35655760b7390b, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GPUMMU_CAPS.Flags.Value", value, 0x0, 0x20, true, 0xfbc4771949abc2e1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_D3DKMT_GPUMMU_CAPS.Flags", flags, 0x0, 0x20, true, 0xcdd50e19d21b603)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GPUMMU_CAPS.VirtualAddressBitCount", virtual_address_bit_count, 0x20, 0x20, true, 0xbf4b97e2e02f561)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif