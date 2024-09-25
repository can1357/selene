#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTIO_PERFORMANCE_PARAMETERS.Version", version, 0x0, 0x20, true, 0x26d7520421069aa7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTIO_PERFORMANCE_PARAMETERS.Size", size, 0x20, 0x20, true, 0x24aa82d9760ce19)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTIO_PERFORMANCE_PARAMETERS.MessageNumber", message_number, 0x40, 0x20, true, 0x17f617727919b0ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTIO_PERFORMANCE_PARAMETERS.ChannelNumber", channel_number, 0x60, 0x20, true, 0xe6a8dd28795de044)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif