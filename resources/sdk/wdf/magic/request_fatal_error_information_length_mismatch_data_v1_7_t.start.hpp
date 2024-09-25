#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_7.Request", request, 0x0, 0x0, false, 0xa28625992eb48a7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_7.Irp", irp, 0x0, 0x0, false, 0x7febdc45913aa451)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_7.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0xb9096f0bc81948dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_7.Information", information, 0x0, 0x0, false, 0xb6eaee7f58a7145)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_7.MajorFunction", major_function, 0x0, 0x0, false, 0xb6ac9e6c351bc2a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif