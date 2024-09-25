#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWIN16RECT.left", left, 0x0, 0x0, false, 0x7f85a92997635b1b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWIN16RECT.top", top, 0x0, 0x0, false, 0xf2fee62443e49807)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWIN16RECT.right", right, 0x0, 0x0, false, 0x99f73a8100edf412)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWIN16RECT.bottom", bottom, 0x0, 0x0, false, 0xbb5849b20a2fc354)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif