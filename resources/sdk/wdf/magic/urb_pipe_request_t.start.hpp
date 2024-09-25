#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_PIPE_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0xce0cc0b166559ebe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_PIPE_REQUEST.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0x71abeeb62e7d05b0)
#else
#define _m00
#define _m01
#endif