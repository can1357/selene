#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_ADDITIONAL_IE.Header", header, 0x0, 0x20, true, 0xbb18a0414b6552e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_ADDITIONAL_IE.uBeaconIEsOffset", u_beacon_i_es_offset, 0x20, 0x20, true, 0xb9bbcf66f06d1931)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_ADDITIONAL_IE.uBeaconIEsLength", u_beacon_i_es_length, 0x40, 0x20, true, 0xd8bed17a9a017d26)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_ADDITIONAL_IE.uResponseIEsOffset", u_response_i_es_offset, 0x60, 0x20, true, 0x91256918df3164b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_ADDITIONAL_IE.uResponseIEsLength", u_response_i_es_length, 0x80, 0x20, true, 0xe140eaa29dd7e406)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif