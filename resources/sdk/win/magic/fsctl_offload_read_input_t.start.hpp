#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_READ_INPUT.Size", size, 0x0, 0x20, true, 0x53ac412d6b045418)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_READ_INPUT.Flags", flags, 0x20, 0x20, true, 0x604b66c9b00bd5e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_READ_INPUT.TokenTimeToLive", token_time_to_live, 0x40, 0x20, true, 0xb8b15bf080f9f9f1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_OFFLOAD_READ_INPUT.FileOffset", file_offset, 0x80, 0x40, true, 0xd44ff5ce2ce1bc22)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_OFFLOAD_READ_INPUT.CopyLength", copy_length, 0xc0, 0x40, true, 0xab54053d73eab4c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif