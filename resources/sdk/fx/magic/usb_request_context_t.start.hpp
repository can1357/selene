#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxUsbRequestContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x54e954cf13746f8b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxUsbRequestContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0x4113ddec8f9eca2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbRequestContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0xe5a09c3b28cb5dc8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_request_completion_params_t), "FxUsbRequestContext.m_UsbParameters", m_usb_parameters, 0x300, 0x0, true, 0xddfceaa4ebaf6c68)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif