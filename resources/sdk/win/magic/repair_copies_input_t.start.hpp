#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_COPIES_INPUT.Size", size, 0x0, 0x20, true, 0xa24f92a378ae71a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_COPIES_INPUT.Flags", flags, 0x20, 0x20, true, 0xe1c5278d3eed2fe5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REPAIR_COPIES_INPUT.FileOffset", file_offset, 0x40, 0x40, true, 0xca9a59d9ebb01ff8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_COPIES_INPUT.Length", length, 0x80, 0x20, true, 0x3fb1c87bf153f514)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_COPIES_INPUT.SourceCopy", source_copy, 0xa0, 0x20, true, 0xa879f75260afa528)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_COPIES_INPUT.NumberOfRepairCopies", number_of_repair_copies, 0xc0, 0x20, true, 0xf788cedc12045d1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_REPAIR_COPIES_INPUT.RepairCopies", repair_copies, 0xe0, 0x20, true, 0x6b00c001bc417447)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif