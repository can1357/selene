#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z$dxgkrnl.sys", 0x6af78, 0x0, true, 0x1b74fdef7515462e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CFlipResource@@MEAA@XZ$dxgkrnl.sys", 0x6afb0, 0x0, true, 0x91a386444a59a240)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CFlipResource$dxgkrnl.sys", 0x69238, 0x0, true, 0x23922018f9bdc6cb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif