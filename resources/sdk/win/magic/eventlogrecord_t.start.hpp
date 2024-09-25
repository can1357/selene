#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.Length", length, 0x0, 0x20, true, 0x7941a9a31c13050c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.RecordNumber", record_number, 0x40, 0x20, true, 0xa39a93abe9549274)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.TimeGenerated", time_generated, 0x60, 0x20, true, 0xc5e158de3ee82a1e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.TimeWritten", time_written, 0x80, 0x20, true, 0xc77c5b96905c4e49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.EventID", event_id, 0xa0, 0x20, true, 0x60db0412faff3ddf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENTLOGRECORD.EventType", event_type, 0xc0, 0x10, true, 0xf674ca810ffc8b0c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENTLOGRECORD.NumStrings", num_strings, 0xd0, 0x10, true, 0x551a6d24e50b4efd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENTLOGRECORD.EventCategory", event_category, 0xe0, 0x10, true, 0xd96b92970e15d393)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.ClosingRecordNumber", closing_record_number, 0x100, 0x20, true, 0x732e9536b6cd6843)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.StringOffset", string_offset, 0x120, 0x20, true, 0xa91df221f3a6ff6c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.UserSidLength", user_sid_length, 0x140, 0x20, true, 0x4c5376ae72fd7c14)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.UserSidOffset", user_sid_offset, 0x160, 0x20, true, 0x522a06410d887ce5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.DataLength", data_length, 0x180, 0x20, true, 0x5f543c0459533b51)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTLOGRECORD.DataOffset", data_offset, 0x1a0, 0x20, true, 0x12db0ff9a9876f94)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif