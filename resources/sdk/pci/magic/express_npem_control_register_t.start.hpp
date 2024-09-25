#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.Enable", enable, 0x0, 0x1, true, 0xb7023dce64eaef82, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.InitiateReset", initiate_reset, 0x1, 0x1, true, 0x8f08e29765744e53, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.OkControl", ok_control, 0x2, 0x1, true, 0x9532861886127fab, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.LocateControl", locate_control, 0x3, 0x1, true, 0x68251b5ca42217b3, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.FailControl", fail_control, 0x4, 0x1, true, 0x88526e1d911edb27, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.RebuildControl", rebuild_control, 0x5, 0x1, true, 0x4dfc8af671a0ef87, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.PFAControl", pfa_control, 0x6, 0x1, true, 0xbd867fed4d509572, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.HotSpareControl", hot_spare_control, 0x7, 0x1, true, 0x83dc00afd94227fe, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.InACriticalArrayControl", in_a_critical_array_control, 0x8, 0x1, true, 0xdcf63a9a2fbce36b, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.InAFailedArrayControl", in_a_failed_array_control, 0x9, 0x1, true, 0x6a118713e10ea059, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.InvalidDeviceTypeControl", invalid_device_type_control, 0xa, 0x1, true, 0xb0825e3cb2e4b49c, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.DisabledControl", disabled_control, 0xb, 0x1, true, 0x920d8865a081e4f, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.Rsvd", rsvd, 0xc, 0xc, true, 0x474bb257670cf898, 12, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.EnclosureSpecificControls", enclosure_specific_controls, 0x18, 0x8, true, 0x946d1cf88e728e17, 8, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xbfbee90a0636d744)
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