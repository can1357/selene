#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGLISTNODE.LanguageType", language_type, 0x0, 0x10, true, 0x3a5ddffc35c98c63)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_MUILANGLISTNODE.LanguageSpec", language_spec, 0x20, 0x10, true, 0xf97ee81e455f9def)
#else
#define _m00
#define _m01
#endif