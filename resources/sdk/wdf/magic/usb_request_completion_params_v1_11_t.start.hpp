#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.UsbdStatus", usbd_status, 0x0, 0x0, false, 0xb29b294e35973bb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Type", type, 0x0, 0x0, false, 0xd654890d19266035)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0x58ef133bda508e70)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0x2242a1540f5dd61d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0xc22e05ff0071ec93)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0xb0324e8f5f204c36)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0x21d1419564ef1995)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0xf6e5a564b0c2756c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0x8a976f193ba1fdbe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0x149e9b4c46b406d9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0xb08ed0214be12591)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0x4c8cf36c851b33ac)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0x58826dcf7cd53d5d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0x3ab56f19a9851b7b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0x5f4b10515683d298)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0xafd6549ea1c9ef28)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0x4717e16f56eba399)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0x18c5d2d2b6311bbd)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0x9a2cf6f48ccf1958)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0x5f1b87416f0e8818)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0xb8b554f8f027c0)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0x994ef5c04d7f540a)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0x3f80226a93a0b3c9)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters", parameters, 0x0, 0x0, false, 0x312890288d0fd664)
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