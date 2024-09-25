#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_STATUS_REGISTER.TriggerStatus", trigger_status, 0x0, 0x1, true, 0x8b92064cb393a1c7, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DPC_STATUS_REGISTER.TriggerReason", trigger_reason, 0x1, 0x2, true, 0xd8da7072ab82769b, 2, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_STATUS_REGISTER.InterruptStatus", interrupt_status, 0x3, 0x1, true, 0x98ec0b306b1e5edd, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_STATUS_REGISTER.RpBusy", rp_busy, 0x4, 0x1, true, 0x77746124ce03f0d0, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DPC_STATUS_REGISTER.TriggerReasonExtension", trigger_reason_extension, 0x5, 0x2, true, 0xb2b1b7b1195029f3, 2, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_DPC_STATUS_REGISTER.PioFirstErrPointer", pio_first_err_pointer, 0x8, 0x5, true, 0x6a29229969e725d1, 5, uint16_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DPC_STATUS_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x97209a6e3e6e623)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif