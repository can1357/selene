#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TestHotKey@WindowArrangementSequence$win32kfull.sys", 0x0, 0x0, false, 0x70d5e98915a44b83)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$fWindowArrangementSequenceInProgress@WindowArrangementSequence$win32kfull.sys", 0x33aee0, 0x0, true, 0x696ce1a9ec365b5a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TestSequence@WindowArrangementSequence$win32kfull.sys", 0xdb5c4, 0x0, true, 0x6e44af01dfbc5479)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif