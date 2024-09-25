#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_CONTEXT.cbEncoded", cb_encoded, 0x0, 0x20, true, 0x1b8b26476cc8644f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CRYPT_TIMESTAMP_CONTEXT.pbEncoded", pb_encoded, 0x40, 0x40, true, 0x14cedb9aeeb42c5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_timestamp_info_t*), "_CRYPT_TIMESTAMP_CONTEXT.pTimeStamp", p_time_stamp, 0x80, 0x40, true, 0xe9b21dae4aa7ae9)
#else
#define _m00
#define _m01
#define _m02
#endif