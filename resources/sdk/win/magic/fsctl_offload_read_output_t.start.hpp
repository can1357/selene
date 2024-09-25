#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_READ_OUTPUT.Size", size, 0x0, 0x20, true, 0x921f78b9c9dbaf50)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_READ_OUTPUT.Flags", flags, 0x20, 0x20, true, 0x49452a96d88152d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_OFFLOAD_READ_OUTPUT.TransferLength", transfer_length, 0x40, 0x40, true, 0xea6287ee3a85a65e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 512>), "_FSCTL_OFFLOAD_READ_OUTPUT.Token", token, 0x80, 0x0, true, 0xb7e705135af40065)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif