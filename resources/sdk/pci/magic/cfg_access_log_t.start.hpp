#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_ACCESS_LOG.Length", length, 0x0, 0x20, true, 0x523d921aa55051e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_CFG_ACCESS_LOG.Lock", lock, 0x40, 0x40, true, 0x6d95e325a16c369b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_CFG_ACCESS_LOG.ListEntry", list_entry, 0x80, 0x80, true, 0xadc34ca40bce7bac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_ACCESS_LOG.Rid", rid, 0x100, 0x20, true, 0x869022dba87d005a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_ACCESS_LOG.CurrentIndex", current_index, 0x120, 0x20, true, 0x3bc184d14e242800)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::cfg_access_log_entry_t*), "_PCI_CFG_ACCESS_LOG.Entry", entry, 0x140, 0x40, true, 0xf29dd9217ca80d0c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif