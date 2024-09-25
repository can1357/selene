#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_USER_STREAM_INFORMATION.UserStreamCount", user_stream_count, 0x0, 0x20, true, 0xee29d74a03df8257)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_user_stream_t*), "_MINIDUMP_USER_STREAM_INFORMATION.UserStreamArray", user_stream_array, 0x20, 0x40, true, 0xc13919cd8784c19e)
#else
#define _m00
#define _m01
#endif