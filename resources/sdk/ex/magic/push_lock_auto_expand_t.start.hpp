#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EX_PUSH_LOCK_AUTO_EXPAND.LocalLock", local_lock, 0x0, 0x40, true, 0x9629f5b0508d4880)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_auto_expand_state_t), "_EX_PUSH_LOCK_AUTO_EXPAND.State", state, 0x40, 0x20, true, 0xa7f3b7b1525c36c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_PUSH_LOCK_AUTO_EXPAND.Stats", stats, 0x60, 0x20, true, 0x3468815aa3ea0e98)
#else
#define _m00
#define _m01
#define _m02
#endif