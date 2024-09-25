#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::message_trace_header_t), "_MESSAGE_TRACE.MessageHeader", message_header, 0x0, 0x40, true, 0x9967a5ec7b1faa86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MESSAGE_TRACE.Data", data, 0x40, 0x8, true, 0x406aa5b7459df6ac)
#else
#define _m00
#define _m01
#endif