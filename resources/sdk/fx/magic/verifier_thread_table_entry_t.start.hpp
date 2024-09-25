#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxVerifierThreadTableEntry.Thread", thread, 0x0, 0x40, true, 0xc1b22fd50417fefb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxVerifierThreadTableEntry.PerThreadPassiveLockList", per_thread_passive_lock_list, 0x40, 0x40, true, 0xb13ed8b54930be4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxVerifierThreadTableEntry.PerThreadDispatchLockList", per_thread_dispatch_lock_list, 0x80, 0x40, true, 0x17ce372985d6bd41)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxVerifierThreadTableEntry.HashChain", hash_chain, 0xc0, 0x80, true, 0xf3df2f7f5c436b81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif