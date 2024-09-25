#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_0.Request", request, 0x0, 0x0, false, 0x5d3d2a16cda1b7ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_0.Irp", irp, 0x0, 0x0, false, 0x9c1506455461ee95)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_0.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x35985b73cd170489)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_0.Information", information, 0x0, 0x0, false, 0xdc18237138b188c3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_0.MajorFunction", major_function, 0x0, 0x0, false, 0xb675dffe92f88fdb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif