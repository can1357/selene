#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_RANGE_LIST_ENTRY.Start", start, 0x0, 0x40, true, 0x2faff7b889b49286)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_RANGE_LIST_ENTRY.End", end, 0x40, 0x40, true, 0xa4ad60124947b182)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_RANGE_LIST_ENTRY.Allocated.UserData", user_data, 0x0, 0x40, true, 0x1c893cfa0ec4dd51)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_RANGE_LIST_ENTRY.Allocated.Owner", owner, 0x40, 0x40, true, 0x49f758ccc46b331b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_allocated_t), "_RTLP_RANGE_LIST_ENTRY.Allocated", allocated, 0x80, 0x80, true, 0x67b2aec47ce6109)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RTLP_RANGE_LIST_ENTRY.Merged.ListHead", list_head, 0x0, 0x80, true, 0xe5414fd95bc598c2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_merged_t), "_RTLP_RANGE_LIST_ENTRY.Merged", merged, 0x80, 0x80, true, 0xb5d573c215d2e28d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTLP_RANGE_LIST_ENTRY.Attributes", attributes, 0x100, 0x8, true, 0x23d012605bd59ebe)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTLP_RANGE_LIST_ENTRY.PublicFlags", public_flags, 0x108, 0x8, true, 0x213a3a4a55c5039b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTLP_RANGE_LIST_ENTRY.PrivateFlags", private_flags, 0x110, 0x10, true, 0xad082582641735bc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RTLP_RANGE_LIST_ENTRY.ListEntry", list_entry, 0x140, 0x80, true, 0xbff85473c67588ef)
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