#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_OPEN_REPARSE_LIST_ENTRY.OpenReparseListEntry", open_reparse_list_entry, 0x0, 0x80, true, 0x1f27a929fa6e7149)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_REPARSE_LIST_ENTRY.ReparseTag", reparse_tag, 0x80, 0x20, true, 0x503eafde06db3979)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_REPARSE_LIST_ENTRY.Flags", flags, 0xa0, 0x20, true, 0x59c5ac6e8b88adea)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_OPEN_REPARSE_LIST_ENTRY.ReparseGuid", reparse_guid, 0xc0, 0x80, true, 0x165a955b1b17d985)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPEN_REPARSE_LIST_ENTRY.Size", size, 0x140, 0x10, true, 0x4e55ca1d4c633a2b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPEN_REPARSE_LIST_ENTRY.RemainingLength", remaining_length, 0x150, 0x10, true, 0x5e99e76b93bb839a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif