#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGVAILGUESTOBJECT@@IEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xca75e0c8abbd6b0c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddReference@DXGVAILGUESTOBJECT$dxgkrnl.sys", 0x2aeed8, 0x0, true, 0xa77c6a4bd84bb366)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT$dxgkrnl.sys", 0x2af8b8, 0x0, true, 0xe6572d4c593b1be3)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT$dxgkrnl.sys", 0x2afe94, 0x0, true, 0x95dfdd35a588e252)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnableVmBusChannel@DXGVAILGUESTOBJECT$dxgkrnl.sys", 0x4ace0, 0x0, true, 0x2e69b33708554c0a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGVAILGUESTOBJECT$dxgkrnl.sys", 0x2b0270, 0x0, true, 0xc879cc0e48c6e653)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseReference@DXGVAILGUESTOBJECT$dxgkrnl.sys", 0x2b0768, 0x0, true, 0x2475fb06843f4627)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetVmBusChannel@DXGVAILGUESTOBJECT$dxgkrnl.sys", 0x4ae70, 0x0, true, 0xb488cebfe574bc4a)
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