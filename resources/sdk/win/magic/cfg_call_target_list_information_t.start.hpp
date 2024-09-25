#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CFG_CALL_TARGET_LIST_INFORMATION.NumberOfEntries", number_of_entries, 0x0, 0x20, true, 0x893b2d16f78450b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CFG_CALL_TARGET_LIST_INFORMATION.NumberOfEntriesProcessed", number_of_entries_processed, 0x40, 0x40, true, 0x399fc033e30f1365)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cfg_call_target_info_t*), "_CFG_CALL_TARGET_LIST_INFORMATION.CallTargetInfo", call_target_info, 0x80, 0x40, true, 0xfd3b39599ab4ce26)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CFG_CALL_TARGET_LIST_INFORMATION.Section", section, 0xc0, 0x40, true, 0xef1bbbc9d3c348f2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CFG_CALL_TARGET_LIST_INFORMATION.FileOffset", file_offset, 0x100, 0x40, true, 0x374e03cf182da17c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif