#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_FSCNTL_SCREEN_INFO.Position", position, 0x0, 0x20, true, 0x5eed161db177cbea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_FSCNTL_SCREEN_INFO.ScreenSize", screen_size, 0x20, 0x20, true, 0x791677c726b9b94d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCNTL_SCREEN_INFO.nNumberOfChars", n_number_of_chars, 0x40, 0x20, true, 0x68d3c39fc10739ba)
#else
#define _m00
#define _m01
#define _m02
#endif