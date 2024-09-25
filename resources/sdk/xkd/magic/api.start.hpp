#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdCheckPowerButton$ntoskrnl.exe", 0x3973d0, 0x0, true, 0xecb025105e884621)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdEnumerateDebuggingDevices$ntoskrnl.exe", 0x3cbe40, 0x0, true, 0x4c17e999dd20840a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdGetAcpiTablePhase0$ntoskrnl.exe", 0x2d53d0, 0x0, true, 0x9feb8f5a40b5b86)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdMapPhysicalMemory64$ntoskrnl.exe", 0x2d53d0, 0x0, true, 0x4d477598db7af0d6)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdReleaseIntegratedDeviceForDebugging$ntoskrnl.exe", 0x3cbe40, 0x0, true, 0x46f07ecfa17429ee)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdReleasePciDeviceForDebugging$ntoskrnl.exe", 0x3cbe40, 0x0, true, 0xd8f1889fb78a78c2)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdSetupIntegratedDeviceForDebugging$ntoskrnl.exe", 0x3cbe40, 0x0, true, 0x8635e865e76e220)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdSetupPciDeviceForDebugging$ntoskrnl.exe", 0x3cbe40, 0x0, true, 0x9d04b2a135700da9)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdUnmapVirtualAddress$ntoskrnl.exe", 0x3973d0, 0x0, true, 0x54cb8ac93a2c82e1)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xKdWatchdogDelayExpiration$ntoskrnl.exe", 0x3629d0, 0x0, true, 0x77df24ddbfa8287b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#endif