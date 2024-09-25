#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_EVICTION_CRITERIA.MinimumSize", minimum_size, 0x0, 0x40, true, 0x298202d74ce299ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_EVICTION_CRITERIA.MaximumSize", maximum_size, 0x40, 0x40, true, 0xe2285a1618273615)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_EVICTION_CRITERIA.Flags.Primary", primary, 0x0, 0x1, true, 0x48c0f397d13392d, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_D3DKMT_EVICTION_CRITERIA.Flags", flags, 0x80, 0x20, true, 0xd6a2d134a4a0cebd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_EVICTION_CRITERIA.Value", value, 0x80, 0x20, true, 0x75f5067a3ac644db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif