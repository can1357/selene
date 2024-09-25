#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdiGetDiskParameters$ntoskrnl.exe", 0xa92320, 0x0, true, 0x5a264c962e4a5a2b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdiGetPartitionNumber$ntoskrnl.exe", 0xa92474, 0x0, true, 0x1d484d9f51cbe888)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdiGetVolumeNumber$ntoskrnl.exe", 0xa92510, 0x0, true, 0x8d701122205ea168)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdiInitializeBootDisk$ntoskrnl.exe", 0xa92690, 0x0, true, 0x248fdccb79b8bc9c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdiMountVhdFile$ntoskrnl.exe", 0xa92998, 0x0, true, 0x4ee3d21816a33d11)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdiQueryVolumeVhdFilePath$ntoskrnl.exe", 0xa92ea8, 0x0, true, 0xbf59fc1b67376501)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdiVerifyBootDisk$ntoskrnl.exe", 0x97ba1c, 0x0, true, 0x6ecf7a65959b719f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif