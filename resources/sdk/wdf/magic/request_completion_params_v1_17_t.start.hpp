#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Size", size, 0x0, 0x0, false, 0x906c27720d0c24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Type", type, 0x0, 0x0, false, 0x2d2765416d1001ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.IoStatus", io_status, 0x0, 0x0, false, 0x8a80e7d241cf22dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x335adaf0bfd1f51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Write.Length", length, 0x0, 0x0, false, 0xcb61ffa1c3c40cf8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0xcc960f99361c8f22)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Write", write, 0x0, 0x0, false, 0xcd1186fcca87c855)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0x7f6243c86996c5a8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Read.Length", length, 0x0, 0x0, false, 0x6d57c48467cc6fcc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0x503715d52280c520)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Read", read, 0x0, 0x0, false, 0xabb14f7d4d480866)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0xf445269051f0ab7d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0xcc5681f6ffd63176)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0x91dab3782ff2262e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0xdcef474c9e0bfd11)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x91d32bfe1cd3ceeb)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0x70be1e8a875e3b1f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0xee7ee2871f29a9b9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0xd3f0e297f3d1716d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0xb97581671400c735)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0x6f10a1e5746f354f)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0x25b65f0b52dcf5f6)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0x3f540b21dfc17bd4)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0xc880082a1be9ae00)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0x7b26e6d99e9681fc)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0xf5b740c316f53119)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0x87064dac20eb6d71)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0xcd74214c3f8efcc)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0x1c964cbb9008176e)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0x57a1eb3b774c1e52)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0x41a263d7ea37d02e)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0xde3345f7900c2b7f)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Others", others, 0x0, 0x0, false, 0xa353cd7d48852b98)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_17_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0xa9836e9874c856fd)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.Usb", usb, 0x0, 0x0, false, 0xa605cf77fe531bf6)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_17.Parameters", parameters, 0x0, 0x0, false, 0xe45acf822c72c4e3)
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