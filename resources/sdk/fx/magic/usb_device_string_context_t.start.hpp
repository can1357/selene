#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxUsbDeviceStringContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x75be5cfda27991b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxUsbDeviceStringContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0xabfdc6cbd35fbd08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDeviceStringContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0xd451d2c3a9cd0e72)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_request_completion_params_t), "FxUsbDeviceStringContext.m_UsbParameters", m_usb_parameters, 0x300, 0x0, true, 0x920ddee942d776e5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_handle_t*), "FxUsbDeviceStringContext.m_USBDHandle", m_usbd_handle, 0x400, 0x40, true, 0x6ee8b2ed1ed9cba7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_descriptor_request_t), "FxUsbDeviceStringContext.m_UrbLegacy", m_urb_legacy, 0x440, 0x40, true, 0x3eae11af64ee6ca6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_descriptor_request_t*), "FxUsbDeviceStringContext.m_Urb", m_urb, 0x880, 0x40, true, 0x483411d5f024713)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_string_descriptor_t*), "FxUsbDeviceStringContext.m_StringDescriptor", m_string_descriptor, 0x8c0, 0x40, true, 0x2d22c5540b96ec3b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxUsbDeviceStringContext.m_StringDescriptorLength", m_string_descriptor_length, 0x900, 0x20, true, 0x689886a16d551a79)
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
#endif