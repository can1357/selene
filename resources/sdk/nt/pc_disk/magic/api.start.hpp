#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1PC_DISK@@QEAA@XZ$ntoskrnl.exe", 0x0, 0x0, false, 0x103dc0c7cbb5e59e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@PC_DISK$ntoskrnl.exe", 0x0, 0x0, false, 0x328c4987262b7be2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsVbr@PC_DISK$ntoskrnl.exe", 0x0, 0x0, false, 0xab4bcc924e4ee2d8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadSectors@PC_DISK$ntoskrnl.exe", 0x0, 0x0, false, 0x60520d85c3fa3140)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reset@PC_DISK$ntoskrnl.exe", 0x0, 0x0, false, 0xdc1d7b2b26d6f347)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteSectors@PC_DISK$ntoskrnl.exe", 0x0, 0x0, false, 0x5ddbc2f4751ffdc6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif