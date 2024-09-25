#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HPX_INFO.ValidTypes", valid_types, 0x0, 0x8, true, 0x9cbb36c6d1cacade)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hpx_type_0_t), "_PCI_HPX_INFO.type0", type0, 0x8, 0x20, true, 0x6c5c087e16198b7f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hpx_type_2_t), "_PCI_HPX_INFO.type2", type2, 0x40, 0x0, true, 0xa29501e7d03640a6)
#else
#define _m00
#define _m01
#define _m02
#endif