#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxUsbDeviceControlContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x558d4ba023407db5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxUsbDeviceControlContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0x8863216d94d71c39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDeviceControlContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0xf9f655503a36b10c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_request_completion_params_t), "FxUsbDeviceControlContext.m_UsbParameters", m_usb_parameters, 0x300, 0x0, true, 0xf9e6a32f3da421d2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_handle_t*), "FxUsbDeviceControlContext.m_USBDHandle", m_usbd_handle, 0x400, 0x40, true, 0x7e8911f5c3d78f10)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_transfer_t), "FxUsbDeviceControlContext.m_UrbLegacy", m_urb_legacy, 0x440, 0x40, true, 0x245af1a200aa53ab)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_transfer_t*), "FxUsbDeviceControlContext.m_Urb", m_urb, 0x880, 0x40, true, 0xb85f8064adb0dbb9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxUsbDeviceControlContext.m_PartialMdl", m_partial_mdl, 0x8c0, 0x40, true, 0x927ecb1f75e88b1f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDeviceControlContext.m_UnlockPages", m_unlock_pages, 0x900, 0x8, true, 0x4dee4d30adb86f67)
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