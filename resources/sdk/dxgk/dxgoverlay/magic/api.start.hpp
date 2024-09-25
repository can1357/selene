#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reset@DXGOVERLAY$dxgkrnl.sys", 0x0, 0x0, false, 0xb01cedd4f915b489)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Stop@DXGOVERLAY$dxgkrnl.sys", 0x0, 0x0, false, 0x7902a55db5493352)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@DXGOVERLAY$dxgkrnl.sys", 0x274a2c, 0x0, true, 0x603ab6b104faaac)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGOVERLAY@@QEAA@XZ$dxgkrnl.sys", 0x2749f0, 0x0, true, 0x7704cbc971cb7038)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FlipOverlay@DXGOVERLAY$dxgkrnl.sys", 0x274b44, 0x0, true, 0x46ce9282c484e652)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetOverlayState@DXGOVERLAY$dxgkrnl.sys", 0x274e84, 0x0, true, 0x156cb0239b5d796c)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGOVERLAY$dxgkrnl.sys", 0x274f64, 0x0, true, 0x50163e5112b1436a)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateOverlay@DXGOVERLAY$dxgkrnl.sys", 0x2753b0, 0x0, true, 0x37d3dabdfafa75c6)
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