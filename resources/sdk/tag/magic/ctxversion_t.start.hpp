#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagCTXVERSION.ThisVersion", this_version, 0x0, 0x10, true, 0x276d6c41c58290e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagCTXVERSION.MinVersion", min_version, 0x10, 0x10, true, 0x1e50207986cd04af)
#else
#define _m00
#define _m01
#endif