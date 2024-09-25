#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V2.UsnJournalID", usn_journal_id, 0x0, 0x40, true, 0xc66896af5761a312)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V2.FirstUsn", first_usn, 0x40, 0x40, true, 0xa0ee5c6c12397376)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V2.NextUsn", next_usn, 0x80, 0x40, true, 0x2d7829729f319e9e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V2.LowestValidUsn", lowest_valid_usn, 0xc0, 0x40, true, 0x9d4552b332793cd7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V2.MaxUsn", max_usn, 0x100, 0x40, true, 0x69d66abea71fdc98)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V2.MaximumSize", maximum_size, 0x140, 0x40, true, 0x842002027f9a65c7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V2.AllocationDelta", allocation_delta, 0x180, 0x40, true, 0x46041de0bae218fa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_JOURNAL_DATA_V2.MinSupportedMajorVersion", min_supported_major_version, 0x1c0, 0x10, true, 0x5f59acb81d380be2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_JOURNAL_DATA_V2.MaxSupportedMajorVersion", max_supported_major_version, 0x1d0, 0x10, true, 0xa5c62f99a4847335)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_JOURNAL_DATA_V2.Flags", flags, 0x1e0, 0x20, true, 0xb78bb4894ddae093)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_JOURNAL_DATA_V2.RangeTrackChunkSize", range_track_chunk_size, 0x200, 0x40, true, 0x6a0849e23a455c2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_JOURNAL_DATA_V2.RangeTrackFileSizeThreshold", range_track_file_size_threshold, 0x240, 0x40, true, 0x28037a941444e9a0)
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
#define _m11
#endif