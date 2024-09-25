#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Size", size, 0x0, 0x0, false, 0xb887cb172f91090c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Type", type, 0x0, 0x0, false, 0xfa01a5f769e1e57e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.IoStatus", io_status, 0x0, 0x0, false, 0x4dc8de0e44b84b5d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x2c457ee459000dd8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Write.Length", length, 0x0, 0x0, false, 0x72353cfe91edc832)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0x74983af8dcf553de)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Write", write, 0x0, 0x0, false, 0x9a1844f8a3880ebb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0xe1f922e05eaa564d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Read.Length", length, 0x0, 0x0, false, 0x31c50c19e688734f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0xf0ec702571009de8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Read", read, 0x0, 0x0, false, 0x9cc32f3647c5d939)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x395d904d11d37aa0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0xc8d067150151d64f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0x754f9c5ff899f04c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0x67e1ff3c4152579f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x954023a39c0b3736)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0xd294adce4db62e59)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0x6606f6c6b6ac203a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0xc7858ac58569f868)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0x34ed106887001cbf)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0x418f2d71633e865f)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0x92476603031af13)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0x6f05cee3764ffdc1)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0xacf81fd14eb9812f)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0xe451ba6a0f8aa059)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0xb1c0a890ed8f7c8e)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0x2ecfa69daedd1832)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0x5ddc1524bd07fb98)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0x8c101d9bd312b97)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0xc8ec7142c15aae23)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0x30ca7a3f0f006c1e)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0xd68b7bcf216782d7)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Others", others, 0x0, 0x0, false, 0x4521b009ebf9641c)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_5_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0xceee46432a5363e1)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.Usb", usb, 0x0, 0x0, false, 0xdf2ec4f2ff228f0e)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_5.Parameters", parameters, 0x0, 0x0, false, 0xb959492cdd6720d1)
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