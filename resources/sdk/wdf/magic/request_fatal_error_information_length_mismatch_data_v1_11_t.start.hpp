#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_11.Request", request, 0x0, 0x0, false, 0x79c9f854305d777)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_11.Irp", irp, 0x0, 0x0, false, 0xb82c449ca3fd1ba5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_11.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x6a86a09fc878923)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_11.Information", information, 0x0, 0x0, false, 0x49da346298054435)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_11.MajorFunction", major_function, 0x0, 0x0, false, 0x11a90897df2151d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif