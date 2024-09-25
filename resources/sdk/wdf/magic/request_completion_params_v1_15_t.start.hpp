#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Size", size, 0x0, 0x0, false, 0xa852658a7d8c5e79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Type", type, 0x0, 0x0, false, 0x8a2b9f21435dd30b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.IoStatus", io_status, 0x0, 0x0, false, 0x8ec403e30ed47d5f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0xc9653a7f9512fb30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Write.Length", length, 0x0, 0x0, false, 0x7afec7ce7b220855)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0x20e16ed9a58901bf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Write", write, 0x0, 0x0, false, 0x482e7ee452560f47)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0xda04ba08e2a3bebe)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Read.Length", length, 0x0, 0x0, false, 0x661bf2bf61b8cf94)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0x80ef7be38ff7b26e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Read", read, 0x0, 0x0, false, 0x21b3e5a1b1921cf2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0xc5d243fb1d044f42)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0xe958a2d862edcc61)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0x52f19f5c745ea22d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0x63b7769ae63b9e5b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x504e006a24dd2e97)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0xa63d6e4dbe2473f9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0xb2c1621a10290ee5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0x6dff018127efcacd)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0xf7c28c5ab86d28c0)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0x2991c36dfe212a6c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0xf050efc0cea52d1b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0xfe072e21882e7d6f)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0xe4c4db61ad87ea1d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0x297977d849c517ea)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0x3cfbd59cc5177602)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0x390e86be10e30f8d)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0xaea873a17f429bc7)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0x3a531290d55c3c64)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0x7fe75f79cfc2d530)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0xc7dd4620b5e42c05)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0x1028661895e1de79)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Others", others, 0x0, 0x0, false, 0xb088a9f88cb8a962)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_15_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0x5e86b2febb3f57cf)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.Usb", usb, 0x0, 0x0, false, 0x34d0d094da054b8d)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_15.Parameters", parameters, 0x0, 0x0, false, 0x4a5e2d71f124a33b)
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