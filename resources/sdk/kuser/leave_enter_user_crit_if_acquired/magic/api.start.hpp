#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1LeaveEnterUserCritIfAcquired@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x7e910aafd16e0299)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0LeaveEnterUserCritIfAcquired@@QEAA@XZ$win32kfull.sys", 0x25a4a8, 0x0, true, 0x7a6db913ba2ba2b8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif