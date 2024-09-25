#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPALETTEENTRY.peRed", pe_red, 0x0, 0x8, true, 0x5ec69ec07025de8f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPALETTEENTRY.peGreen", pe_green, 0x8, 0x8, true, 0x25e0246c441f7d58)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPALETTEENTRY.peBlue", pe_blue, 0x10, 0x8, true, 0xa68d372ed9903977)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPALETTEENTRY.peFlags", pe_flags, 0x18, 0x8, true, 0xd00cb59c20073aed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif