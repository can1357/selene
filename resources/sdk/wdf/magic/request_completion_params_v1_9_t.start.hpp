#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Size", size, 0x0, 0x0, false, 0x8b1dcfdd0d53ceb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Type", type, 0x0, 0x0, false, 0xebff94d9ac654807)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.IoStatus", io_status, 0x0, 0x0, false, 0x14eb99f3305566e2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x76ccc8d3d3bcd3db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Write.Length", length, 0x0, 0x0, false, 0xcf556f1b1f0c6897)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0xf25efa190fface5b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Write", write, 0x0, 0x0, false, 0xbf131b543e8bfa3f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0x93fc80e65a06305d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Read.Length", length, 0x0, 0x0, false, 0x4f0145c056d3b58e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0xb8d188607c39fe1a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Read", read, 0x0, 0x0, false, 0xe2afc2e6c79cb9cc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x3099ab12694b98ec)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0xfc59b21f4496b8a1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0xf0f050e7e353cdeb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0x42ee70ebe660ad1a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x88c6aeb615fccd90)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0xc760dd943b7cee08)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0xc3dcb783da250757)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0x8116ca92bc9fa507)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0xc4d7f24e38b82111)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0x61f43d08dd2e678b)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0x6a227ff275f170fd)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0x1c23e74fb60fa729)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0x65022a54cf9fc18b)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0xbac756dcc2299dc6)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0xfc7cf6b845c39674)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0x46a86e920b49d52b)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0x6ff5b9314b8aea6f)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0x59553d453f9a3f7c)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0xdb9f8ac780241f70)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0x88d0c8ffb2fb1e0b)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0xa15e3ba03e1fe2f3)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others", others, 0x0, 0x0, false, 0x8af01822253881e5)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_9_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0x5ccb3f8948190525)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Usb", usb, 0x0, 0x0, false, 0xcb4ff691aa6443d0)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters", parameters, 0x0, 0x0, false, 0x3d433ad328edd6d5)
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