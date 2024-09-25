#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.CorrectableErrorDetected", correctable_error_detected, 0x0, 0x1, true, 0xf9d93b74a76484cd, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.NonFatalErrorDetected", non_fatal_error_detected, 0x1, 0x1, true, 0xd172810e2e7f0a0, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.FatalErrorDetected", fatal_error_detected, 0x2, 0x1, true, 0xc984b70b23887798, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.UnsupportedRequestDetected", unsupported_request_detected, 0x3, 0x1, true, 0xcde54745cf9a48d4, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.AuxPowerDetected", aux_power_detected, 0x4, 0x1, true, 0xad017ce36d2ca322, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.TransactionsPending", transactions_pending, 0x5, 0x1, true, 0xa98fae121bebadd1, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.Rsvd", rsvd, 0x6, 0xa, true, 0xd9ebc6fdfbfa5433, 10, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xe9e494d32f08dc1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif