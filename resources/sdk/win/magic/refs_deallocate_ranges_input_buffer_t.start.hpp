#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_DEALLOCATE_RANGES_INPUT_BUFFER.RangeCount", range_count, 0x0, 0x20, true, 0x3ea8ea4ec572e151)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::refs_deallocate_ranges_range_t, 1>), "_REFS_DEALLOCATE_RANGES_INPUT_BUFFER.Ranges", ranges, 0x40, 0x80, true, 0x9fba4295b8bee7b9)
#else
#define _m00
#define _m01
#endif