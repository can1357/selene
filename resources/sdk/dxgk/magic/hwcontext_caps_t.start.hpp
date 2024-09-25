#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_HWCONTEXT_CAPS.UseIoMmu", use_io_mmu, 0x0, 0x1, true, 0x18eb271ad3f361c7, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_HWCONTEXT_CAPS.Value", value, 0x0, 0x20, true, 0x5ad6d91be81f6318)
#else
#define _m00
#define _m01
#endif