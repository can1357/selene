#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.UsbdStatus", usbd_status, 0x0, 0x0, false, 0x2584cfd8f9ff87ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Type", type, 0x0, 0x0, false, 0xeaafa0e49f0a521d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0xe283846bf27f7383)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0x3526bee2b2aba62)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0xb21a7c928c5e42fd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0x5e5ec7d4a6891ffc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0xda0d64cddf35710e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0xb92ae16c2a5e5fcc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0x96171dadd50df794)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0xfdff509de00f7412)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0xe1a1a62b5f8a72a0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0xfb37881ba5c950f2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0x2872131bd68d6d23)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0x261a35438b43fcfe)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0xfacc0302964f7ab2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0xd5cafecd78ce6305)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0x8f5e71742eb41970)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0xb35fc9f3d0fb25d1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0x6ec6331e858058d6)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0x309fca0baaae1d53)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0x7aab706113f7b761)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0xead504f9fa1c88e4)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0xa08f31ce390c7104)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0.Parameters", parameters, 0x0, 0x0, false, 0x71e2ce5e2576bc3e)
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