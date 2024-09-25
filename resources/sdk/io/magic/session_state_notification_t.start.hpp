#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SESSION_STATE_NOTIFICATION.Size", size, 0x0, 0x20, true, 0xd9aca6c18bc7ae44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SESSION_STATE_NOTIFICATION.Flags", flags, 0x20, 0x20, true, 0xfd570b114b502601)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_SESSION_STATE_NOTIFICATION.IoObject", io_object, 0x40, 0x40, true, 0xd1d5eec86447c417)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SESSION_STATE_NOTIFICATION.EventMask", event_mask, 0x80, 0x20, true, 0x4e47db99a7bb7628)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_SESSION_STATE_NOTIFICATION.Context", context, 0xc0, 0x40, true, 0x5d77a528ea569715)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif