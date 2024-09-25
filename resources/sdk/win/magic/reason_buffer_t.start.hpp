#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REASON_BUFFER.Flags", flags, 0x0, 0x20, true, 0xf6c306516a973fbe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REASON_BUFFER.ResourceFileNameOffset", resource_file_name_offset, 0x40, 0x40, true, 0xb0f356574aba410c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REASON_BUFFER.ResourceReasonId", resource_reason_id, 0x80, 0x10, true, 0x114d316e7ef20781)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REASON_BUFFER.StringCount", string_count, 0xa0, 0x20, true, 0x9f8181142cf17534)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REASON_BUFFER.SubstitutionStringsOffset", substitution_strings_offset, 0xc0, 0x40, true, 0xb060ed743eac6333)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REASON_BUFFER.SimpleStringOffset", simple_string_offset, 0x40, 0x40, true, 0xb178994170e17009)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif