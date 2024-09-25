#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_WMI_TRACE_MESSAGE_ARGS.TraceHandle", trace_handle, 0x0, 0x40, true, 0xfaa0b57c8e102334)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_WMI_TRACE_MESSAGE_ARGS.MessageFlags", message_flags, 0x40, 0x20, true, 0x796e030cde3f4e5d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_STOR_WMI_TRACE_MESSAGE_ARGS.MessageGuid", message_guid, 0x80, 0x40, true, 0xd80ba08b937ce466)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_WMI_TRACE_MESSAGE_ARGS.MessageNumber", message_number, 0xc0, 0x10, true, 0xe3eeb8f8307c9295)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_STOR_WMI_TRACE_MESSAGE_ARGS.Args", args, 0x100, 0x40, true, 0x42f33d3c1d3fa368)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_WMI_TRACE_MESSAGE_ARGS.result", result, 0x140, 0x20, true, 0x519abe512fb6b118)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif