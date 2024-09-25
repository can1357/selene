#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_RECORD.Signature", signature, 0x0, 0x20, true, 0xff675d8cc3d911a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_RECORD.TotalSize", total_size, 0x20, 0x20, true, 0xc567ad23bbc992d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_RECORD.EntryCount", entry_count, 0x40, 0x20, true, 0xb8345e8fae82d5a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_RECORD.Rid", rid, 0x60, 0x20, true, 0xfbcbbca0f41549ca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_CFG_RECORD.Device", device, 0x80, 0x40, true, 0x6cc3dad02cd37460)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_CFG_RECORD.RecordInDump", record_in_dump, 0xc0, 0x8, true, 0x3946f6def6ddcd4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::cfg_record_entry_t*), "_PCI_CFG_RECORD.FirstEntry", first_entry, 0x100, 0x40, true, 0x21858ffeb8170376)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::cfg_record_t*), "_PCI_CFG_RECORD.PrevRecord", prev_record, 0x140, 0x40, true, 0xe5f2f0ffd9d2e46e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::cfg_record_t*), "_PCI_CFG_RECORD.NextRecord", next_record, 0x180, 0x40, true, 0xa1f1369bafd2ced2)
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
#endif