#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_5.Size", size, 0x0, 0x0, false, 0xc02db1a3fbe8a23f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_5.MinorFunction", minor_function, 0x0, 0x0, false, 0xa433466706e3de53)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_5.Type", type, 0x0, 0x0, false, 0xe1cedec687d76a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0x733c81b00be4ee4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Create.Options", options, 0x0, 0x0, false, 0x8d23aec3093e8f61)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0x7bd2a053451dfa02)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0xb060d35fba626020)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0xfb5f8341746217fb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Create", create, 0x0, 0x0, false, 0x17363bbdf63df49f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Read.Length", length, 0x0, 0x0, false, 0x7234dee79f9fc7e0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Read.Key", key, 0x0, 0x0, false, 0xc8cf5b785411c56e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0xed42a3655b3d9f51)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Read", read, 0x0, 0x0, false, 0xaec98a9ae19f8418)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Write.Length", length, 0x0, 0x0, false, 0xf89cd094cbcbcea1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Write.Key", key, 0x0, 0x0, false, 0x40a790e2880db743)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0x8c2921074d179293)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Write", write, 0x0, 0x0, false, 0x6b17d01f668ed566)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x76942c49897a1022)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0x5b3298ee3cfa5fce)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x255877a72110cfcf)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0x408066d471ca87a5)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0x6dad873bfd2180b6)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0x2779bc1891eee8b2)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0x4e3b1d1c9bec6f9e)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0x7320f937fde82c5e)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0xf4bf02695ce90a61)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters.Others", others, 0x0, 0x0, false, 0x46a48d88603399c)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_5.Parameters", parameters, 0x0, 0x0, false, 0xd144bff936d31e94)
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