#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS.Size", size, 0x0, 0x10, true, 0x88d4c013f846b800)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_REQUEST_PARAMETERS.MinorFunction", minor_function, 0x10, 0x8, true, 0x30c8a8402e8eb981)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_PARAMETERS.Type", type, 0x20, 0x20, true, 0x37688cb18bcc1f5c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_WDF_REQUEST_PARAMETERS.Parameters.Create.SecurityContext", security_context, 0x0, 0x40, true, 0xeaf4be64fd99a5af)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS.Parameters.Create.Options", options, 0x40, 0x20, true, 0x6bc5f39270674f4b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS.Parameters.Create.FileAttributes", file_attributes, 0x80, 0x10, true, 0xa2a4df2f03cb3c64)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_REQUEST_PARAMETERS.Parameters.Create.ShareAccess", share_access, 0x90, 0x10, true, 0x7cbae9ae09cc14a6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS.Parameters.Create.EaLength", ea_length, 0xc0, 0x20, true, 0xdf3576f37229fcd9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_create_t), "_WDF_REQUEST_PARAMETERS.Parameters.Create", create, 0x0, 0x0, true, 0x209c8509138bc2b3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS.Parameters.Read.Length", length, 0x0, 0x40, true, 0xd25ed49f2395136)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS.Parameters.Read.Key", key, 0x40, 0x20, true, 0x1ac1bf9ec159d91a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS.Parameters.Read.DeviceOffset", device_offset, 0x80, 0x40, true, 0xf90bfac24441ef68)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_read_t), "_WDF_REQUEST_PARAMETERS.Parameters.Read", read, 0x0, 0xc0, true, 0xbaf9c3e740eef7aa)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS.Parameters.Write.Length", length, 0x0, 0x40, true, 0xaa54ec7f936d0204)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS.Parameters.Write.Key", key, 0x40, 0x20, true, 0x2d156e4e41a0ca81)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_PARAMETERS.Parameters.Write.DeviceOffset", device_offset, 0x80, 0x40, true, 0xb28a472be3c6f527)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_write_t), "_WDF_REQUEST_PARAMETERS.Parameters.Write", write, 0x0, 0xc0, true, 0xd4883ad4e803f703)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x40, true, 0x4d663431e880b276)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_PARAMETERS.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x40, 0x40, true, 0x9e92b3fc907cb9a5)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x80, 0x20, true, 0x6fb7d1f977786f85)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0xc0, 0x40, true, 0x3231608e175d17b4)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_device_io_control_t), "_WDF_REQUEST_PARAMETERS.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, true, 0xdd7e44b521f58212)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS.Parameters.Others.Arg1", arg1, 0x0, 0x40, true, 0x7602e76700ef2f7)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS.Parameters.Others.Arg2", arg2, 0x40, 0x40, true, 0x49636deff1f3eefb)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_PARAMETERS.Parameters.Others.IoControlCode", io_control_code, 0x80, 0x20, true, 0x6b21abf78fb17abd)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_PARAMETERS.Parameters.Others.Arg4", arg4, 0xc0, 0x40, true, 0x6dce9b0a3aec629f)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u25_others_t), "_WDF_REQUEST_PARAMETERS.Parameters.Others", others, 0x0, 0x0, true, 0x76b3cd06e235d390)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_PARAMETERS.Parameters", parameters, 0x40, 0x0, true, 0xfe010a664fa733cc)
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