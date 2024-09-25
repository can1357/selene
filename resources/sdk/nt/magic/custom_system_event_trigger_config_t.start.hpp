#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG.Size", size, 0x0, 0x20, true, 0x80ec2b15787cc57e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG.TriggerId", trigger_id, 0x40, 0x40, true, 0xa1236bdbfaf1223b)
#else
#define _m00
#define _m01
#endif