#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REFS_DEALLOCATE_RANGES_RANGE.StartOfRange", start_of_range, 0x0, 0x40, true, 0xe80dbbbf7e6d1fa2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REFS_DEALLOCATE_RANGES_RANGE.CountOfRange", count_of_range, 0x40, 0x40, true, 0xdfeb8354b38a7643)
#else
#define _m00
#define _m01
#endif