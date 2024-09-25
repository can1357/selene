#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_TRIAGE_DUMP_DATA.BadPageCount", bad_page_count, 0x0, 0x40, true, 0x39d3e0555a0b366c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_TRIAGE_DUMP_DATA.BadPagesDetected", bad_pages_detected, 0x40, 0x20, true, 0x50a813b5ca843a74)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_TRIAGE_DUMP_DATA.ZeroedPageSingleBitErrorsDetected", zeroed_page_single_bit_errors_detected, 0x60, 0x20, true, 0xa90a52f011a0243e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_TRIAGE_DUMP_DATA.ScrubPasses", scrub_passes, 0x80, 0x20, true, 0x7ac0d79d67c297f5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_TRIAGE_DUMP_DATA.ScrubBadPagesFound", scrub_bad_pages_found, 0xa0, 0x20, true, 0x6adffcd13c860674)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_TRIAGE_DUMP_DATA.PageHashErrors", page_hash_errors, 0xc0, 0x20, true, 0xc569f8c050202723)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_TRIAGE_DUMP_DATA.FeatureBits", feature_bits, 0x100, 0x40, true, 0x97ce7d7d9dbd34ad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_TRIAGE_DUMP_DATA.TimeZoneId", time_zone_id, 0x140, 0x20, true, 0xa137533951723bdf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union mi::flags_t), "_MI_TRIAGE_DUMP_DATA.Flags", flags, 0x160, 0x20, true, 0xcc68647574bfe425)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_TRIAGE_DUMP_DATA.VsmConnection", vsm_connection, 0x180, 0x40, true, 0x2ad78723eab58a38)
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
#endif