#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_9.Size", size, 0x0, 0x0, false, 0x18120583d0e3248e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_9.MinorFunction", minor_function, 0x0, 0x0, false, 0xcf597e9ab4eb9db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_9.Type", type, 0x0, 0x0, false, 0xfadfc2a2ea47424d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0xb0e5059756ba94e7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Create.Options", options, 0x0, 0x0, false, 0xdb9a459db5a15132)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0x1fd198913a2ef40c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0x595239fa8230b30)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0x92d494ce2964165b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Create", create, 0x0, 0x0, false, 0x1534a3e6381bdac2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Read.Length", length, 0x0, 0x0, false, 0xf2bbc803e3de582e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Read.Key", key, 0x0, 0x0, false, 0x832d55e03d7cdb50)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0xd142ffbdc5636c2d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Read", read, 0x0, 0x0, false, 0x4229cf19f32e85e6)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Write.Length", length, 0x0, 0x0, false, 0xb645cebaa0a84ce5)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Write.Key", key, 0x0, 0x0, false, 0x48d1fa9a8c73ced0)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0xaa71f5f3c92b9b35)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Write", write, 0x0, 0x0, false, 0xf4e5ab65d1d7f714)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0xe414b5b8e22760b3)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0x8fd6b8b0de2a84f0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x48935cbebeb60d1e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0x53f5f421b8af11ac)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0x955672a07eadc090)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0x20a42b068b0c6b9d)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0x580ba894d2e8a690)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0xbfa2ef27bf50df20)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0x6ec7e15957e3fb14)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Others", others, 0x0, 0x0, false, 0x92f4c627d88ebe5f)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_9.Parameters", parameters, 0x0, 0x0, false, 0x5f4441e533e6a7f8)
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