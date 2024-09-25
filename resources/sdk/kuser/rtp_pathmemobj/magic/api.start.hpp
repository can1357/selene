#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bFetchSubPath@RTP_PATHMEMOBJ$win32kfull.sys", 0x0, 0x0, false, 0x25f0c0d9ca3ed3e0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bDiagonalizePath@RTP_PATHMEMOBJ$win32kfull.sys", 0x2c0900, 0x0, true, 0xad91ae5663b1eb12)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bDiagonalizeSubPath@RTP_PATHMEMOBJ$win32kfull.sys", 0x2c099c, 0x0, true, 0x56a6d9bcf6f18d8d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bFetchNextPoint@RTP_PATHMEMOBJ$win32kfull.sys", 0x2c0bfc, 0x0, true, 0xa894ab205fc71265)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bWritePoint@RTP_PATHMEMOBJ$win32kfull.sys", 0x2c0d24, 0x0, true, 0xea20fc174985f82c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif