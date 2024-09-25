#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWPLACEMENT.length", length, 0x0, 0x20, true, 0x9983e32a486b6a0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWPLACEMENT.flags", flags, 0x20, 0x20, true, 0x64aec2c1bad28604)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWPLACEMENT.showCmd", show_cmd, 0x40, 0x20, true, 0xd8c4d0562d1328ea)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagWINDOWPLACEMENT.ptMinPosition", pt_min_position, 0x60, 0x40, true, 0x82cbda3b42928b27)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagWINDOWPLACEMENT.ptMaxPosition", pt_max_position, 0xa0, 0x40, true, 0x3a804762d8436700)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagWINDOWPLACEMENT.rcNormalPosition", rc_normal_position, 0xe0, 0x80, true, 0xc5d387c730fd25fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif