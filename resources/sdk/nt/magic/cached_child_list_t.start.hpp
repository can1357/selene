#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CACHED_CHILD_LIST.Count", count, 0x0, 0x0, false, 0x2375b1aba88763a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CACHED_CHILD_LIST.ValueList", value_list, 0x0, 0x0, false, 0x84d5279fcb99731e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CACHED_CHILD_LIST.RealKcb", real_kcb, 0x0, 0x0, false, 0x8ac4fc12745c7e09)
#else
#define _m00
#define _m01
#define _m02
#endif