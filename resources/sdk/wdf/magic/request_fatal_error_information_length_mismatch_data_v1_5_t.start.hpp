#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_5.Request", request, 0x0, 0x0, false, 0x3adbdb6939e3e8c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_5.Irp", irp, 0x0, 0x0, false, 0x5fb43fd96e9f5793)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_5.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0xd45a6a12faf3b488)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_5.Information", information, 0x0, 0x0, false, 0x3d6b7bd94c089eb2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_5.MajorFunction", major_function, 0x0, 0x0, false, 0x965f63a5a9abd4c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif