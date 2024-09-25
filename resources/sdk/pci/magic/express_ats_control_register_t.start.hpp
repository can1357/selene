#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_ATS_CONTROL_REGISTER.SmallestTransactionUnit", smallest_transaction_unit, 0x0, 0x5, true, 0x9408803ea436a516, 5, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ATS_CONTROL_REGISTER.Enable", enable, 0xf, 0x1, true, 0xe5cfe93a532e991f, 1, uint16_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ATS_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x459a96119acb4c29)
#else
#define _m00
#define _m01
#define _m02
#endif