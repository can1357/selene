#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtractDeviceStrings@SC_DEVICE$ntoskrnl.exe", 0x5c2ac8, 0x0, true, 0xdc10387a49f58333)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SC_DEVICE@@UEAA@XZ$ntoskrnl.exe", 0x5c29dc, 0x0, true, 0x39938c6cfe38b51c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtractFaultDomainIds@SC_DEVICE$ntoskrnl.exe", 0x5c2bf8, 0x0, true, 0xb87562481bc9de15)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetStorageProperty@SC_DEVICE$ntoskrnl.exe", 0x5c2c58, 0x0, true, 0x45f7b84adc995f94)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetStoragePropertyPost@SC_DEVICE$ntoskrnl.exe", 0x2d53d0, 0x0, true, 0x7fcea130b703b603)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetStoragePropertyPre@SC_DEVICE$ntoskrnl.exe", 0x5c2d90, 0x0, true, 0x35329847b9394e5f)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@SC_DEVICE$ntoskrnl.exe", 0x5c2df0, 0x0, true, 0xe63361c797d99b81)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SaveStorageProperty@SC_DEVICE$ntoskrnl.exe", 0x5c2e80, 0x0, true, 0xd48c6c1b52a29083)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateStorageProperty@SC_DEVICE$ntoskrnl.exe", 0x5c2f34, 0x0, true, 0xdb6b02f1c6618854)
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
#endif