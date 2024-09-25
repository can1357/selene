#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "__std_type_info_data._UndecoratedName", undecorated_name, 0x0, 0x40, true, 0xfe05bc30c9fe2a72)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<const char, 1>), "__std_type_info_data._DecoratedName", decorated_name, 0x40, 0x8, true, 0x51f28f011a1879fe)
#else
#define _m00
#define _m01
#endif