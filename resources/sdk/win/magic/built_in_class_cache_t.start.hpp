#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "BuiltInClassCache._lock", lock, 0x0, 0x0, false, 0xad99af81ffbbdc33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "BuiltInClassCache._activationStoreSequenceForCurrentResults", activation_store_sequence_for_current_results, 0x0, 0x0, false, 0x129e2e3416ab8ac4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t*), "BuiltInClassCache._pRoot", p_root, 0x0, 0x0, false, 0x77ec2a7505a97c06)
#else
#define _m00
#define _m01
#define _m02
#endif