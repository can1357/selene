#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_descriptor_t), "EVENT_ENTRY.EventDescriptor", event_descriptor, 0x0, 0x80, true, 0xeb71d7ad5d4b9e00)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_data_descriptor_t*), "EVENT_ENTRY.UserData", user_data, 0x80, 0x40, true, 0xc7c9587f878c2431)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::event_entry_t*), "EVENT_ENTRY.LeftEntry", left_entry, 0xc0, 0x40, true, 0x2a61506a5034a74b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::event_entry_t*), "EVENT_ENTRY.RightEntry", right_entry, 0x100, 0x40, true, 0xe2dfb0bdc523e432)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "EVENT_ENTRY.Hash", hash, 0x140, 0x20, true, 0x582042330cc40c35)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "EVENT_ENTRY.UserDataCount", user_data_count, 0x160, 0x8, true, 0x290c2bccbf66f7ad)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "EVENT_ENTRY.NumAggregateFields", num_aggregate_fields, 0x168, 0x8, true, 0x38c3e67ddcc09769)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif