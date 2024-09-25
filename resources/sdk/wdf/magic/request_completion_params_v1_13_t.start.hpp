#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Size", size, 0x0, 0x0, false, 0xfce5baa506352276)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Type", type, 0x0, 0x0, false, 0xcfbc5000ded69815)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.IoStatus", io_status, 0x0, 0x0, false, 0x180b6695a28bfb2d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x8d6845279fdb97e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Write.Length", length, 0x0, 0x0, false, 0x3ec0a4ed5d5de409)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0xff48a2703986b79a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Write", write, 0x0, 0x0, false, 0xdabbc71c433cdb6a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0x4fee4aafd95ea0c8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Read.Length", length, 0x0, 0x0, false, 0x5cb689bb583ce775)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0xb77ae9e97b9d7cc3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Read", read, 0x0, 0x0, false, 0x1b54ced5de7e096d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x4910549de104f5a7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0xdd93940b8450aa37)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0x4cd2ecdff67c155c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0xa9485d8efe6321b1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x95774afa514e8d9c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0xc1de5e738b75c0d7)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0x63472c9327d7b963)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0x498b19789097ee4)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0x8173be566a20e1f5)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0xc9677bdf2960ee91)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0xc287471d03a1303)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0x6369cbe166063b29)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0xcec5d9f091a2a052)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0x3024053eaa165e61)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0xafe35886fca810b1)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0x6a68f06fc4707f2d)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0x845bc6d37e3d1f4b)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0x1fef013da7a4c8f3)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0xf4f434abeaef35a9)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0x92be2b3409780720)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0x5d09a93b1ddf525a)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Others", others, 0x0, 0x0, false, 0x5a99734edeb94e55)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_13_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0x1551aab1ce851747)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.Usb", usb, 0x0, 0x0, false, 0x6902fa68e6059f95)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_13.Parameters", parameters, 0x0, 0x0, false, 0xe6926da1b9ff34be)
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