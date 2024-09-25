#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.UsbdStatus", usbd_status, 0x0, 0x0, false, 0xd453929b4ac0e7c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Type", type, 0x0, 0x0, false, 0x3ddf3c82ef00f6f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0x17c670f4b1a04e66)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0x65404719366d3927)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0x69b632af92b6edfa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0x58d779d653313e7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0x674cdb12a04ba601)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0x46223e9389217633)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0x888ef8dfdf173802)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0x97a970c9f7ab3143)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0x7cae7083c2b9f98c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0xaeab98788e72f44e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0xb6fa0c09a093c0a0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0xa71037ccc6b9ef6d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0xf10bca5ce1fc7925)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0xa0933ac3eeda6a01)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0x6f7416768006974d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0x6c80d3f874f26b63)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0xd0ffea6b25cdc0df)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0x4da9e04935f18d30)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0xabf629035b686b0e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0x4bf901e9495b0803)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0x73cb96d712d8908c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_5.Parameters", parameters, 0x0, 0x0, false, 0x7a9a4c440914a05e)
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