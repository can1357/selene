#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_17.Size", size, 0x0, 0x0, false, 0xbf9129ef949a3bcc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_17.MinorFunction", minor_function, 0x0, 0x0, false, 0x13727c6a52d53bbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_17.Type", type, 0x0, 0x0, false, 0x9d8b2e534e469aac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0x88fefc8b25e3f2d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Create.Options", options, 0x0, 0x0, false, 0x83dc5bb1081f0677)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0x974605e9f1ff1c21)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0x340a92ad83d57253)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0xdd635ae35996bff8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Create", create, 0x0, 0x0, false, 0xced02dffa932487f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Read.Length", length, 0x0, 0x0, false, 0xce461d32e3707118)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Read.Key", key, 0x0, 0x0, false, 0x4dbb32ec84f0c7eb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0xa44ff4ba09abe8d9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Read", read, 0x0, 0x0, false, 0xf71b786c39a315b8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Write.Length", length, 0x0, 0x0, false, 0xfabfafbecc81ccf7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Write.Key", key, 0x0, 0x0, false, 0xdbd55ce0eed0f73f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0xbbd12b822d70e71b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Write", write, 0x0, 0x0, false, 0xc3857e99f4878097)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x46efe9e5bcad6614)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0x41c605af8dc45243)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x15d95912054bac02)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0xceb92fa2a519b337)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0x1608ab1dc74207b2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0xcd3b241c3ce42343)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0xe09d0fbfe8b90c2d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0x8852e520907f7f35)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0xe46de5318e35e02e)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters.Others", others, 0x0, 0x0, false, 0x3a2aa46fef0a5654)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_17.Parameters", parameters, 0x0, 0x0, false, 0x29cefd0ff4609697)
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