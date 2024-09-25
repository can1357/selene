#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_GET_CONFIGURATION_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0x3a64580fe4e8f067)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_GET_CONFIGURATION_REQUEST.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0xf48e4a12663c60d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_GET_CONFIGURATION_REQUEST.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0x97bf2c52a613d518)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_CONTROL_GET_CONFIGURATION_REQUEST.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0x5510bbf39e237ddc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_CONTROL_GET_CONFIGURATION_REQUEST.UrbLink", urb_link, 0x1c0, 0x40, true, 0x26e5da1ff695a5b9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_GET_CONFIGURATION_REQUEST.hca", hca, 0x200, 0x0, true, 0x54b5fd96558a90ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif