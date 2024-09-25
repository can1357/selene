#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.UsbdStatus", usbd_status, 0x0, 0x0, false, 0x19969f73b2a3a4d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_request_type_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Type", type, 0x0, 0x0, false, 0x712f4a85df238647)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceString.Buffer", buffer, 0x0, 0x0, false, 0xae51d95c6b3856bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceString.LangID", lang_id, 0x0, 0x0, false, 0x7e9ee5395ab5181e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceString.StringIndex", string_index, 0x0, 0x0, false, 0xed75898c857e41c2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceString.RequiredSize", required_size, 0x0, 0x0, false, 0x40f1c0df77f2e663)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_device_string_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceString", device_string, 0x0, 0x0, false, 0x79dc5471fd2f619b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceControlTransfer.Buffer", buffer, 0x0, 0x0, false, 0x9da964838c85e078)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_control_setup_packet_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceControlTransfer.SetupPacket", setup_packet, 0x0, 0x0, false, 0x6961b8b8935fb251)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceControlTransfer.Length", length, 0x0, 0x0, false, 0xeab586c951c6e8a8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_device_control_transfer_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceControlTransfer", device_control_transfer, 0x0, 0x0, false, 0x281f136f98d940ae)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceUrb.Buffer", buffer, 0x0, 0x0, false, 0x93149e3d081de252)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_device_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.DeviceUrb", device_urb, 0x0, 0x0, false, 0x885b5ea5976884f8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeWrite.Buffer", buffer, 0x0, 0x0, false, 0xbc59b2b3d65b5671)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeWrite.Length", length, 0x0, 0x0, false, 0x363bd602136358d1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeWrite.Offset", offset, 0x0, 0x0, false, 0x61ebc08dd731b51b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_pipe_write_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeWrite", pipe_write, 0x0, 0x0, false, 0x3472bd7957c4817c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeRead.Buffer", buffer, 0x0, 0x0, false, 0x77675ea5c73798fe)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeRead.Length", length, 0x0, 0x0, false, 0xede7e8a39f03b618)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeRead.Offset", offset, 0x0, 0x0, false, 0x38c4fd6a449f634c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_pipe_read_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeRead", pipe_read, 0x0, 0x0, false, 0xc6eb6833109f500a)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeUrb.Buffer", buffer, 0x0, 0x0, false, 0xbf7c97a4c720c639)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_pipe_urb_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters.PipeUrb", pipe_urb, 0x0, 0x0, false, 0x2da217317a7e9cc7)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_17.Parameters", parameters, 0x0, 0x0, false, 0xa116907b9bbd0a7b)
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