#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Size", size, 0x0, 0x0, false, 0x4080a4e276cde1d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Type", type, 0x0, 0x0, false, 0xb8741b56dbaea9ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.IoStatus", io_status, 0x0, 0x0, false, 0x4177cb8896a7280c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x284840f8e72ca7a3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Write.Length", length, 0x0, 0x0, false, 0x26edf55b996d4af9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0xc75f63fec78a27e3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Write", write, 0x0, 0x0, false, 0xf3454fffb71575c7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0x6c54b0e70559a5dd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Read.Length", length, 0x0, 0x0, false, 0xfe06e7079a5be52c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0xc89cdc19d557e608)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Read", read, 0x0, 0x0, false, 0x2a1f2323a97cc49e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x3a8863428a53da15)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0xc32a6e46699592ca)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0x5c17506adbd773da)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0x7bf8770ebeb79f9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x719822236e5ada4c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0xeb0c6eae2143181e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0x692462b70123d13a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0x24aa93fd122e8a8)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0xd24b2da4c8c2828a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0x51e5c0c1218d5456)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0xf96f41490d151e1c)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0x39481085c32ca56c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0x72c9f771dc5e3d5d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0x9e3673642ec5653b)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0x8984480ca2a9b5e3)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0xd7960ccfd4d1d0c7)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0xdfb37357e2745ec1)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0x2e017e8b8cc6ac5a)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0xe123acf6c6e40b21)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0x36877004d7d2ff33)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0xc90d06287023e252)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Others", others, 0x0, 0x0, false, 0x1576d658d3bd34)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_11_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0x525e130cfe563b9f)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.Usb", usb, 0x0, 0x0, false, 0x33a56758bf54119f)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_11.Parameters", parameters, 0x0, 0x0, false, 0x57239211b425f468)
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
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#endif