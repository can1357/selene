#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddCompositionFrame@CCompositionFrameCollection$dxgkrnl.sys", 0x15210, 0x0, true, 0x5c88481676b42977)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRef@CCompositionFrameCollection$dxgkrnl.sys", 0x1af30, 0x0, true, 0xc56ef4fed7074924)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DiscardAllCompositionFrames@CCompositionFrameCollection$dxgkrnl.sys", 0xd2f0, 0x0, true, 0xd795037c9e87a9a8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DiscardPreviousFrames@CCompositionFrameCollection$dxgkrnl.sys", 0x16820, 0x0, true, 0xed76a9607e9d2330)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindCompositionFrame@CCompositionFrameCollection$dxgkrnl.sys", 0x14130, 0x0, true, 0x9605e0ed85e4fbbd)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CCompositionFrameCollection$dxgkrnl.sys", 0xcad0, 0x0, true, 0x5ca0304e18222eae)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveCompositionFrame@CCompositionFrameCollection$dxgkrnl.sys", 0x14d60, 0x0, true, 0xd3faaa6c13c03eae)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif