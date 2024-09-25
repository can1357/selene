#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WIN32_FIND_STREAM_DATA.StreamSize", stream_size, 0x0, 0x40, true, 0xc2f64b43eb93ff46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 296>), "_WIN32_FIND_STREAM_DATA.cStreamName", c_stream_name, 0x40, 0x80, true, 0xdda4c4a50c17e604)
#else
#define _m00
#define _m01
#endif