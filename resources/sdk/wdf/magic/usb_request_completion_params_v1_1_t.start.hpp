#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.UsbdStatus", usbd_status, 0x0, 0x0, false, 0xd4259d816ad98492)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Type", type, 0x0, 0x0, false, 0x6f9cc7bf282603ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0x1bae29a8346ad2df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0xf3659731426f5eab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0x8708709083d3f66b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0xbf54798408bd0851)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0x7a049e78ec7b229c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0x8138f643bc08ee37)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0xbe428fd05c3b1acb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0x1c9ef0bf7aba09ce)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0xd49c30256554746f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0x5ea7d4ac2e434aad)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0xfdaa8ceaa9361cd5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0x754c6b1a506ba5c4)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0xf961bd67569475c9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0x3b164d197cf2b84f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0x74165ebad0f9d8c8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0xe0d900cb9c15dc14)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0xb4cb34b007e53a8c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0xcdaca27ce96c8408)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0xd6e479bd356557c3)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0x5a19d486b3ab8c2e)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0x47a234f1a0f85009)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_1.Parameters", parameters, 0x0, 0x0, false, 0xd00f30527394e75a)
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