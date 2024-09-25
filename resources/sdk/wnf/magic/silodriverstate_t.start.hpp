#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::scope_map_t*), "_WNF_SILODRIVERSTATE.ScopeMap", scope_map, 0x0, 0x40, true, 0x9db17f86f3984d71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_WNF_SILODRIVERSTATE.PermanentNameStoreRootKey", permanent_name_store_root_key, 0x40, 0x40, true, 0x726b2993d750f244)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_WNF_SILODRIVERSTATE.PersistentNameStoreRootKey", persistent_name_store_root_key, 0x80, 0x40, true, 0x889b466d7424dd36)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_WNF_SILODRIVERSTATE.PermanentNameSequenceNumber", permanent_name_sequence_number, 0xc0, 0x40, true, 0x86c40f4a375c833e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_SILODRIVERSTATE.PermanentNameSequenceNumberLock", permanent_name_sequence_number_lock, 0x100, 0x40, true, 0x8acf83826da8216c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_WNF_SILODRIVERSTATE.PermanentNameSequenceNumberPool", permanent_name_sequence_number_pool, 0x140, 0x40, true, 0x48124e2cc8decbcc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_WNF_SILODRIVERSTATE.RuntimeNameSequenceNumber", runtime_name_sequence_number, 0x180, 0x40, true, 0xbdcc3b9eb40dfa29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif