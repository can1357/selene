#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE$dxgkrnl.sys", 0x0, 0x0, false, 0x54199b00d0630eca)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z$dxgkrnl.sys", 0x16ec04, 0x0, true, 0x1681136dc9f97340)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DisableChannel@DXG_VMBUS_CHANNEL_BASE$dxgkrnl.sys", 0x3e248, 0x0, true, 0xfd749f7e427c1886)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PauseChannel@DXG_VMBUS_CHANNEL_BASE$dxgkrnl.sys", 0x235aa0, 0x0, true, 0x4c3f4b939413dfa)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE$dxgkrnl.sys", 0x235cd8, 0x0, true, 0x33d54ecd0cc3bf51)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE$dxgkrnl.sys", 0x235dc8, 0x0, true, 0x1949dc72a3510f48)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE$dxgkrnl.sys", 0x247fb4, 0x0, true, 0x1baf2586acb947d6)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE$dxgkrnl.sys", 0x2482cc, 0x0, true, 0x3a2f29725fdc0fb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif