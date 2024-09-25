#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_INIT_UNICODE_STRING_ARGS.DestinationString", destination_string, 0x0, 0x40, true, 0xcee9e9e4217ab0a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_STOR_INIT_UNICODE_STRING_ARGS.SourceString", source_string, 0x40, 0x40, true, 0x45e720dbaff3ea8a)
#else
#define _m00
#define _m01
#endif