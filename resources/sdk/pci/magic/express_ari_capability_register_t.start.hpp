#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ARI_CAPABILITY_REGISTER.MfvcFunctionGroupsCapability", mfvc_function_groups_capability, 0x0, 0x1, true, 0x304986361c6a783f, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ARI_CAPABILITY_REGISTER.AcsFunctionGroupsCapability", acs_function_groups_capability, 0x1, 0x1, true, 0x9958b5b96ad156a, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_ARI_CAPABILITY_REGISTER.NextFunctionNumber", next_function_number, 0x8, 0x8, true, 0x6368337b298c98d8, 8, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif