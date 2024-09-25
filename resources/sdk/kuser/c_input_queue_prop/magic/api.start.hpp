#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InvalidateInputQueues@CInputQueueProp$win32kfull.sys", 0x11856c, 0x0, true, 0xa76cd0dfbc1f1a2a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@CInputQueueProp$win32kfull.sys", 0x118540, 0x0, true, 0x925a01c02ff39a73)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AttachInputQueue@CInputQueueProp$win32kfull.sys", 0x5298c, 0x0, true, 0x10c7e5f392dacd17)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DetachInputQueue@CInputQueueProp$win32kfull.sys", 0xcd6c8, 0x0, true, 0x3b77b9e1524bef38)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAtom@CInputQueueProp$win32kfull.sys", 0x12a2c0, 0x0, true, 0xe4f3ecf82895fa9c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceAndStoreUIOwnerPwnd@CInputQueueProp$win32kfull.sys", 0x241af4, 0x0, true, 0x6ede61ca0013e2b3)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_atom@CInputQueueProp$win32kfull.sys", 0x33a184, 0x0, true, 0x267b7fdc97ac8760)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif