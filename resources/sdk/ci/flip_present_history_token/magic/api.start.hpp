#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CIFlipPresentHistoryToken@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x65114bec882de80a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken$dxgkrnl.sys", 0x0, 0x0, false, 0xdb1ff5909e39ab80)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsIFlipSupported@CIFlipPresentHistoryToken$dxgkrnl.sys", 0x0, 0x0, false, 0xac011c008b957c72)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif