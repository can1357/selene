#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONTEXT_HANDLE_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xe815d50409d366d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONTEXT_HANDLE_FORMAT.ContextFlags", context_flags, 0x8, 0x8, true, 0xd5fb09594c071408)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONTEXT_HANDLE_FORMAT.RundownRoutineIndex", rundown_routine_index, 0x10, 0x8, true, 0x84f7afdcb271b722)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONTEXT_HANDLE_FORMAT.Ordinal", ordinal, 0x18, 0x8, true, 0x53796e378f0b6eab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif