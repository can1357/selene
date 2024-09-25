#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DMA_PROPERTIES.UntrustedPort", untrusted_port, 0x0, 0x1, true, 0xcf94ae8f2300b87d, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DMA_PROPERTIES.AsULONG", as_ulong, 0x0, 0x20, true, 0x85dfff10f4327dab)
#else
#define _m00
#define _m01
#endif