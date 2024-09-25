#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.MaxPayloadSizeSupported", max_payload_size_supported, 0x0, 0x3, true, 0x43f4be470350b526, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.PhantomFunctionsSupported", phantom_functions_supported, 0x3, 0x2, true, 0xbe3575fcc7a9b06b, 2, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.ExtendedTagSupported", extended_tag_supported, 0x5, 0x1, true, 0xe00f5d9feb5dde0d, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.L0sAcceptableLatency", l0s_acceptable_latency, 0x6, 0x3, true, 0xefa8e018a4e12c3, 3, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.L1AcceptableLatency", l1_acceptable_latency, 0x9, 0x3, true, 0xc8e6e529906274b0, 3, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.Undefined", undefined, 0xc, 0x3, true, 0xd8467be7dfc89913, 3, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.RoleBasedErrorReporting", role_based_error_reporting, 0xf, 0x1, true, 0xb3597cf07a28572d, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.Rsvd1", rsvd1, 0x10, 0x2, true, 0xffdf69651f6d68ba, 2, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.CapturedSlotPowerLimit", captured_slot_power_limit, 0x12, 0x8, true, 0x843cbccd63f31acb, 8, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.CapturedSlotPowerLimitScale", captured_slot_power_limit_scale, 0x1a, 0x2, true, 0x48461cbb6dc2c17, 2, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.FunctionLevelResetCapability", function_level_reset_capability, 0x1c, 0x1, true, 0xf8d84fe2422fcb04, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.Rsvd2", rsvd2, 0x1d, 0x3, true, 0xb3b8fd3582b4310b, 3, uint32_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x63a7092ac2403b8a)
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
#endif