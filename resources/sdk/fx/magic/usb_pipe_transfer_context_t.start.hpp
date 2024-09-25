#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxUsbPipeTransferContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x27853b7712c5c99b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxUsbPipeTransferContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0x1df23ba05d6fe7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipeTransferContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0x74a4d82bd6025747)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_request_completion_params_t), "FxUsbPipeTransferContext.m_UsbParameters", m_usb_parameters, 0x300, 0x0, true, 0x4709769cf980d1ac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_handle_t*), "FxUsbPipeTransferContext.m_USBDHandle", m_usbd_handle, 0x400, 0x40, true, 0x3d1818f56d43d63d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_bulk_or_interrupt_transfer_t), "FxUsbPipeTransferContext.m_UrbLegacy", m_urb_legacy, 0x440, 0x0, true, 0xf65ac6096b9f3d77)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_bulk_or_interrupt_transfer_t*), "FxUsbPipeTransferContext.m_Urb", m_urb, 0x840, 0x40, true, 0x4b507b7f9dfff343)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxUsbPipeTransferContext.m_PartialMdl", m_partial_mdl, 0x880, 0x40, true, 0x139a238046f0abd3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipeTransferContext.m_UnlockPages", m_unlock_pages, 0x8c0, 0x8, true, 0xedc6b90aebc87015)
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