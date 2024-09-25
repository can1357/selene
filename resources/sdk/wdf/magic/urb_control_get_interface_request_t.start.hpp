#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_GET_INTERFACE_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0xa051ae9a7fb9d4d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_GET_INTERFACE_REQUEST.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0x8236f37447c7f962)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_GET_INTERFACE_REQUEST.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0xa0109bb87702fcac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_CONTROL_GET_INTERFACE_REQUEST.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0x7fae011a884926a1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_CONTROL_GET_INTERFACE_REQUEST.UrbLink", urb_link, 0x1c0, 0x40, true, 0x464a1c8d55199be)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_GET_INTERFACE_REQUEST.hca", hca, 0x200, 0x0, true, 0xc4c9d0335040931b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_CONTROL_GET_INTERFACE_REQUEST.Interface", interface, 0x420, 0x10, true, 0x10b9930d13183ac0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif