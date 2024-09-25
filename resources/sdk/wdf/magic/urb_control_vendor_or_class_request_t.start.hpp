#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0x3846c703ddd17718)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.TransferFlags", transfer_flags, 0x100, 0x20, true, 0x5cedab5ed82213ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0x55a62fbfe30854c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0x960caf70fd29d1e4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0xa3a452098ada2bfe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.UrbLink", urb_link, 0x1c0, 0x40, true, 0x4608e5a46aacf7de)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.hca", hca, 0x200, 0x0, true, 0xc2484bbc7d840584)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.RequestTypeReservedBits", request_type_reserved_bits, 0x400, 0x8, true, 0xca3ed4395f2071b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.Request", request, 0x408, 0x8, true, 0x580188b8b12e84a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.Value", value, 0x410, 0x10, true, 0x71b10d296d4c45b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.Index", index, 0x420, 0x10, true, 0xd8ab829e03ada0de)
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
#define _m09
#define _m10
#endif