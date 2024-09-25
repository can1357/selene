#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::policy_device_type_t), "_POP_ACTION_TRIGGER.Type", type, 0x0, 0x20, true, 0xede0871ab495e6ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_ACTION_TRIGGER.Flags", flags, 0x20, 0x20, true, 0x8945cc802f57a9be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::trigger_wait_t*), "_POP_ACTION_TRIGGER.Wait", wait, 0x40, 0x40, true, 0x2bc95423665192ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_ACTION_TRIGGER.Battery.PercentLevel", percent_level, 0x0, 0x20, true, 0x1ddec9a18768bb97)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_battery_t), "_POP_ACTION_TRIGGER.Battery", battery, 0x80, 0x20, true, 0x7e7c07983b9bbe31)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_ACTION_TRIGGER.Button.Type", type, 0x0, 0x20, true, 0xc3a7a42ebb6dcba1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_button_t), "_POP_ACTION_TRIGGER.Button", button, 0x80, 0x20, true, 0x2d67423a61f74382)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif