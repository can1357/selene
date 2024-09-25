#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_13.Size", size, 0x0, 0x0, false, 0x7a89b7ff13f6604)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_13.MinorFunction", minor_function, 0x0, 0x0, false, 0x46fb6ae10c361bf5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_13.Type", type, 0x0, 0x0, false, 0x73bccf4f7cb07b09)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0x41bf993dca837f5a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Create.Options", options, 0x0, 0x0, false, 0x1784ec29e77b40b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0x9a66df43bce7bc2a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0xdea33d5944f308f5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0x15b25685e75e7e27)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Create", create, 0x0, 0x0, false, 0x9a6a440a280b3195)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Read.Length", length, 0x0, 0x0, false, 0x2372ed0a22724948)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Read.Key", key, 0x0, 0x0, false, 0x65e33b28909c2ce0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0x4a3d096822003507)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Read", read, 0x0, 0x0, false, 0xfa53685d85062fe3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Write.Length", length, 0x0, 0x0, false, 0x38c2bd7657df24e8)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Write.Key", key, 0x0, 0x0, false, 0x7876f1a03b35af22)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0xe0e014c1d360a6f8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Write", write, 0x0, 0x0, false, 0xe80b73f1ab5c1a5b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0xe329de5aff3bb704)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0x5f68b8972d9a82c2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x2587c5c74aa5b231)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0xa0b8f4b945889406)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0xb62d06f1a200ae02)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0x486c8328f883a02c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0x8471d30d61dca00b)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0xfaac96ee3a8efc56)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0x4a01cb44e2dd3a1)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters.Others", others, 0x0, 0x0, false, 0x181070d124743e96)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_13.Parameters", parameters, 0x0, 0x0, false, 0xa39d864903bed03e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#endif