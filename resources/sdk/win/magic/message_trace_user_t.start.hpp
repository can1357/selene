#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::message_trace_header_t), "_MESSAGE_TRACE_USER.MessageHeader", message_header, 0x0, 0x40, true, 0x845870ff551322f4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_MESSAGE_TRACE_USER.MessageGuid", message_guid, 0x40, 0x80, true, 0x28cf7fba299a5879)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_TRACE_USER.MessageFlags", message_flags, 0xc0, 0x20, true, 0x18ebcbf2965e1f25)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_TRACE_USER.DataSize", data_size, 0xe0, 0x20, true, 0x6310b20b6b296793)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MESSAGE_TRACE_USER.Data", data, 0x100, 0x40, true, 0x231e30b4d2f50c30)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif