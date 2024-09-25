#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_FEATURE_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0xe3ec61627911ccd2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_CONTROL_FEATURE_REQUEST.UrbLink", urb_link, 0x1c0, 0x40, true, 0x47a02e01261033b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_FEATURE_REQUEST.hca", hca, 0x200, 0x0, true, 0x1c2749d8265097ba)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_CONTROL_FEATURE_REQUEST.FeatureSelector", feature_selector, 0x410, 0x10, true, 0xce00724e87be20a7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_CONTROL_FEATURE_REQUEST.Index", index, 0x420, 0x10, true, 0xfffc632cc6d9d50e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif