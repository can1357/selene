#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_9.Request", request, 0x0, 0x0, false, 0xea8ac1422656a5e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_9.Irp", irp, 0x0, 0x0, false, 0xe8a7eee9d1f654d8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_9.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x5ac660d4c0442ca9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_9.Information", information, 0x0, 0x0, false, 0xb46259e70aba1ef0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_9.MajorFunction", major_function, 0x0, 0x0, false, 0xfc0d7cc24b81b57c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif