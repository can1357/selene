#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PALETTE_DATA.NumEntries", num_entries, 0x0, 0x10, true, 0x319da869bc12efe2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PALETTE_DATA.FirstEntry", first_entry, 0x10, 0x10, true, 0x506da5f1bd351651)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_VIDEO_PALETTE_DATA.Colors", colors, 0x20, 0x10, true, 0xa2d1e19453491b3f)
#else
#define _m00
#define _m01
#define _m02
#endif