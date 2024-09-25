#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_DATA_LENGTH.DataLength", data_length, 0x0, 0x20, true, 0x1e7fb0d090551fc6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NET_BUFFER_DATA_LENGTH.stDataLength", st_data_length, 0x0, 0x40, true, 0x23be3ea27ef8a900)
#else
#define _m00
#define _m01
#endif