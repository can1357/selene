#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_SET_FRAME_LENGTH.Hdr", hdr, 0x0, 0xc0, true, 0x3098aaac77d587cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_URB_SET_FRAME_LENGTH.FrameLengthDelta", frame_length_delta, 0xc0, 0x20, true, 0x547aa8a819e608d8)
#else
#define _m00
#define _m01
#endif