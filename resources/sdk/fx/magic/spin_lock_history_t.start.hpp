#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FX_SPIN_LOCK_HISTORY.OwningThread", owning_thread, 0x0, 0x40, true, 0x9c66a88462de8e60)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::spin_lock_history_entry_t*), "FX_SPIN_LOCK_HISTORY.CurrentHistory", current_history, 0x40, 0x40, true, 0xca6f79a647ecf863)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fx::spin_lock_history_entry_t, 10>), "FX_SPIN_LOCK_HISTORY.History", history, 0x80, 0x80, true, 0x33b7a05de094b871)
#else
#define _m00
#define _m01
#define _m02
#endif