#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DRIVE_LAYOUT_INFORMATION_GPT.DiskId", disk_id, 0x0, 0x80, true, 0x2670e5e3abe4e33b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DRIVE_LAYOUT_INFORMATION_GPT.StartingUsableOffset", starting_usable_offset, 0x80, 0x40, true, 0xb25570ab297a1830)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DRIVE_LAYOUT_INFORMATION_GPT.UsableLength", usable_length, 0xc0, 0x40, true, 0x1615173dc58cd0fb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVE_LAYOUT_INFORMATION_GPT.MaxPartitionCount", max_partition_count, 0x100, 0x20, true, 0xa4186620be48e00c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif