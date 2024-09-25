#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER.TPowerOnScale", t_power_on_scale, 0x0, 0x2, true, 0xe402820dfc1dcad2, 2, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER.Rsvd", rsvd, 0x2, 0x1, true, 0xe424f440a2c93244, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER.TPowerOnValue", t_power_on_value, 0x3, 0x5, true, 0xd8392104d57e06bd, 5, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER.Rsvd2", rsvd2, 0x8, 0x18, true, 0xddd0cc4f06db3a42, 24, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x21f44d5c9667abce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif