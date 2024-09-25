#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_0.Size", size, 0x0, 0x0, false, 0x4f022f3cddac7754)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_0.MinorFunction", minor_function, 0x0, 0x0, false, 0x66bae754a14f2770)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_0.Type", type, 0x0, 0x0, false, 0x6b46bb2b5d173592)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0xa42c17a5e87a4cba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Create.Options", options, 0x0, 0x0, false, 0x1adce6d85e4d4cec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0xac1316f66b1d519f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0x4a5cdc2013c77129)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0x4e8e346a5dc97928)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Create", create, 0x0, 0x0, false, 0xce8e5f5b58c8ca00)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Read.Length", length, 0x0, 0x0, false, 0x8e358e558dc6eacd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Read.Key", key, 0x0, 0x0, false, 0x1f404a52a0619f64)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0x67f200dd6667dd29)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Read", read, 0x0, 0x0, false, 0x3e106ae7703abbb3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Write.Length", length, 0x0, 0x0, false, 0xd0852c90a93d0004)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Write.Key", key, 0x0, 0x0, false, 0x5df56488f7299f7f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0x9ed5c745f2ca98f0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Write", write, 0x0, 0x0, false, 0xc6fbac708186b58d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x856f37e3e6162bef)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0xf5d6894fe95c45f6)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x8232f7ac7d300220)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0xfef93c24093771e9)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0x6f4ceaa6744409cf)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0x826db024dc802e40)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0xb3498b559b3305e3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0x731041800e7af2a1)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0x17b57c352b79d248)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters.Others", others, 0x0, 0x0, false, 0xc04b413390959cea)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_0.Parameters", parameters, 0x0, 0x0, false, 0x2374c96087d895a9)
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