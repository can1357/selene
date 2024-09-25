#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_GET_STATUS_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0x5231e061dc54e0bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_GET_STATUS_REQUEST.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0x12e80780658c1b8a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_GET_STATUS_REQUEST.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0x90ab591d616a5d8c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_CONTROL_GET_STATUS_REQUEST.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0x1c17b84b50b66dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_CONTROL_GET_STATUS_REQUEST.UrbLink", urb_link, 0x1c0, 0x40, true, 0xbd99498ef3a39636)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_GET_STATUS_REQUEST.hca", hca, 0x200, 0x0, true, 0x687e9ae2107bcae6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_CONTROL_GET_STATUS_REQUEST.Index", index, 0x420, 0x10, true, 0x435bbb1ed184e4ee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif