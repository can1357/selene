#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_1.Size", size, 0x0, 0x0, false, 0x875ed22ffff67889)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_1.MinorFunction", minor_function, 0x0, 0x0, false, 0x9c09ba24b5f353f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_1.Type", type, 0x0, 0x0, false, 0x9f61a34364ff2dfc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0xbfce7e7cd88be135)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Create.Options", options, 0x0, 0x0, false, 0xefd3f3f76645ee47)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0xa0ffa2d0e28aa762)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0xdf6a5d0cd57cb7d0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0x9e724e2f7e7a5141)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Create", create, 0x0, 0x0, false, 0x745e5fd18e7248ab)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Read.Length", length, 0x0, 0x0, false, 0x12d23de76569100e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Read.Key", key, 0x0, 0x0, false, 0x571ed55124870c43)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0x273b518abfc1348b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Read", read, 0x0, 0x0, false, 0x130959d34e7a377f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Write.Length", length, 0x0, 0x0, false, 0xdc99fc9d246e830c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Write.Key", key, 0x0, 0x0, false, 0x222ecf32afa7f17b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0xbc4a44782a06f9ed)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Write", write, 0x0, 0x0, false, 0x7572c701735c995f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x49ae6689119629b5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0xf940fe4ba2a008ce)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x37a74a542eda42e6)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0x7deb1b24f11a905e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0x5c71aa0498c2257f)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0x1f0e03000f6d3ea4)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0x7f9f3efc1eb21064)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0x1e832d263cd2f6a6)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0x5912ca6a2ed9e54)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters.Others", others, 0x0, 0x0, false, 0xe58f6c7c8f24b903)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_1.Parameters", parameters, 0x0, 0x0, false, 0x5045ac7d81f997a3)
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