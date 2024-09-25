#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.Capable", capable, 0x0, 0x1, true, 0xdacde2f67fbed6f8, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.ResetCapable", reset_capable, 0x1, 0x1, true, 0xa2a44dd7bf7f7bfc, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.OkCapable", ok_capable, 0x2, 0x1, true, 0x247f3401faa9aba9, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.LocateCapable", locate_capable, 0x3, 0x1, true, 0x8eec75c1426ee4fb, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.FailCapable", fail_capable, 0x4, 0x1, true, 0x3ea4e7a51eca463d, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.RebuildCapable", rebuild_capable, 0x5, 0x1, true, 0x12aabebeda270152, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.PFACapable", pfa_capable, 0x6, 0x1, true, 0x9e4c5e37acc80a08, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.HotSpareCapable", hot_spare_capable, 0x7, 0x1, true, 0xed37fd291eea1355, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.InACriticalArrayCapable", in_a_critical_array_capable, 0x8, 0x1, true, 0x196637d9ed3b661e, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.InAFailedArrayCapable", in_a_failed_array_capable, 0x9, 0x1, true, 0x6ecc9dad72425fe6, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.InvalidDeviceTypeCapable", invalid_device_type_capable, 0xa, 0x1, true, 0x20d136ef88ef8663, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NPEM_CAPABILITY_STANDARD.DisabledCapable", disabled_capable, 0xb, 0x1, true, 0xd29f712cbd7676d0, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_NPEM_CAPABILITY_STANDARD.Rsvd", rsvd, 0xc, 0x14, true, 0x7a955a10f283f68f, 20, uint32_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NPEM_CAPABILITY_STANDARD.AsULONG", as_ulong, 0x0, 0x20, true, 0xdf545b9e1e271580)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif