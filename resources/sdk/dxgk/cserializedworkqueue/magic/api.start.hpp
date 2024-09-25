#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CSERIALIZEDWORKQUEUE@@QEAA@XZ$dxgkrnl.sys", 0x43844, 0x0, true, 0xa85f4483cbe6b43f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE$dxgkrnl.sys", 0x16ab74, 0x0, true, 0xadca39d85800bfdf)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SerializedQueueWorker@CSERIALIZEDWORKQUEUE$dxgkrnl.sys", 0x185c80, 0x0, true, 0x6da2c5fd9958a417)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif