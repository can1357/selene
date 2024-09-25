#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@KLockHolder$ndis.sys", 0xfdf20, 0x0, true, 0x844cde7665358cc5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@KLockHolder$ndis.sys", 0x10577c, 0x0, true, 0xeb4ff949203af8a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1KLockHolder@@QEAA@XZ$ndis.sys", 0xfe3f0, 0x0, true, 0x9d3297d6b14ccf08)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseExclusive@KLockHolder$ndis.sys", 0x109d34, 0x0, true, 0x6648f6359fcc133a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseShared@KLockHolder$ndis.sys", 0x10a3b0, 0x0, true, 0xacd72c8d74a956d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif