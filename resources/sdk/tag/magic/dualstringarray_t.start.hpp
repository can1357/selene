#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDUALSTRINGARRAY.wNumEntries", w_num_entries, 0x0, 0x10, true, 0xeef873c94d3e06df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDUALSTRINGARRAY.wSecurityOffset", w_security_offset, 0x10, 0x10, true, 0xe7a0384a87bb23ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "tagDUALSTRINGARRAY.aStringArray", a_string_array, 0x20, 0x10, true, 0xc4ad41860125a1b9)
#else
#define _m00
#define _m01
#define _m02
#endif