#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.CorrectableSerrEnable", correctable_serr_enable, 0x0, 0x1, true, 0xc7c74e12ced11e44, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.NonFatalSerrEnable", non_fatal_serr_enable, 0x1, 0x1, true, 0x92c34ac9923863a7, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.FatalSerrEnable", fatal_serr_enable, 0x2, 0x1, true, 0x5d264a5e3c8346d2, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.PMEInterruptEnable", pme_interrupt_enable, 0x3, 0x1, true, 0x659c55e826cd945c, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.CRSSoftwareVisibilityEnable", crs_software_visibility_enable, 0x4, 0x1, true, 0x41e62daf365a8ee, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.Rsvd", rsvd, 0x5, 0xb, true, 0x4867984d82061ba3, 11, uint16_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x6a5f05de5601dc08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif