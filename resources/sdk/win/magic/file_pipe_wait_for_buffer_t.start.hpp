#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_PIPE_WAIT_FOR_BUFFER.Timeout", timeout, 0x0, 0x40, true, 0x7cc145fed15d24dc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_WAIT_FOR_BUFFER.NameLength", name_length, 0x40, 0x20, true, 0x4ddd063b7a911946)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_PIPE_WAIT_FOR_BUFFER.TimeoutSpecified", timeout_specified, 0x60, 0x8, true, 0x779acfc8040dd7fe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_PIPE_WAIT_FOR_BUFFER.Name", name, 0x70, 0x10, true, 0x9b2ccbef1bf65bfd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif