#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCENTRY.lCultureNameOffset", l_culture_name_offset, 0x0, 0x20, true, 0xecfe51fd56bf95f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCENTRY.ulCultureID", ul_culture_id, 0x20, 0x20, true, 0xb5e462aa1a747d2e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCENTRY.ulLanguageType", ul_language_type, 0x40, 0x20, true, 0xec3cee03047ffc8e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muiccentry_t*), "_MUICCENTRY.pNeutralCulture", p_neutral_culture, 0x80, 0x40, true, 0x65745a115938545f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::muiccentry_t*, 4>), "_MUICCENTRY.lBaseLanguageIndices", l_base_language_indices, 0xc0, 0x0, true, 0x844d06f228b33ca4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 4>), "_MUICCENTRY.lParentLanguageIndices", l_parent_language_indices, 0x1c0, 0x80, true, 0x508baf50aac7e7e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif