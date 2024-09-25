#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V0.UsnJournalID", usn_journal_id, 0x0, 0x40, true, 0x2fad309c14fa31b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V0.FirstUsn", first_usn, 0x40, 0x40, true, 0x4a3f29b9a77a2559)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V0.NextUsn", next_usn, 0x80, 0x40, true, 0xed3d6aa7efa039c8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V0.LowestValidUsn", lowest_valid_usn, 0xc0, 0x40, true, 0x698be8177d50b44c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V0.MaxUsn", max_usn, 0x100, 0x40, true, 0x6196c650171bd8bc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V0.MaximumSize", maximum_size, 0x140, 0x40, true, 0x7fbd906b26d36203)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V0.AllocationDelta", allocation_delta, 0x180, 0x40, true, 0x8c94183115a64455)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif