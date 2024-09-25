#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_1.Request", request, 0x0, 0x0, false, 0xea2dbf658e4116e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_1.Irp", irp, 0x0, 0x0, false, 0x8b6a8f63e09ed7db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_1.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x403297f7b73c4226)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_1.Information", information, 0x0, 0x0, false, 0x4cd363148a0281e5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_1.MajorFunction", major_function, 0x0, 0x0, false, 0xad3643708fd87655)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif