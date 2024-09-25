#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR$dxgmms2.sys", 0x29ef4, 0x0, true, 0x249265ebc8adfa41)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR$dxgmms2.sys", 0x29f20, 0x0, true, 0xc788ff67bbd7a3cf)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif