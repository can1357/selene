#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS.Size", size, 0x0, 0x20, true, 0x12cfdfb17633ef3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS.Type", type, 0x20, 0x20, true, 0xc36ceb6afc7de33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS.IoStatus", io_status, 0x40, 0x80, true, 0x2a1be3193b4e47d4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Write.Buffer", buffer, 0x0, 0x40, true, 0xce7b96f84612ad79)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Write.Length", length, 0x40, 0x40, true, 0xe5bad9d17ec48ca7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Write.Offset", offset, 0x80, 0x40, true, 0xa9a3a640c2bff88d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_write_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Write", write, 0x0, 0xc0, true, 0x311084e888d7f29f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Read.Buffer", buffer, 0x0, 0x40, true, 0x92ac6bc8b8951ba)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Read.Length", length, 0x40, 0x40, true, 0x64db7ae6f9e67a96)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Read.Offset", offset, 0x80, 0x40, true, 0x916158d921d0de51)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_read_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Read", read, 0x0, 0xc0, true, 0xd8d0ef1a3807a056)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x20, true, 0xeb1700d37e79b116)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x40, true, 0x454cbe1058ad4eee)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Input.Offset", offset, 0x40, 0x40, true, 0x8cf1470075d91585)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_input_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Input", input, 0x40, 0x80, true, 0xff2d54d6f0542322)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x40, true, 0x9a073c6798263f45)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Output.Offset", offset, 0x40, 0x40, true, 0x2bb057ed8ac9ce19)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Output.Length", length, 0x80, 0x40, true, 0xa1a6cda482ea23bf)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u25_output_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Output", output, 0xc0, 0xc0, true, 0x74482b60703af546)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl", ioctl, 0x0, 0x80, true, 0xa3e8c0774c266b7c)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x40, true, 0xb97a4c406d8079fc)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument1.Value", value, 0x0, 0x40, true, 0x8df19548b38837ed)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u35_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument1", argument1, 0x0, 0x40, true, 0xa90aacead17e477)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x40, true, 0xdf051633a274a64a)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument2.Value", value, 0x0, 0x40, true, 0x55410c6fa19be066)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u40_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument2", argument2, 0x40, 0x40, true, 0xb4f235a39dec6458)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x40, true, 0x98423c1bd1c26816)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument3.Value", value, 0x0, 0x40, true, 0x2320dddf33acfe78)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u45_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument3", argument3, 0x80, 0x40, true, 0xc8d96251f6f2c315)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x40, true, 0x5d00a952da1ce43a)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument4.Value", value, 0x0, 0x40, true, 0x1f673d5d8c5e8675)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u50_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument4", argument4, 0xc0, 0x40, true, 0xbcf041c48f6637b2)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u30_others_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others", others, 0x0, 0x0, true, 0xfb14edcafedd855c)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::usb_request_completion_params_t*), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Usb.Completion", completion, 0x0, 0x40, true, 0xc6f36840c896a7bd)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u55_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Usb", usb, 0x0, 0x40, true, 0x66291a272f2d49c2)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS.Parameters", parameters, 0xc0, 0x80, true, 0x8cbfa30225f7c0f8)
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