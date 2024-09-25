#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrEnumerateSatcDevices$ntoskrnl.exe", 0x0, 0x0, false, 0xdf0cce9063f80811)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrCheckPathMatch$ntoskrnl.exe", 0x4e25c8, 0x0, true, 0xbf5655afbf109a23)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrConvertDeviceScope$ntoskrnl.exe", 0x4e269c, 0x0, true, 0xffe6bd0ae407ad26)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrEnumerateRmrrDomains$ntoskrnl.exe", 0x4e28e0, 0x0, true, 0xcf146883586edf7f)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrFindDrhdForDeviceScope$ntoskrnl.exe", 0x4e24ec, 0x0, true, 0xedcd45e32239c81c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrFreeRmrrTree$ntoskrnl.exe", 0x4e2a24, 0x0, true, 0x31f77f822d30071)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrGetNextDeviceScope$ntoskrnl.exe", 0x4e2744, 0x0, true, 0x9ca83298e8bfad2d)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrGetNextDrhdDeviceScope$ntoskrnl.exe", 0x4e259c, 0x0, true, 0x8a200b25eb184385)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrGetNextRemappingStructure$ntoskrnl.exe", 0x4e278c, 0x0, true, 0x967827c5f1d3aa37)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrValidateDeviceScope$ntoskrnl.exe", 0x4e27e0, 0x0, true, 0x6f0e7636d1f4784)
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