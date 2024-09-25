#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_GET_CURRENT_FRAME_NUMBER.Hdr", hdr, 0x0, 0xc0, true, 0x1e8a1b6d900024cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_GET_CURRENT_FRAME_NUMBER.FrameNumber", frame_number, 0xc0, 0x20, true, 0x950d928e7ef3ea36)
#else
#define _m00
#define _m01
#endif