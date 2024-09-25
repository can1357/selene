#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::localeinfo_struct_t), "_LocaleUpdate.localeinfo", localeinfo, 0x0, 0x0, false, 0xdd4cc30652c39657)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_LocaleUpdate.updated", updated, 0x0, 0x0, false, 0x6e60d77fbc85979)
#else
#define _m00
#define _m01
#endif