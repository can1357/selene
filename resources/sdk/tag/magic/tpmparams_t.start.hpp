#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTPMPARAMS.cbSize", cb_size, 0x0, 0x20, true, 0xe2e8341180722878)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagTPMPARAMS.rcExclude", rc_exclude, 0x20, 0x80, true, 0x8167cdefea91cf2d)
#else
#define _m00
#define _m01
#endif