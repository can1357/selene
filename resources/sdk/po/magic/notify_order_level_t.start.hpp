#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_NOTIFY_ORDER_LEVEL.DeviceCount", device_count, 0x0, 0x20, true, 0x6b9628f4e3150085)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_NOTIFY_ORDER_LEVEL.ActiveCount", active_count, 0x20, 0x20, true, 0x833c199c60e3cf80)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_NOTIFY_ORDER_LEVEL.WaitSleep", wait_sleep, 0x40, 0x80, true, 0x3a697fbd7a7e1545)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_NOTIFY_ORDER_LEVEL.ReadySleep", ready_sleep, 0xc0, 0x80, true, 0x2b56df2746017f2e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_NOTIFY_ORDER_LEVEL.ReadyS0", ready_s0, 0x140, 0x80, true, 0x3aabc40f98e2b54b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_NOTIFY_ORDER_LEVEL.WaitS0", wait_s0, 0x1c0, 0x80, true, 0xd882eaaf2e9e3084)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif