#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_AVAILABLE_CHANNEL_LIST.Header", header, 0x0, 0x20, true, 0x35a0473e70f4daa5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_AVAILABLE_CHANNEL_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0xe3900e0a86943fc9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_AVAILABLE_CHANNEL_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0xdb311f0721996de9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DOT11_AVAILABLE_CHANNEL_LIST.uChannelNumber", u_channel_number, 0x60, 0x20, true, 0xb7e671df1c231aff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif