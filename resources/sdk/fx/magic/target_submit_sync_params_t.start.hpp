#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxTargetSubmitSyncParams.SynchEvent", synch_event, 0x0, 0x0, true, 0x916b2db3ae735817)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxTargetSubmitSyncParams.Status", status, 0x100, 0x20, true, 0xafb7396d895c98b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_request_completion_routine_t ), "FxTargetSubmitSyncParams.OrigTargetCompletionRoutine", orig_target_completion_routine, 0x140, 0x40, true, 0x430b04139961695)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxTargetSubmitSyncParams.OrigTargetCompletionContext", orig_target_completion_context, 0x180, 0x40, true, 0x9b20ca6403883ae4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif