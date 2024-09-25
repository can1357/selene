#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindBlobProperty@CFlipPropertySetBase$dxgkrnl.sys", 0x6bdd0, 0x0, true, 0x329d96adeb42adc5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CFlipPropertySetBase@@MEAA@XZ$dxgkrnl.sys", 0x693cc, 0x0, true, 0xdc71c8b267c3eae9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CFlipPropertySetBase$dxgkrnl.sys", 0x65fc0, 0x0, true, 0x4380eaa5f98ab046)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif