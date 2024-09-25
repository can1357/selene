#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_reply_header_t), "_WUDFMESSAGE_IO_REPLY.Header", header, 0x0, 0x20, true, 0xd8747b4cf40b12dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WUDFMESSAGE_IO_REPLY.Information", information, 0x40, 0x40, true, 0x188c09111db65786)
#else
#define _m00
#define _m01
#endif