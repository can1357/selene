#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_11.Size", size, 0x0, 0x0, false, 0x97c0f15533fd36a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_11.MinorFunction", minor_function, 0x0, 0x0, false, 0x905b4f663efc640a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_11.Type", type, 0x0, 0x0, false, 0x176d589cb0ed77db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0x705f09b4f90ea68c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Create.Options", options, 0x0, 0x0, false, 0x4f58d12e6ce0fd82)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0xf994a4cff63333dc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0xc99fd6c72587979e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0xb4111e2da9d7731e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Create", create, 0x0, 0x0, false, 0xc31f3058a9d2f305)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Read.Length", length, 0x0, 0x0, false, 0x67685770a9302bfe)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Read.Key", key, 0x0, 0x0, false, 0x210bcce86e1b7caa)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0xd50307ab06a43e04)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Read", read, 0x0, 0x0, false, 0x84be73ba55550b79)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Write.Length", length, 0x0, 0x0, false, 0xe1789904d015824a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Write.Key", key, 0x0, 0x0, false, 0x30575f396969e7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0x7bfbc5735b3f404a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Write", write, 0x0, 0x0, false, 0xec1503aad56e83c4)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x459f81bae5da29aa)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0xecf0de1e0e5d3acb)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x865cb03961a6840a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0x428c8cb07123ccd4)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0xdacd5cd7f8d7f7a4)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0x3f2565430851a795)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0x68204e19ba7139f5)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0x28180501ee78ebdd)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0x61d98bbf85724e91)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters.Others", others, 0x0, 0x0, false, 0xc795ea2b820cd0b3)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_11.Parameters", parameters, 0x0, 0x0, false, 0x56b04b6550cd245d)
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