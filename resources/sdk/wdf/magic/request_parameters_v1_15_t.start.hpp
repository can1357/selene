#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_15.Size", size, 0x0, 0x0, false, 0xff6e17bae2fcd3ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS_V1_15.MinorFunction", minor_function, 0x0, 0x0, false, 0x1fc56fecaccc6e8f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS_V1_15.Type", type, 0x0, 0x0, false, 0xf82c45047414003b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Create.SecurityContext", security_context, 0x0, 0x0, false, 0x30d02c8c0b42ed7b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Create.Options", options, 0x0, 0x0, false, 0xfd9856def7c0b62d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Create.FileAttributes", file_attributes, 0x0, 0x0, false, 0xc678c53de3a84c21)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Create.ShareAccess", share_access, 0x0, 0x0, false, 0xd3074438b5edb09f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Create.EaLength", ea_length, 0x0, 0x0, false, 0x80a5020300f6ecd7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_create_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Create", create, 0x0, 0x0, false, 0xfedf6cc01924c0f3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Read.Length", length, 0x0, 0x0, false, 0xdf0724390cf20778)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Read.Key", key, 0x0, 0x0, false, 0x42b528d210782a88)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Read.DeviceOffset", device_offset, 0x0, 0x0, false, 0x5a906ef58ae2a76f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Read", read, 0x0, 0x0, false, 0xc78f44caf30ab931)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Write.Length", length, 0x0, 0x0, false, 0xda6879f3ca21f19a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Write.Key", key, 0x0, 0x0, false, 0x687aee26e60c267c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Write.DeviceOffset", device_offset, 0x0, 0x0, false, 0x42c4b48ad3edda2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Write", write, 0x0, 0x0, false, 0x901700aedcc73566)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x0, false, 0x71f30c0216617d4c)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x0, 0x0, false, 0x9460db5df23bdcd3)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x0, 0x0, false, 0xcf1477fc69169945)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0x0, 0x0, false, 0x465f1a2fd7d2414d)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_io_control_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, false, 0xebd9bdb8c0f69302)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Others.Arg1", arg1, 0x0, 0x0, false, 0x9d1b8dce8a48b893)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Others.Arg2", arg2, 0x0, 0x0, false, 0x3af958ef8ab66e70)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Others.IoControlCode", io_control_code, 0x0, 0x0, false, 0x8c70b7dc8824ebd5)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Others.Arg4", arg4, 0x0, 0x0, false, 0xdd4615f58a3ff763)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_others_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters.Others", others, 0x0, 0x0, false, 0x12b10fea90c03127)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS_V1_15.Parameters", parameters, 0x0, 0x0, false, 0xfee7be0a2bce3c6b)
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