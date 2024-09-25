#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CONTEXTINFO_CAPS.NoPatchingRequired", no_patching_required, 0x0, 0x1, true, 0xd94768ebeefbf391, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CONTEXTINFO_CAPS.DriverManagesResidency", driver_manages_residency, 0x1, 0x1, true, 0x8d97fd9813909b3c, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CONTEXTINFO_CAPS.UseIoMmu", use_io_mmu, 0x2, 0x1, true, 0xbcac2fe6337bd3d0, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONTEXTINFO_CAPS.Value", value, 0x0, 0x20, true, 0xc955a69ed920979d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif