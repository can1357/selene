#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_13.Request", request, 0x0, 0x0, false, 0x7bd9d6cc3c69d6dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_13.Irp", irp, 0x0, 0x0, false, 0x50fed4b7204f8f52)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_13.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x627e50a0e4a60a7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_13.Information", information, 0x0, 0x0, false, 0xa2e14fd4e5866e9c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_13.MajorFunction", major_function, 0x0, 0x0, false, 0x9084ef83437ffe83)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif