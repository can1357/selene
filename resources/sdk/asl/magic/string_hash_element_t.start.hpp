#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ASL_STRING_HASH_ELEMENT.HashString", hash_string, 0x0, 0x40, true, 0xf4a7e9f95fa038cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASL_STRING_HASH_ELEMENT.StringRef", string_ref, 0x40, 0x20, true, 0x762cdf5d0de9f33a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct asl::string_hash_element_t*), "_ASL_STRING_HASH_ELEMENT.Next", next, 0x80, 0x40, true, 0x985f614e86329480)
#else
#define _m00
#define _m01
#define _m02
#endif