#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fscntl_screen_info_t), "_FSVIDEO_COPY_FRAME_BUFFER.SrcScreen", src_screen, 0x0, 0x60, true, 0x5cdb8d4f0c8d953c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fscntl_screen_info_t), "_FSVIDEO_COPY_FRAME_BUFFER.DestScreen", dest_screen, 0x60, 0x60, true, 0xaf8c542846595d04)
#else
#define _m00
#define _m01
#endif