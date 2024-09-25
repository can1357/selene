#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_INFORMATION.ReadMode", read_mode, 0x0, 0x20, true, 0x4412b8f6c5ed47da)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_INFORMATION.CompletionMode", completion_mode, 0x20, 0x20, true, 0x662b8abeda08a030)
#else
#define _m00
#define _m01
#endif