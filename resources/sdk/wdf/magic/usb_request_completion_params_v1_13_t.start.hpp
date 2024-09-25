#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.UsbdStatus", usbd_status, 0x0, 0x0, false, 0x4a6c69280f3dedbb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Type", type, 0x0, 0x0, false, 0x590c20a7f6a9ad28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0xfa2d3bc8f6f15c91)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0x244115c655f82ece)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0x3d81f64d26a5ad91)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0x25aef654cc833a40)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0xa16db7a2eda3bcf3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0x7ba5f95afa814c56)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0xc85833b3a5c870b1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0x7ba8e4afa2a27807)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0xb3096cd00276eb44)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0x76cee1d33dc18166)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0x32f60c33bdecdf18)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0xec1c82b2dfa1e509)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0x4d1ad8285a904e9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0x35218b6f131b132e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0x742797d8421a2b4a)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0x31fde0a1f9a79ae7)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0x4b31e69484a75bf2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0x5841f5ec2eaf1d76)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0x8e7c01292e51029f)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0x636e10b7e12e8c2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0x839348bf7b4d90d5)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_13.Parameters", parameters, 0x0, 0x0, false, 0x5a86a23b1b9fb802)
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