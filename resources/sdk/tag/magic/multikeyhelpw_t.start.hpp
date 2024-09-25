#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMULTIKEYHELPW.mkSize", mk_size, 0x0, 0x20, true, 0xf8436f568d8b3e92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t), "tagMULTIKEYHELPW.mkKeylist", mk_keylist, 0x20, 0x10, true, 0x1af7817a73aba53d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "tagMULTIKEYHELPW.szKeyphrase", sz_keyphrase, 0x30, 0x10, true, 0x6c8b53895f7874eb)
#else
#define _m00
#define _m01
#define _m02
#endif