#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ARM_PARAMS.NumEntries", num_entries, 0x0, 0x10, true, 0xd06bd2ad1e2f51fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "ARM_PARAMS.Slots", slots, 0x10, 0x8, true, 0xfde03a4532f65b07)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "ARM_PARAMS.Entry", entry, 0x18, 0x8, true, 0x2c32ae6f3eb5b1d5)
#else
#define _m00
#define _m01
#define _m02
#endif