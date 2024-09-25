#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_MEMORY_LIST.AllocatedCount", allocated_count, 0x0, 0x20, true, 0xbdcc2de238441556)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_MEMORY_LIST.Count", count, 0x20, 0x20, true, 0xedafe69e0e717d42)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PNP_REPLACE_MEMORY_LIST.TotalLength", total_length, 0x40, 0x40, true, 0x6c2593ebc205876e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PNP_REPLACE_MEMORY_LIST.Ranges.Address", address, 0x0, 0x40, true, 0x9bc10ac214c1c4c8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PNP_REPLACE_MEMORY_LIST.Ranges.Length", length, 0x40, 0x40, true, 0x8d4b0d1e51187ffb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<u0_ranges_t, 1>), "_PNP_REPLACE_MEMORY_LIST.Ranges", ranges, 0x80, 0x80, true, 0xe41d54487acfc700)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif