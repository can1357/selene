#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.UsbdStatus", usbd_status, 0x0, 0x0, false, 0x90ef816fb157d2aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Type", type, 0x0, 0x0, false, 0x1e200ca2571f23c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0x2a21111c8dac41b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0x2ab34f20962a19c6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0x3770bb25efd80ae2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0x3277eddf183d36ab)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0xefae3b4d9b89382c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0x8736525cc63d5716)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0xff5c5fd29cd5265b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0x544b293f78e8fdc6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0xf12e62a4480a0dc2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0x4c2ff86d00a7b2af)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0x9490f5a75edc0b5d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0xa85e0ca65dc99a24)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0xd5991638beb9a3d8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0x1f82adeb02ba50bf)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0xd2b452e6b2fd1517)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0xbfb97923e4c1a5f1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0xe1e68fb86282f4d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0xfacdf278a1551e00)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0x6ba04f3cc76164ba)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0x29c88c5c07355967)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0xa9e95ccce54f3744)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_15.Parameters", parameters, 0x0, 0x0, false, 0xf2c97b4aaecb0e2c)
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