#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DELETE_USN_JOURNAL_DATA.UsnJournalID", usn_journal_id, 0x0, 0x40, true, 0xae238314f2ff3233)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DELETE_USN_JOURNAL_DATA.DeleteFlags", delete_flags, 0x40, 0x20, true, 0x2507d80958bd464)
#else
#define _m00
#define _m01
#endif