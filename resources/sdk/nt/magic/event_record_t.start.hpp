#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_header_t), "_EVENT_RECORD.EventHeader", event_header, 0x0, 0x80, true, 0x9cb76cb663d951b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::buffer_context_t), "_EVENT_RECORD.BufferContext", buffer_context, 0x280, 0x20, true, 0xd3823e2859200350)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_RECORD.ExtendedDataCount", extended_data_count, 0x2a0, 0x10, true, 0x72750dc51ea5c3bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_RECORD.UserDataLength", user_data_length, 0x2b0, 0x10, true, 0x1be67f32d37bdab0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_header_extended_data_item_t*), "_EVENT_RECORD.ExtendedData", extended_data, 0x2c0, 0x40, true, 0x7bd1cc11fd827f06)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EVENT_RECORD.UserData", user_data, 0x300, 0x40, true, 0x720cdfdaca52285c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EVENT_RECORD.UserContext", user_context, 0x340, 0x40, true, 0xeb25d7beb9082b51)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif