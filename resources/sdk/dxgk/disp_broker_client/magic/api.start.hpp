#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DispBrokerClient@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xf0e5c3c28492b112)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DisconnectDisplayBroker@DispBrokerClient$dxgkrnl.sys", 0x0, 0x0, false, 0xe02ed4e4618714f6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DisableDisplayBroker@DispBrokerClient$dxgkrnl.sys", 0x18ea8, 0x0, true, 0xf84450759657d899)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnsureConnected@DispBrokerClient$dxgkrnl.sys", 0x1505b8, 0x0, true, 0xf918be8f36a77624)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsClientHandleValid@DispBrokerClient$dxgkrnl.sys", 0x150b54, 0x0, true, 0x90b15ca4c2ab6faf)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferencePort@DispBrokerClient$dxgkrnl.sys", 0x150adc, 0x0, true, 0x63c71116a6834181)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendDisplayBrokerMessage@DispBrokerClient$dxgkrnl.sys", 0x150918, 0x0, true, 0x677dff30a71bafd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif