#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_CMCI_INITERR_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x3d6d29d81531b982)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_CMCI_INITERR_EVENT.Msr", msr, 0x100, 0x40, true, 0x66c0f3bc557fac5f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CMCI_INITERR_EVENT.Type", type, 0x140, 0x20, true, 0x9a749afd74a45372)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CMCI_INITERR_EVENT.Bank", bank, 0x160, 0x20, true, 0xf928e412a124442b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CMCI_INITERR_EVENT.EpIndex", ep_index, 0x180, 0x20, true, 0x61233226598343bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif