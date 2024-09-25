#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMULTIKEYHELPA.mkSize", mk_size, 0x0, 0x20, true, 0xcaa75b09490d8427)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "tagMULTIKEYHELPA.mkKeylist", mk_keylist, 0x20, 0x8, true, 0x81b1384d95b07303)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "tagMULTIKEYHELPA.szKeyphrase", sz_keyphrase, 0x28, 0x8, true, 0x24b7bca4a12336cf)
#else
#define _m00
#define _m01
#define _m02
#endif