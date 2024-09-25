#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1InteractiveControlInput@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x9295f92a9f1a9449)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z$win32kfull.sys", 0x258fac, 0x0, true, 0xf49dba4e846b116b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GenerateCtrlInputMessages@InteractiveControlInput$win32kfull.sys", 0x259034, 0x0, true, 0xf9a392d4630aec25)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GenerateMessages@InteractiveControlInput$win32kfull.sys", 0x259150, 0x0, true, 0xd26f2bdfdc0b4cb4)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ParseInputReport@InteractiveControlInput$win32kfull.sys", 0x259464, 0x0, true, 0xe115a7aad207d521)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif