#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMapping@REMOTEVSYNCMAPPING$dxgkrnl.sys", 0x4c8b0, 0x0, true, 0x9d0e06046ba5fefd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveMapping@REMOTEVSYNCMAPPING$dxgkrnl.sys", 0x4cc38, 0x0, true, 0x1b3a618be5ffb2a6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TriggerRemoteVsync@REMOTEVSYNCMAPPING$dxgkrnl.sys", 0x4cc58, 0x0, true, 0xbac35d87859ed0b2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif