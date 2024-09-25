#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMECHARPOSITION.dwSize", dw_size, 0x0, 0x20, true, 0x84641143dbe903cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMECHARPOSITION.dwCharPos", dw_char_pos, 0x20, 0x20, true, 0xfe31ebf2deab6337)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagIMECHARPOSITION.pt", pt, 0x40, 0x40, true, 0x8319cd5a94d268d5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMECHARPOSITION.cLineHeight", c_line_height, 0x80, 0x20, true, 0x4be4d4ccc562a986)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagIMECHARPOSITION.rcDocument", rc_document, 0xa0, 0x80, true, 0xcd5abdc1ad48b95e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif