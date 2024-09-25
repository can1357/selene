#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.LinkSpeed", link_speed, 0x0, 0x4, true, 0xd1bac10da2d66e94, 4, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.LinkWidth", link_width, 0x4, 0x6, true, 0xc6a708a5da2ae98c, 6, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.Undefined", undefined, 0xa, 0x1, true, 0x12162fd0bed32fa6, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.LinkTraining", link_training, 0xb, 0x1, true, 0x1652b86aaf508d6a, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.SlotClockConfig", slot_clock_config, 0xc, 0x1, true, 0x75be34f2b6419b4, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.DataLinkLayerActive", data_link_layer_active, 0xd, 0x1, true, 0x9f5addff920f68f7, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.Rsvd", rsvd, 0xe, 0x2, true, 0x2ed33fc794f0497d, 2, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_LINK_STATUS_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x58e7f940682c65f0)
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