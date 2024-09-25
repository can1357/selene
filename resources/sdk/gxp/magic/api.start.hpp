#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GxpAdjustRectangleToFrameBuffer$ntoskrnl.exe", 0x398b14, 0x0, true, 0x783e71e141d715df)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GxpGetRotatedPixelOffset$ntoskrnl.exe", 0x5be3b8, 0x0, true, 0x4100ce847aa6e522)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GxpBitsToBytes$ntoskrnl.exe", 0x3990bc, 0x0, true, 0x6bfd19134113c706)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GxpReadFrameBufferPixels$ntoskrnl.exe", 0x9eea40, 0x0, true, 0x94e12064815ff0ee)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GxpWriteFrameBufferPixels$ntoskrnl.exe", 0x3988e8, 0x0, true, 0x634761db136444f8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif