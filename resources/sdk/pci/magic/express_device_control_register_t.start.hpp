#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.CorrectableErrorEnable", correctable_error_enable, 0x0, 0x1, true, 0x27178bcba3129e65, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.NonFatalErrorEnable", non_fatal_error_enable, 0x1, 0x1, true, 0x2d869f2f07cf8a30, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.FatalErrorEnable", fatal_error_enable, 0x2, 0x1, true, 0x18d7184e6024d601, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.UnsupportedRequestErrorEnable", unsupported_request_error_enable, 0x3, 0x1, true, 0x661e9ec4dec2b89f, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.EnableRelaxedOrder", enable_relaxed_order, 0x4, 0x1, true, 0xc66e0cf4b986c419, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.MaxPayloadSize", max_payload_size, 0x5, 0x3, true, 0x4841f87ac77c6e24, 3, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.ExtendedTagEnable", extended_tag_enable, 0x8, 0x1, true, 0x5009b50e0de860e5, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.PhantomFunctionsEnable", phantom_functions_enable, 0x9, 0x1, true, 0x919decd990ac5d1e, 1, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.AuxPowerEnable", aux_power_enable, 0xa, 0x1, true, 0xdaa70b011c2d4607, 1, uint16_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.NoSnoopEnable", no_snoop_enable, 0xb, 0x1, true, 0x348ff824bfcd2fd1, 1, uint16_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.MaxReadRequestSize", max_read_request_size, 0xc, 0x3, true, 0xfce197e74b3aa4a4, 3, uint16_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.BridgeConfigRetryEnable", bridge_config_retry_enable, 0xf, 0x1, true, 0x8ece19299cfe779d, 1, uint16_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.InitiateFunctionLevelReset", initiate_function_level_reset, 0xf, 0x1, true, 0x58d308bab159952e, 1, uint16_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xa3ea32d63c542914)
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