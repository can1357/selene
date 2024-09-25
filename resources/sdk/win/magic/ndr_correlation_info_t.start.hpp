#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_correlation_info_header_t), "_NDR_CORRELATION_INFO.Header", header, 0x0, 0xc0, true, 0x7dac05dc18de233)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::ndr_correlation_info_data_t, 1>), "_NDR_CORRELATION_INFO.Data", data, 0xc0, 0x0, true, 0x31148e3b19a8f7f1)
#else
#define _m00
#define _m01
#endif