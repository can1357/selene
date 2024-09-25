#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.Capable", capable, 0x0, 0x1, true, 0x7f6c742a54f12df9, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.ResetCapable", reset_capable, 0x1, 0x1, true, 0x5330e9f74078d164, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.OkCapable", ok_capable, 0x2, 0x1, true, 0x1c2c38989e05b1c5, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.LocateCapable", locate_capable, 0x3, 0x1, true, 0x8d25f07cac60657c, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.FailCapable", fail_capable, 0x4, 0x1, true, 0xd6f9edc6cc0bfdb, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.RebuildCapable", rebuild_capable, 0x5, 0x1, true, 0x3bb05525d5963fad, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.PFACapable", pfa_capable, 0x6, 0x1, true, 0x4924eb92af697158, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.HotSpareCapable", hot_spare_capable, 0x7, 0x1, true, 0x1e041cfe9e0584, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.InACriticalArrayCapable", in_a_critical_array_capable, 0x8, 0x1, true, 0x58ed73de085b4bf7, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.InAFailedArrayCapable", in_a_failed_array_capable, 0x9, 0x1, true, 0xcf0e07ca757135b1, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.InvalidDeviceTypeCapable", invalid_device_type_capable, 0xa, 0x1, true, 0x283b68055b4fc848, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.DisabledCapable", disabled_capable, 0xb, 0x1, true, 0xaef1cb11df64a59b, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.Rsvd", rsvd, 0xc, 0xc, true, 0xb2a0d73c2b9718e3, 12, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.EnclosureSpecificCapabilities", enclosure_specific_capabilities, 0x18, 0x8, true, 0xc1e3954fb7c3f72e, 8, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x965a86eea5670df9)
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
#define _m14
#endif