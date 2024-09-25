#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_CFG_RECORD_ENTRY_HEADER.Offset", offset, 0x0, 0x10, true, 0x632fa592d5384dd2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_CFG_RECORD_ENTRY_HEADER.Size", size, 0x10, 0x10, true, 0x4bf8cd577a3b80d6)
#else
#define _m00
#define _m01
#endif