#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "FxOffsetAndName.Name", name, 0x0, 0x40, true, 0xe33a035a68d3b6f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxOffsetAndName.Offset", offset, 0x40, 0x8, true, 0x516c308616fb7bc5)
#else
#define _m00
#define _m01
#endif