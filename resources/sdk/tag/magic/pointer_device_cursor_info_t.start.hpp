#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_DEVICE_CURSOR_INFO.cursorId", cursor_id, 0x0, 0x20, true, 0x6000787ee388c877)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::pointer_device_cursor_type_t), "tagPOINTER_DEVICE_CURSOR_INFO.cursor", cursor, 0x20, 0x20, true, 0xb33e0e701cea8c92)
#else
#define _m00
#define _m01
#endif