#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_7.Size", size, 0x0, 0x0, false, 0x9d48a6de1b6e3095)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_7.MinorFunction", minor_function, 0x0, 0x0, false, 0x76ff842d7b72a1ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_7.Type", type, 0x0, 0x0, false, 0x4d06c20ae6a03813)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0xc021c358fbbb8af2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Create.Options", options, 0x0, 0x0, false, 0x838d29cc9222d5d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0x1ab2b7f500465861)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0x9b8c657f36d60c97)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0xe6d0b3c0d2b1cb84)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Create", create, 0x0, 0x0, false, 0xead7826b57d9ccee)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Read.Length", length, 0x0, 0x0, false, 0x9a25801e2b9bd24)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Read.Key", key, 0x0, 0x0, false, 0xf2d8862338d7afc1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0xa53e2f24b938dbe)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Read", read, 0x0, 0x0, false, 0xd453cf7b2697d13b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Write.Length", length, 0x0, 0x0, false, 0x6bb325d16bb7f743)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Write.Key", key, 0x0, 0x0, false, 0x8a63a6474f4555ce)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0xa4c51bdfe46038a3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Write", write, 0x0, 0x0, false, 0x6f3cf7c82dc36b91)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0xf92d2a7c8b5938d3)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0x1caff9f1d3d515de)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x14644e21b9fcdfda)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0x607927517d72b88)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0x1cb85e6c2bce50cb)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0xc082683ce1236ee1)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0x8e380bfea3f94cc7)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0xe350c0d4db04e60f)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0xfefa581a6e205361)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters.Others", others, 0x0, 0x0, false, 0xf15b93f00172ef0c)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_7.Parameters", parameters, 0x0, 0x0, false, 0xd95beb21eb001f39)
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