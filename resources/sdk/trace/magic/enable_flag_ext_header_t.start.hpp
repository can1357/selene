#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRACE_ENABLE_FLAG_EXT_HEADER.Length", length, 0x0, 0x10, true, 0x9020ea05046953df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRACE_ENABLE_FLAG_EXT_HEADER.Items", items, 0x10, 0x10, true, 0x6ceb2826408e9bc4)
#else
#define _m00
#define _m01
#endif