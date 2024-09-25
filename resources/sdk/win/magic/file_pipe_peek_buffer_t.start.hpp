#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_PEEK_BUFFER.NamedPipeState", named_pipe_state, 0x0, 0x20, true, 0x1adae81136502368)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_PEEK_BUFFER.ReadDataAvailable", read_data_available, 0x20, 0x20, true, 0xd705d168b759f9c0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_PEEK_BUFFER.NumberOfMessages", number_of_messages, 0x40, 0x20, true, 0x46e0f7c0b6d56924)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_PEEK_BUFFER.MessageLength", message_length, 0x60, 0x20, true, 0xafb3491ca6fb5305)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_FILE_PIPE_PEEK_BUFFER.Data", data, 0x80, 0x8, true, 0x39c5d2f075852361)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif