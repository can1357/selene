#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MAILSLOT_QUERY_INFORMATION.MaximumMessageSize", maximum_message_size, 0x0, 0x20, true, 0x29f54e1409eaf851)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MAILSLOT_QUERY_INFORMATION.MailslotQuota", mailslot_quota, 0x20, 0x20, true, 0xc4cef39387bb1f69)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MAILSLOT_QUERY_INFORMATION.NextMessageSize", next_message_size, 0x40, 0x20, true, 0xbe174da58d14fd73)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MAILSLOT_QUERY_INFORMATION.MessagesAvailable", messages_available, 0x60, 0x20, true, 0x666bd8becd830f66)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_MAILSLOT_QUERY_INFORMATION.ReadTimeout", read_timeout, 0x80, 0x40, true, 0xa9b9ddcbf807fa90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif