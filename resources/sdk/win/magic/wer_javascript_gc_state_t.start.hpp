#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.InitialCollectionStartTime", initial_collection_start_time, 0x0, 0x40, true, 0x95705108acc5149a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_JAVASCRIPT_GC_STATE.InitialCollectionStartProcessUsedBytes", initial_collection_start_process_used_bytes, 0x40, 0x40, true, 0x611aff895cc873e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.CurrentCollectionStartTime", current_collection_start_time, 0x80, 0x40, true, 0xdcd959a2570e17ea)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_JAVASCRIPT_GC_STATE.CurrentCollectionStartProcessUsedBytes", current_collection_start_process_used_bytes, 0xc0, 0x40, true, 0x7bafcc4c7cb7ae81)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.ConcurrentMarkFinishTime", concurrent_mark_finish_time, 0x100, 0x40, true, 0xa2bc8bfc55c2aebf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.DisposeStartTime", dispose_start_time, 0x140, 0x40, true, 0x8432fdd0a2666df7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.DisposeEndTime", dispose_end_time, 0x180, 0x40, true, 0x7ab1cd963fde3c87)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.ExternalWeakReferenceObjectResolveStartTime", external_weak_reference_object_resolve_start_time, 0x1c0, 0x40, true, 0x7e035261ea743c21)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.ExternalWeakReferenceObjectResolveEndTime", external_weak_reference_object_resolve_end_time, 0x200, 0x40, true, 0x3d96ec87490fc708)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.CurrentCollectionEndTime", current_collection_end_time, 0x240, 0x40, true, 0x1a964d528b36f2e1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.LastCollectionEndTime", last_collection_end_time, 0x280, 0x40, true, 0xb173077535a17c30)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_JAVASCRIPT_GC_STATE.ExhaustiveRepeatedCount", exhaustive_repeated_count, 0x2c0, 0x20, true, 0x69e0216cfe51c05e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.LastScriptStartTime", last_script_start_time, 0x2e0, 0x40, true, 0x16fd6579e83fd932)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.LastScriptEndTime", last_script_end_time, 0x320, 0x40, true, 0x9cd79c1d85d91023)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.SuspendStartTime", suspend_start_time, 0x360, 0x40, true, 0x8b153878fdea7df8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_JAVASCRIPT_GC_STATE.SuspendEndTime", suspend_end_time, 0x3a0, 0x40, true, 0xa5b6ee0f112bb6d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif