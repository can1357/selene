#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_EVENT_NOTIFICATION.Version", version, 0x0, 0x20, true, 0x4dc5f4c757867d8c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_EVENT_NOTIFICATION.Size", size, 0x20, 0x20, true, 0xe436043e15a07d80)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_EVENT_NOTIFICATION.Events", events, 0x40, 0x40, true, 0xd58fa0f86a4cfd4c)
#else
#define _m00
#define _m01
#define _m02
#endif