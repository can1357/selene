#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR_CS_ARRAY_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xd55983d128a75957)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_CS_ARRAY_FORMAT.UserTypeSize", user_type_size, 0x10, 0x10, true, 0x48eafd4a367ddf9c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_CS_ARRAY_FORMAT.CSRoutineIndex", cs_routine_index, 0x20, 0x10, true, 0xef1e6aa31838e127)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_CS_ARRAY_FORMAT.DescriptionOffset", description_offset, 0x40, 0x20, true, 0x6e5545f3a99a856b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif