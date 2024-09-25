#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NdisWatchdogState@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x20087b5a4fa20df6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CancelTimer@NdisWatchdogState$ndis.sys", 0x1b5f8, 0x0, true, 0x9c30cb8995c1d7ea)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NdisWatchdogState@@QEAA@XZ$ndis.sys", 0xfe2d8, 0x0, true, 0xf8694c91981bb61c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Disarm@NdisWatchdogState$ndis.sys", 0xfe44c, 0x0, true, 0x170b6f2168c6af75)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportTimeout@NdisWatchdogState$ndis.sys", 0x121b40, 0x0, true, 0x7b0d183fd60b85f9)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitSynchronously@NdisWatchdogState$ndis.sys", 0x121bdc, 0x0, true, 0x1f846a09dc75ed5e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif