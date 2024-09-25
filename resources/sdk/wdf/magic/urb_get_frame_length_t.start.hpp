#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_GET_FRAME_LENGTH.Hdr", hdr, 0x0, 0xc0, true, 0x232585238c04d44c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_GET_FRAME_LENGTH.FrameLength", frame_length, 0xc0, 0x20, true, 0x5799e1765582f5e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_GET_FRAME_LENGTH.FrameNumber", frame_number, 0xe0, 0x20, true, 0x3f3f3de59af859fd)
#else
#define _m00
#define _m01
#define _m02
#endif