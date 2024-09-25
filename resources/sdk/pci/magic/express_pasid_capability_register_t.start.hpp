#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.Rsvd", rsvd, 0x0, 0x1, true, 0xcefb1e6e82cd8ba9, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.ExecutePermissionSupported", execute_permission_supported, 0x1, 0x1, true, 0xa46fb41204a4744, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.PrivilegedModeSupported", privileged_mode_supported, 0x2, 0x1, true, 0xa697b267f7b4f9db, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.Rsvd2", rsvd2, 0x3, 0x5, true, 0x8f268357e25f5615, 5, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.MaxPASIDWidth", max_pasid_width, 0x8, 0x5, true, 0x17fb1b2905658189, 5, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.Rsvd3", rsvd3, 0xd, 0x3, true, 0x880a923bfb9c510a, 3, uint16_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x906b97767db4b4e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif