#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MAILSLOT_CREATE_PARAMETERS.MailslotQuota", mailslot_quota, 0x0, 0x20, true, 0xc952dd2943d45707)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MAILSLOT_CREATE_PARAMETERS.MaximumMessageSize", maximum_message_size, 0x20, 0x20, true, 0x7e5e266af3e064cf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MAILSLOT_CREATE_PARAMETERS.ReadTimeout", read_timeout, 0x40, 0x40, true, 0x984a1de98da9a93e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MAILSLOT_CREATE_PARAMETERS.TimeoutSpecified", timeout_specified, 0x80, 0x8, true, 0x36b67a7beadaa4ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif