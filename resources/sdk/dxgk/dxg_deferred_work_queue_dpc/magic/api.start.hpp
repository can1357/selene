#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE_DPC$dxgkrnl.sys", 0x0, 0x0, false, 0x4475f05848be9c98)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC$dxgkrnl.sys", 0x0, 0x0, false, 0x1e395ebbb40aec7a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC$dxgkrnl.sys", 0x0, 0x0, false, 0x20346cc336378e10)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif