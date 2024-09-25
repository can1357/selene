#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB_TRACEPOINT_LOG_ENTRY.OldPc", old_pc, 0x0, 0x0, false, 0x16efba32c6d8e6cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB_TRACEPOINT_LOG_ENTRY.OldSp", old_sp, 0x0, 0x0, false, 0xbefcc53c6a73f92e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB_TRACEPOINT_LOG_ENTRY.NewPc", new_pc, 0x0, 0x0, false, 0x816278e319ab1d88)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB_TRACEPOINT_LOG_ENTRY.NewSp", new_sp, 0x0, 0x0, false, 0xf533b8b5c35032a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif