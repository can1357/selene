#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseRenderingDoneEvent@BLTENTRY$dxgkrnl.sys", 0x0, 0x0, false, 0xb0b145459dd6187b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cleanup@BLTENTRY$dxgkrnl.sys", 0x2f7768, 0x0, true, 0xaa7390f8b0ad8cb2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Blt@BLTENTRY$dxgkrnl.sys", 0x2f76a4, 0x0, true, 0xbe53df4b1910608)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BLTENTRY@@QEAA@XZ$dxgkrnl.sys", 0x1a5c0, 0x0, true, 0x6ad7a94410c08d0a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1BLTENTRY@@QEAA@XZ$dxgkrnl.sys", 0x5c2e0, 0x0, true, 0xa8858260d8e2b465)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IndirectBlt@BLTENTRY$dxgkrnl.sys", 0x2f8520, 0x0, true, 0x79ad3ab4b1fb6a8c)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleasePresentDoneEvent@BLTENTRY$dxgkrnl.sys", 0x2f9e40, 0x0, true, 0xd9121edc4e61381)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetupPresentParameters@BLTENTRY$dxgkrnl.sys", 0x2fa76c, 0x0, true, 0xa28d75808bd6a4ad)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif