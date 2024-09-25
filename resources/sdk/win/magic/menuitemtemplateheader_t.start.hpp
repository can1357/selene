#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "MENUITEMTEMPLATEHEADER.versionNumber", version_number, 0x0, 0x10, true, 0x58d5cc8de68f3664)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "MENUITEMTEMPLATEHEADER.offset", offset, 0x10, 0x10, true, 0xdbf76595094b194d)
#else
#define _m00
#define _m01
#endif