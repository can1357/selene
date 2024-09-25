#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_PMC.Version", version, 0x0, 0x3, true, 0x3aad3b69fb4d0532, 3, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMC.PMEClock", pme_clock, 0x3, 0x1, true, 0xc2c4a2b8ad1e204a, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMC.Rsvd1", rsvd1, 0x4, 0x1, true, 0x638e782c95de81ec, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMC.DeviceSpecificInitialization", device_specific_initialization, 0x5, 0x1, true, 0xba9139856d7e88a9, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_PMC.Rsvd2", rsvd2, 0x6, 0x2, true, 0x94e1c1e2dc454e8e, 2, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pm::support_t), "_PCI_PMC.Support", support, 0x8, 0x8, true, 0x1eb5283745c70ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif