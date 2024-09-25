#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_DESCRIPTOR_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0xe168668b66ab948f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_DESCRIPTOR_REQUEST.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0xf6c991345b70f457)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_DESCRIPTOR_REQUEST.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0x3d95ba5af34592b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_CONTROL_DESCRIPTOR_REQUEST.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0x3d0a8fa2351dd82b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_CONTROL_DESCRIPTOR_REQUEST.UrbLink", urb_link, 0x1c0, 0x40, true, 0x5e3bb9f5b9863ea3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_DESCRIPTOR_REQUEST.hca", hca, 0x200, 0x0, true, 0xf00662e7e05b6be6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_URB_CONTROL_DESCRIPTOR_REQUEST.Index", index, 0x410, 0x8, true, 0xb3db5a76642a8c3e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_URB_CONTROL_DESCRIPTOR_REQUEST.DescriptorType", descriptor_type, 0x418, 0x8, true, 0x1e148ee5251d2dee)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_CONTROL_DESCRIPTOR_REQUEST.LanguageId", language_id, 0x420, 0x10, true, 0x3250d22ae8a896e1)
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