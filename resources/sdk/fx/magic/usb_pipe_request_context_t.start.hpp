#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxUsbPipeRequestContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x8664f268885800e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxUsbPipeRequestContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0x6d78a02e8679e1e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipeRequestContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0xd1fbaae2d6328ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_request_completion_params_t), "FxUsbPipeRequestContext.m_UsbParameters", m_usb_parameters, 0x300, 0x0, true, 0xf7cccfcd44d465a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_handle_t*), "FxUsbPipeRequestContext.m_USBDHandle", m_usbd_handle, 0x400, 0x40, true, 0x5c3caef660821dd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_pipe_request_t), "FxUsbPipeRequestContext.m_UrbLegacy", m_urb_legacy, 0x440, 0x40, true, 0x6170d908f0d2f260)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_pipe_request_t*), "FxUsbPipeRequestContext.m_Urb", m_urb, 0x580, 0x40, true, 0xd791bec5eb15b1ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif