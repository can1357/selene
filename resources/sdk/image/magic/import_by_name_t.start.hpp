#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_IMPORT_BY_NAME.Hint", hint, 0x0, 0x10, true, 0x37090474862f30ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_IMAGE_IMPORT_BY_NAME.Name", name, 0x10, 0x8, true, 0xe0886263fc54edce)
#else
#define _m00
#define _m01
#endif