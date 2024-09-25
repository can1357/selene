#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CallDriver@LPMDisplayCtrl$dxgkrnl.sys", 0x2700f8, 0x0, true, 0xd7a24857a8cbe41a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnableHighPrecisionBrightness@LPMDisplayCtrl$dxgkrnl.sys", 0x270490, 0x0, true, 0x17e5881431cbf490)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCaps@LPMDisplayCtrl$dxgkrnl.sys", 0x2705f4, 0x0, true, 0x64a5aeafc37da203)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasRegisteredInternalDisplay@LPMDisplayCtrl$dxgkrnl.sys", 0x4492c, 0x0, true, 0x9d5b0fe6af783d75)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@LPMDisplayCtrl$dxgkrnl.sys", 0x270678, 0x0, true, 0x5ec80a37bcc81398)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LPMStart@LPMDisplayCtrl$dxgkrnl.sys", 0x270b28, 0x0, true, 0x5d4ef0c5e9cd71e7)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LPMStop@LPMDisplayCtrl$dxgkrnl.sys", 0x270bbc, 0x0, true, 0xdae93b0042cc7c56)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetCurrentBrightnessLevel@LPMDisplayCtrl$dxgkrnl.sys", 0x270c5c, 0x0, true, 0xac04b3beb6ab11d9)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetIlluminance@LPMDisplayCtrl$dxgkrnl.sys", 0x270dfc, 0x0, true, 0x7bb00fecfa63854e)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Update@LPMDisplayCtrl$dxgkrnl.sys", 0x270e58, 0x0, true, 0x477b3c7f03aba5a9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#endif