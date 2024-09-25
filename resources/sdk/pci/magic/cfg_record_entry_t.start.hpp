#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::cfg_record_entry_header_t), "_PCI_CFG_RECORD_ENTRY.Header", header, 0x0, 0x20, true, 0xe10edd595c3a6676)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_PCI_CFG_RECORD_ENTRY.Data", data, 0x20, 0x8, true, 0x9e4aa442e75ecc55)
#else
#define _m00
#define _m01
#endif