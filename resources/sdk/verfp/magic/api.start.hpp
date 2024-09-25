#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieDeleteEmptyNode$netio.sys", 0x0, 0x0, false, 0xe4b45e840100611e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieAttachEntryToNode$netio.sys", 0x55974, 0x0, true, 0x8dc258729202f2bf)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieDeleteTree$netio.sys", 0x55a60, 0x0, true, 0xc85b0cfffefe401f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieDetachEntryFromNode$netio.sys", 0x55b3c, 0x0, true, 0x797d23689f76115a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieFindNumberOfCommonBitsFromLeft$netio.sys", 0x55bb0, 0x0, true, 0xf282bb917a1db6b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieInsertKey$netio.sys", 0x55e20, 0x0, true, 0xf64b3d480760a9ea)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieAllocateNode$netio.sys", 0x5592c, 0x0, true, 0xaf4208090c3b3624)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieInsert64bitKey$netio.sys", 0x55c78, 0x0, true, 0xcc6b6af7e3441b90)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VfpTrieLookupKey$netio.sys", 0x55ee8, 0x0, true, 0x5e96815d33b839a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#endif