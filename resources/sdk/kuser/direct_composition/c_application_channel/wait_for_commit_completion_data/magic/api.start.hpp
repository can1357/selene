#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition$win32kbase.sys", 0xabfc0, 0x0, true, 0xd4c45fa14458dedc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition$win32kbase.sys", 0x8133c, 0x0, true, 0xd1d09accde6275ca)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif