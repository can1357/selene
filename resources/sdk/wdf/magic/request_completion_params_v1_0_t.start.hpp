#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Size", size, 0x0, 0x0, false, 0x3d7059d7d7441ea6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Type", type, 0x0, 0x0, false, 0x62b747eda5ca13bf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.IoStatus", io_status, 0x0, 0x0, false, 0xefaf7122752b75ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x7eaadd5458ed3a5d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Write.Length", length, 0x0, 0x0, false, 0x8843e5d463a4f632)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0x45d090c16203e634)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Write", write, 0x0, 0x0, false, 0x53b83369ed7d2439)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0x2aa1bb306b6923e9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Read.Length", length, 0x0, 0x0, false, 0xd4ccf8227b294643)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0x5fd2d07987ab5673)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Read", read, 0x0, 0x0, false, 0x11d211990785cba4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x3b4c38d54d55127a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0xbd44f512f9ab4d94)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0x2f4aed894838f291)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0x24c546b1fe27e58f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x3b33977076e7ef2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0x71df2975cb924a83)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0x274a900029482821)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0x88db478258d008b0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0x64d2b1d88e9032d8)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0xcebeccfb3f211f38)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0x51a652c90fb5f464)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0xf2f21e8503187651)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0x937ba2f2a41503c)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0x34718b1265c0ab69)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0x4bd02445a6983eef)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0xf870166b960ad6b1)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0xe72379d89c5ed92a)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0x51b86ee272f492ba)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0xf33abaeb0a6386e3)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0x3a789245c02e3b55)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0xb1731b7d4c803610)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Others", others, 0x0, 0x0, false, 0x659c3177e5610e76)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_0_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0xee6be5ea124c8307)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.Usb", usb, 0x0, 0x0, false, 0x2078175cce2f21e2)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_0.Parameters", parameters, 0x0, 0x0, false, 0x1c0027cc5ba4f163)
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