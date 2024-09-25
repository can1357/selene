#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V1.UsnJournalID", usn_journal_id, 0x0, 0x40, true, 0x39f48f2ff0f3dc68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V1.FirstUsn", first_usn, 0x40, 0x40, true, 0x8a1f22c14381919e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V1.NextUsn", next_usn, 0x80, 0x40, true, 0xf155d985e8685ee4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V1.LowestValidUsn", lowest_valid_usn, 0xc0, 0x40, true, 0x38deac06f76245f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V1.MaxUsn", max_usn, 0x100, 0x40, true, 0x13778d890b136d26)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V1.MaximumSize", maximum_size, 0x140, 0x40, true, 0xfa98f823215492f5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V1.AllocationDelta", allocation_delta, 0x180, 0x40, true, 0xf052088efeee54c6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_JOURNAL_DATA_V1.MinSupportedMajorVersion", min_supported_major_version, 0x1c0, 0x10, true, 0xe5e4a4f8f16d6caf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_JOURNAL_DATA_V1.MaxSupportedMajorVersion", max_supported_major_version, 0x1d0, 0x10, true, 0xd04f63102655df94)
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