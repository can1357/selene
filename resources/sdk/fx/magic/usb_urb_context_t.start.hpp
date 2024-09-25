#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxUsbUrbContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x69c36d9510f61344)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxUsbUrbContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0xc43bae6e92f91a4f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbUrbContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0xae7d1fc957e7d1ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_request_completion_params_t), "FxUsbUrbContext.m_UsbParameters", m_usb_parameters, 0x300, 0x0, true, 0x40c9c80f18430598)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "FxUsbUrbContext.m_pUrb", m_p_urb, 0x400, 0x40, true, 0x69255b409ce1384e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif