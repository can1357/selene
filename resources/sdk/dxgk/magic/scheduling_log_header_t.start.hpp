#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SCHEDULING_LOG_HEADER.FirstFreeEntryIndex", first_free_entry_index, 0x0, 0x20, true, 0xbd9863802a0c1cf8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SCHEDULING_LOG_HEADER.WraparoundCount", wraparound_count, 0x20, 0x20, true, 0x7ad0040aed8c608a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SCHEDULING_LOG_HEADER.AtomicWraparoundAndEntryIndex", atomic_wraparound_and_entry_index, 0x0, 0x40, true, 0xc038be7ce517bf8f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SCHEDULING_LOG_HEADER.NumberOfEntries", number_of_entries, 0x40, 0x40, true, 0xc8a63539bec648fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif