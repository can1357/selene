#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA.Request", request, 0x0, 0x40, true, 0xcbbca8fb10c1ac36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA.Irp", irp, 0x40, 0x40, true, 0x7154cfd08e563ed9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA.OutputBufferLength", output_buffer_length, 0x80, 0x20, true, 0xe40ca7ab8a8fc4ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA.Information", information, 0xc0, 0x40, true, 0xa34d62506578d66c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA.MajorFunction", major_function, 0x100, 0x8, true, 0x5f249ef30961ec00)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif