#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::memory_correctable_error_header_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION.Header", header, 0x0, 0x0, false, 0xe9f8a94fb238c8d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct whea::memory_correctable_error_data_t, 1>), "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION.Data", data, 0x0, 0x0, false, 0xff38a1c16ca1dcd4)
#else
#define _m00
#define _m01
#endif