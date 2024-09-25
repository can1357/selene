#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::char_image_info_t*), "_FSVIDEO_WRITE_TO_FRAME_BUFFER.SrcBuffer", src_buffer, 0x0, 0x40, true, 0xbf9521528197fe40)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fscntl_screen_info_t), "_FSVIDEO_WRITE_TO_FRAME_BUFFER.DestScreen", dest_screen, 0x40, 0x60, true, 0x705dd07cdcc8c9d2)
#else
#define _m00
#define _m01
#endif