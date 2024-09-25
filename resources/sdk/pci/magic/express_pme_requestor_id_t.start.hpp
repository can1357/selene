#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_PME_REQUESTOR_ID.FunctionNumber", function_number, 0x0, 0x3, true, 0x38512561a17e1982, 3, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_PME_REQUESTOR_ID.DeviceNumber", device_number, 0x3, 0x5, true, 0xa548f4d2e09f4ea1, 5, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_PME_REQUESTOR_ID.BusNumber", bus_number, 0x8, 0x8, true, 0x5a9cc3e93cee0a69, 8, uint16_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_PME_REQUESTOR_ID.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x41b769b4c5f67d68)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif