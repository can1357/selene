#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::cfg_access_log_entry_flag_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Flag", flag, 0x0, 0x20, true, 0xb3e2c01b8af2959e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Processor", processor, 0x20, 0x10, true, 0x9a8d6de910d5f9f3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Process", process, 0x30, 0x10, true, 0x69631c7ae71f9c57)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Thread", thread, 0x40, 0x10, true, 0xadccfeff7e279315)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Offset", offset, 0x50, 0x10, true, 0xc0eb58d71fb3c187)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Length", length, 0x60, 0x10, true, 0xeb3021f5900fcb83)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Data", data, 0x80, 0x20, true, 0x70cd01c8743a02bf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Count", count, 0xa0, 0x20, true, 0x3ab19f9415392683)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Timestamp1", timestamp1, 0xc0, 0x40, true, 0xdd80781690618614)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_CFG_ACCESS_LOG_ENTRY.Timestamp2", timestamp2, 0x100, 0x40, true, 0xe942de5083be7b1a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_CFG_ACCESS_LOG_ENTRY.Source", source, 0x140, 0x40, true, 0xbe0be823fe95614a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif