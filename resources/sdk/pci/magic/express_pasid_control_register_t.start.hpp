#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PASID_CONTROL_REGISTER.PASIDEnable", pasid_enable, 0x0, 0x1, true, 0x6584d517dfada443, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PASID_CONTROL_REGISTER.ExecutePermissionEnable", execute_permission_enable, 0x1, 0x1, true, 0xc65d8ba0ce036b93, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PASID_CONTROL_REGISTER.PrivilegedModeEnable", privileged_mode_enable, 0x2, 0x1, true, 0xec07ad8f6d874fb8, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint13_t), "_PCI_EXPRESS_PASID_CONTROL_REGISTER.Rsvd", rsvd, 0x3, 0xd, true, 0x626578f96d1cd139, 13, uint16_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_PASID_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xc95f7369af2b255e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif