#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ARI_CONTROL_REGISTER.MfvcFunctionGroupsEnable", mfvc_function_groups_enable, 0x0, 0x1, true, 0xb58948af54ae96d6, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ARI_CONTROL_REGISTER.AcsFunctionGroupsEnable", acs_function_groups_enable, 0x1, 0x1, true, 0x20379a0ee4456a11, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_ARI_CONTROL_REGISTER.FunctionGroup", function_group, 0x4, 0x3, true, 0x1a2d29a5bd5e195f, 3, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif