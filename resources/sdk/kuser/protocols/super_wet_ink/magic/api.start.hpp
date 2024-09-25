#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols$win32kfull.sys", 0x256228, 0x0, true, 0x60958e0c750d58a9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopulatePayloadV1@SuperWetInk@Protocols$win32kfull.sys", 0x25625c, 0x0, true, 0x4368f1b571c3927c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif