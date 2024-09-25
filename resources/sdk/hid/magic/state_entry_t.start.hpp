#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STATE_ENTRY.EtwName", etw_name, 0x0, 0x20, true, 0x1ac696ce47e55e7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct sm::context_t*)>*), "_STATE_ENTRY.EntryFunc", entry_func, 0x40, 0x40, true, 0xfb2b5a3169be1a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::state_flags_t), "_STATE_ENTRY.StateFlags", state_flags, 0x80, 0x20, true, 0xb70a1e2e906fb281)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::subsm_entry_t*), "_STATE_ENTRY.SubSmEntries", sub_sm_entries, 0xc0, 0x40, true, 0xd5bea1012dbdc2cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct hid::state_transition_t>), "_STATE_ENTRY.Transitions", transitions, 0x100, 0x0, true, 0x500ba760077819b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif