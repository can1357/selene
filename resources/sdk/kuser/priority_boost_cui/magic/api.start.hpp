#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TransitionForegroundPriority@PriorityBoostCUI$win32kfull.sys", 0x32528, 0x0, true, 0x1cb33825f8dd14a0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI$win32kfull.sys", 0x4eb8, 0x0, true, 0xd55ae544e2e33935)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI$win32kfull.sys", 0x223f04, 0x0, true, 0x36c8d174a1a9c574)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI$win32kfull.sys", 0x326c4, 0x0, true, 0xcdd1678ca1bb3df0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif