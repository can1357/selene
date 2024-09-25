#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.UsbdStatus", usbd_status, 0x0, 0x0, false, 0xb0a19cbf0b67f28f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Type", type, 0x0, 0x0, false, 0x7ec27022056cfccc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0x4113c726c02d6855)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0xaee93a790f9c008f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0xd8a51f23072b418f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0xda818ad6590159a5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0x2b42c0df4fe41a16)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0x706d02ec5ade1b1f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0x92807ba7aa39da41)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0xb827d147cdcd3a08)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0x6d32032bb2aa5702)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0x241831fac0f18f7a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0x3a23b8c1df2016ab)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0xd46f0480e99cce1e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0xbe382e1b6e0a6b82)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0x3dabdfd2b5a9c982)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0x94597edf40e6bcd8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0x735719ff6c11cde6)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0xaf2b598db313a29e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0xbd12eba4da9079d)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0x30c469c824ebf9da)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0x39b4f9aa80cc095b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0xb7841ea93064b9aa)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_7.Parameters", parameters, 0x0, 0x0, false, 0xa3d7095a1a2f8b1f)
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
#endif