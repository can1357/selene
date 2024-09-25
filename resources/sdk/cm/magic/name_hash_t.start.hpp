#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::component_hash_t), "_CM_NAME_HASH.ConvKey", conv_key, 0x0, 0x20, true, 0x1137d9da1d4b2138)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::name_hash_t*), "_CM_NAME_HASH.NextHash", next_hash, 0x40, 0x40, true, 0xb843fc2a25400d31)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_NAME_HASH.NameLength", name_length, 0x80, 0x10, true, 0x786a2afa6e6929)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CM_NAME_HASH.Name", name, 0x90, 0x10, true, 0x5f8e7fc31a632c42)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif