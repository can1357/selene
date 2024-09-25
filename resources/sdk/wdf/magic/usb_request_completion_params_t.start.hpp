#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.UsbdStatus", usbd_status, 0x0, 0x20, true, 0x68e65cfe310251c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Type", type, 0x20, 0x20, true, 0xaf2d662e7856ea4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceString.Buffer", buffer, 0x0, 0x40, true, 0x9cd6596fd47452bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceString.LangID", lang_id, 0x40, 0x10, true, 0x4aa01176c30fc5c6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceString.StringIndex", string_index, 0x50, 0x8, true, 0xac928ff0187229be)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceString.RequiredSize", required_size, 0x58, 0x8, true, 0xa2d65bc546850e21)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceString", device_string, 0x0, 0x80, true, 0x10d3b14a7675624f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x40, true, 0xf4da56b3d6dc4266)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x40, 0x40, true, 0x165221b8062b1717)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceControlTransfer.Length", length, 0x80, 0x20, true, 0x727278ae207c2623)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0xc0, true, 0x424748810860969a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x40, true, 0x4ea3ec330ce58008)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceUrb", device_urb, 0x0, 0x40, true, 0x36056b8506852179)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x40, true, 0x8be23daa3548a45b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeWrite.Length", length, 0x40, 0x40, true, 0xdd2313cc37b42681)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeWrite.Offset", offset, 0x80, 0x40, true, 0x19f61ea4047e4276)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeWrite", pipe_write, 0x0, 0xc0, true, 0x5db13543dd1d2633)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeRead.Buffer", buffer, 0x0, 0x40, true, 0x6c77e269511413e1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeRead.Length", length, 0x40, 0x40, true, 0x713d6016333711be)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeRead.Offset", offset, 0x80, 0x40, true, 0xf1bd071e805e271b)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeRead", pipe_read, 0x0, 0xc0, true, 0x79d96cbaaa87c482)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x40, true, 0x3130b5d1737611d8)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeUrb", pipe_urb, 0x0, 0x40, true, 0x2c19442b816474ac)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters", parameters, 0x40, 0xc0, true, 0x9dc8a629c7690550)
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