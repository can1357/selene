#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_WRITE_OUTPUT.Size", size, 0x0, 0x20, true, 0x5a3436f7fcfc0af3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_OFFLOAD_WRITE_OUTPUT.Flags", flags, 0x20, 0x20, true, 0xae9689bb31ff4510)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_OFFLOAD_WRITE_OUTPUT.LengthWritten", length_written, 0x40, 0x40, true, 0x19d15dc8ad0eed10)
#else
#define _m00
#define _m01
#define _m02
#endif