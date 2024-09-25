#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::input_message_device_type_t), "tagINPUT_MESSAGE_SOURCE.deviceType", device_type, 0x0, 0x20, true, 0xbbb2562315fc0af2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::input_message_origin_id_t), "tagINPUT_MESSAGE_SOURCE.originId", origin_id, 0x20, 0x20, true, 0xa2d2c7dbd2767f95)
#else
#define _m00
#define _m01
#endif