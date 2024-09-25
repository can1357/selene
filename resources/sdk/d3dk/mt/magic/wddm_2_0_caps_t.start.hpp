#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_0_CAPS.Support64BitAtomics", support64_bit_atomics, 0x0, 0x1, true, 0x5388be54be2ec4d9, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_0_CAPS.GpuMmuSupported", gpu_mmu_supported, 0x1, 0x1, true, 0x19bd0989d15e9554, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_0_CAPS.IoMmuSupported", io_mmu_supported, 0x2, 0x1, true, 0x721f63fbee4a2b11, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_0_CAPS.FlipOverwriteSupported", flip_overwrite_supported, 0x3, 0x1, true, 0x2cabd60091afb4a1, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_0_CAPS.SupportContextlessPresent", support_contextless_present, 0x4, 0x1, true, 0x1214144ea3e3779f, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_0_CAPS.SupportSurpriseRemoval", support_surprise_removal, 0x5, 0x1, true, 0xd725813f1de1cae3, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WDDM_2_0_CAPS.Value", value, 0x0, 0x20, true, 0xa9bd0b6e1116648e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif