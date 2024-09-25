#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AssignAttachQueue@tagTHREADINFO$win32kbase.sys", 0x0, 0x0, false, 0xb1d1d2bb59636981)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AssignQueue@tagTHREADINFO$win32kbase.sys", 0x0, 0x0, false, 0xc748859aad63909b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AssignQueueWorker@tagTHREADINFO$win32kbase.sys", 0x0, 0x0, false, 0xb122c6c8f66b5b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@tagTHREADINFO$win32kbase.sys", 0x0, 0x0, false, 0x8e426e36a2704d3e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveThreadFromListWorker@tagTHREADINFO$win32kbase.sys", 0x0, 0x0, false, 0x3a5a983dc7f9587)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveThreadFromQSharingLists@tagTHREADINFO$win32kbase.sys", 0x0, 0x0, false, 0x58f8d9baf45d0d82)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif