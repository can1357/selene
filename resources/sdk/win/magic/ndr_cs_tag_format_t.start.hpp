#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR_CS_TAG_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x1450360b84060756)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_cs_tag_flags_t), "_NDR_CS_TAG_FORMAT.Flags", flags, 0x8, 0x8, true, 0x1a6982f9109ea8b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_CS_TAG_FORMAT.TagRoutineIndex", tag_routine_index, 0x10, 0x10, true, 0x4a463d17bfca8e89)
#else
#define _m00
#define _m01
#define _m02
#endif