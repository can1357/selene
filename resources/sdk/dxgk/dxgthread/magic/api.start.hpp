#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrent@DXGTHREAD$dxgkrnl.sys", 0xf99a0, 0x0, true, 0x46de62f2adb2451e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$m_LockOrderTrackerUpperBound@DXGTHREAD$dxgkrnl.sys", 0xaf008, 0x0, true, 0xc87acc2cfadf228d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif