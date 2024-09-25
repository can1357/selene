#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.Command", command, 0x0, 0x8, true, 0x3f8e7d78fd735d86)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.Feature7_0", feature7_0, 0x8, 0x8, true, 0xa7b498cd5da4ec7f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.Feature15_8", feature15_8, 0x10, 0x8, true, 0xb93cc0b9d8c1957c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.Count15_8", count15_8, 0x18, 0x8, true, 0x8cbbcce64cd932b9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.LBA7_0", lba7_0, 0x20, 0x8, true, 0x51d23f4e19760593)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.LBA15_8", lba15_8, 0x28, 0x8, true, 0x5f25362b3948d76a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.LBA23_16", lba23_16, 0x30, 0x8, true, 0xa2109f3491398f86)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.LBA31_24", lba31_24, 0x38, 0x8, true, 0xdee66edaf1786d79)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.LBA39_32", lba39_32, 0x40, 0x8, true, 0xec000c84ee5ad544)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.LBA47_40", lba47_40, 0x48, 0x8, true, 0xd167d8ba84a261ba)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.Auxiliary7_0", auxiliary7_0, 0x50, 0x8, true, 0x177a065bf7e4407e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_HINT_PAYLOAD.Auxiliary23_16", auxiliary23_16, 0x58, 0x8, true, 0xaf7b621900805e4a)
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
#define _m11
#endif