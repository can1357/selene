#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::action_t), "POWER_ACTION_POLICY.Action", action, 0x0, 0x20, true, 0x7aceaabea5cf9cd5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "POWER_ACTION_POLICY.Flags", flags, 0x20, 0x20, true, 0x1bcf5444e882272a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "POWER_ACTION_POLICY.EventCode", event_code, 0x40, 0x20, true, 0x1e8ed213871bc11b)
#else
#define _m00
#define _m01
#define _m02
#endif