#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocatePool@PC_ENVIRONMENT$ntoskrnl.exe", 0x0, 0x0, false, 0x2461cbb4299a9853)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Control@PC_ENVIRONMENT$ntoskrnl.exe", 0x0, 0x0, false, 0x93cae2ea3abcdc86)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateGuid@PC_ENVIRONMENT$ntoskrnl.exe", 0x0, 0x0, false, 0x36b726dc18d69373)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreePool@PC_ENVIRONMENT$ntoskrnl.exe", 0x0, 0x0, false, 0x18130eee463c3d8c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Read@PC_ENVIRONMENT$ntoskrnl.exe", 0x0, 0x0, false, 0xed623a77999835ca)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Write@PC_ENVIRONMENT$ntoskrnl.exe", 0x0, 0x0, false, 0x1f83044a0be20fc0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif