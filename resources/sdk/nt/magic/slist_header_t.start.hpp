#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SLIST_HEADER.Alignment", alignment, 0x0, 0x40, true, 0x7ac96455ef6db6d0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SLIST_HEADER.Region", region, 0x40, 0x40, true, 0x337dd44d0cd95cd8)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_SLIST_HEADER.HeaderX64.Depth", depth, 0x0, 0x10, true, 0xbeec2afeb8173f77, 16, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_SLIST_HEADER.HeaderX64.Sequence", sequence, 0x10, 0x30, true, 0x62132ffcf8e9787, 48, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint60_t), "_SLIST_HEADER.HeaderX64.NextEntry", next_entry, 0x44, 0x3c, true, 0xfaa287681d209900, 60, uint64_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_header_x64_t), "_SLIST_HEADER.HeaderX64", header_x64, 0x0, 0x80, true, 0x97fa14551b10e1c3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif