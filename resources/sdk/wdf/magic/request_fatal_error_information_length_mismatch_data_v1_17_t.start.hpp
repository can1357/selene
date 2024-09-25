#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_17.Request", request, 0x0, 0x0, false, 0x774be74f5da38d64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_17.Irp", irp, 0x0, 0x0, false, 0xfcdfaf2759329508)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_17.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x10477889a9e65e9f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_17.Information", information, 0x0, 0x0, false, 0xb0840e92bbeebc1b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_17.MajorFunction", major_function, 0x0, 0x0, false, 0xc64dc213456ded55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif