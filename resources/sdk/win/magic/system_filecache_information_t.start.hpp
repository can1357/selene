#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FILECACHE_INFORMATION.CurrentSize", current_size, 0x0, 0x40, true, 0xc015a8cb85e07095)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FILECACHE_INFORMATION.PeakSize", peak_size, 0x40, 0x40, true, 0xe92c83dda899ba64)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FILECACHE_INFORMATION.PageFaultCount", page_fault_count, 0x80, 0x20, true, 0x720236b30014a52c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FILECACHE_INFORMATION.MinimumWorkingSet", minimum_working_set, 0xc0, 0x40, true, 0x8389a3bc3a9f0573)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FILECACHE_INFORMATION.MaximumWorkingSet", maximum_working_set, 0x100, 0x40, true, 0xa70f252129c64f9c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FILECACHE_INFORMATION.CurrentSizeIncludingTransitionInPages", current_size_including_transition_in_pages, 0x140, 0x40, true, 0x222a060d8b1c273e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FILECACHE_INFORMATION.PeakSizeIncludingTransitionInPages", peak_size_including_transition_in_pages, 0x180, 0x40, true, 0x2786a83eb017e127)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FILECACHE_INFORMATION.TransitionRePurposeCount", transition_re_purpose_count, 0x1c0, 0x20, true, 0x58c4fb3a90ccb6b7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FILECACHE_INFORMATION.Flags", flags, 0x1e0, 0x20, true, 0x4ba44a0fb8ba89e1)
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