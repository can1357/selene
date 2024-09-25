#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DESTROYALLOCATIONFLAGS.DestroyResource", destroy_resource, 0x0, 0x1, true, 0x9b9686dd70afd32f, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DESTROYALLOCATIONFLAGS.Value", value, 0x0, 0x20, true, 0x89d2fad690c0e735)
#else
#define _m00
#define _m01
#endif