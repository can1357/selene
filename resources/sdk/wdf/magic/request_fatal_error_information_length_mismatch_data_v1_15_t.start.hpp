#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_15.Request", request, 0x0, 0x0, false, 0x76ba1d71260c82e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_15.Irp", irp, 0x0, 0x0, false, 0xd5d2049b33b74a0f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_15.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x7d1d0aafa1ff4f42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_15.Information", information, 0x0, 0x0, false, 0x528c65b388b5457b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_15.MajorFunction", major_function, 0x0, 0x0, false, 0x4acd23ae9b0592b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif