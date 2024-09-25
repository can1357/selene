#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_correlation_info_t*), "_NDR_CORRELATION_INFO_HEADER.pCache", p_cache, 0x0, 0x40, true, 0x6dfa133d1f45a062)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_correlation_info_t*), "_NDR_CORRELATION_INFO_HEADER.pInfo", p_info, 0x40, 0x40, true, 0xc6555c7416bfbec2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_CORRELATION_INFO_HEADER.DataSize", data_size, 0x80, 0x20, true, 0x2e27c2a7844af424)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_CORRELATION_INFO_HEADER.DataLen", data_len, 0xa0, 0x20, true, 0x4bbf914ab9784653)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif