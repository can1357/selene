#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_POP_TRIGGER_WAIT.Event", event, 0x0, 0xc0, true, 0x82ffe5ae91c86a15)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_TRIGGER_WAIT.Status", status, 0xc0, 0x20, true, 0xd3fb72c4d8cd171e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_TRIGGER_WAIT.Link", link, 0x100, 0x80, true, 0xe6bd5b63127c8e3e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::action_trigger_t*), "_POP_TRIGGER_WAIT.Trigger", trigger, 0x180, 0x40, true, 0xac4649db8b34986e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif