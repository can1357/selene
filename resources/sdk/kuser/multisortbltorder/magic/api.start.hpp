#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MULTISORTBLTORDER@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x682b6f9217e68f4b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z$win32kfull.sys", 0x2a1110, 0x0, true, 0x3913dbe57e52335b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif