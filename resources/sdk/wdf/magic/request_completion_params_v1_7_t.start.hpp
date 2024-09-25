#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Size", size, 0x0, 0x0, false, 0x3b35b67a325cc73f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Type", type, 0x0, 0x0, false, 0x331adaca97b8f8d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.IoStatus", io_status, 0x0, 0x0, false, 0x229b199efa477e42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x7d5a9059842e0eee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Write.Length", length, 0x0, 0x0, false, 0x74aef0aa7f414525)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0xc9cd73ad1fb6f0b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Write", write, 0x0, 0x0, false, 0x7f6d18440a28cf4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0x3171744c79f7c609)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Read.Length", length, 0x0, 0x0, false, 0x4dc90b4ed23b6b62)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0xad3341f118ddf065)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Read", read, 0x0, 0x0, false, 0x8d98349e591982c9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0xc95215a028571435)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0x8041603d753d953b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0xba1c22d815899ed4)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0xd274c5e1b0ee18b7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x85ae8853a3173547)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0xb56fcc6b6916de44)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0x382daaedf381bd42)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0x21d0382fc9716838)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0x3d7c781006543c00)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0xe0da5d53ca9f6c07)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0x4e238e4a701d2ac5)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0xe80bbf662936b16b)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0xa901b92d74bf88de)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0x86a01c8b6570f32b)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0x69d22bd2306e63d0)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0xd7e9915d41248d50)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0xb50f3921ef120088)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0xbadde5cb58c0928a)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0xb0ff6b647eb64925)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0xf785f912e6c5c711)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0x615b9f17200f5e6b)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Others", others, 0x0, 0x0, false, 0x6935464d7f58cb18)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_7_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0x8d10b5e5b9541abf)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.Usb", usb, 0x0, 0x0, false, 0xf501a3bb6810f0fd)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_7.Parameters", parameters, 0x0, 0x0, false, 0xa3091d28e2932fc1)
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