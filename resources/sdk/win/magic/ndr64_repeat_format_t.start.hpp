#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_REPEAT_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xe5eef9388ddbecf5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_pointer_repeat_flags_t), "_NDR64_REPEAT_FORMAT.Flags", flags, 0x8, 0x8, true, 0x45a62dd878525227)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_REPEAT_FORMAT.Increment", increment, 0x20, 0x20, true, 0xbdd9ef2de4af7370)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_REPEAT_FORMAT.OffsetToArray", offset_to_array, 0x40, 0x20, true, 0x1a1d8f723257a65b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_REPEAT_FORMAT.NumberOfPointers", number_of_pointers, 0x60, 0x20, true, 0xf1358dcef9d5cd59)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif