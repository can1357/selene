#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMRTEXT.ptlReference", ptl_reference, 0x0, 0x40, true, 0x6dfca59fa15afa65)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTEXT.nChars", n_chars, 0x40, 0x20, true, 0xe751f220defe3dec)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTEXT.offString", off_string, 0x60, 0x20, true, 0xb61b1b1d30f4b424)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTEXT.fOptions", f_options, 0x80, 0x20, true, 0x3c9526a4d3edb4d9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRTEXT.rcl", rcl, 0xa0, 0x80, true, 0x2fb02c2ca44f0c4b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTEXT.offDx", off_dx, 0x120, 0x20, true, 0x4b4191cf2e4e005b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif