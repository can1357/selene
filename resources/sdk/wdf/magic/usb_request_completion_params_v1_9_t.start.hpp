#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.UsbdStatus", usbd_status, 0x0, 0x0, false, 0xaf5165760fc8d1fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Type", type, 0x0, 0x0, false, 0xcdae15835fea26b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0x153a9a35a63a7bf2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0x6a5a689edf2fb98e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0xe8e2553e48592cc4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0x42aefca3ca15bfd3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0xf4bbc45a061e78bd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0xa0bb67a795aa87e9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0x4458da1b5263e9e1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0xac022adfb0689f1d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0x4c770f4d1fabc53f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0x2822bebce3f4ea1f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0x437178e8f9c5f2f0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0x3b9d6526248b8f66)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0x488abf4492caeb72)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0xba89668d61f0aa8f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0xb525d306153b084a)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0xf71adfd84099eb3)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0x8f3af8b3e4f0d39d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0x6dc2f6515becbb11)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0xfb867572f289f55a)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0x8f9804ebea8a92c3)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0x2b950f5ee55d4232)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_9.Parameters", parameters, 0x0, 0x0, false, 0xe5fbeb98f5004b9f)
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