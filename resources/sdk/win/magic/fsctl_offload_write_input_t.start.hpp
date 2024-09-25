#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_WRITE_INPUT.Size", size, 0x0, 0x20, true, 0xf4c75adb4a7a4ade)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_WRITE_INPUT.Flags", flags, 0x20, 0x20, true, 0xf333056e1812cf34)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_OFFLOAD_WRITE_INPUT.FileOffset", file_offset, 0x40, 0x40, true, 0x1e01df7d1e6b9485)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_OFFLOAD_WRITE_INPUT.CopyLength", copy_length, 0x80, 0x40, true, 0x81c0d358e828d9ce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_OFFLOAD_WRITE_INPUT.TransferOffset", transfer_offset, 0xc0, 0x40, true, 0x7fc0cd3f488fb803)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 512>), "_FSCTL_OFFLOAD_WRITE_INPUT.Token", token, 0x100, 0x0, true, 0x1d3929ba33a184d3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif