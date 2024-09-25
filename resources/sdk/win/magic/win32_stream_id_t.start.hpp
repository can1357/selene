#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_STREAM_ID.dwStreamId", dw_stream_id, 0x0, 0x20, true, 0x44344f582b1355fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_STREAM_ID.dwStreamAttributes", dw_stream_attributes, 0x20, 0x20, true, 0x126f1a19e24346a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WIN32_STREAM_ID.Size", size, 0x40, 0x40, true, 0xee6a5c2274de077)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_STREAM_ID.dwStreamNameSize", dw_stream_name_size, 0x80, 0x20, true, 0x784abbbfe08a0dba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WIN32_STREAM_ID.cStreamName", c_stream_name, 0xa0, 0x10, true, 0xf7aacf9982f30dae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif