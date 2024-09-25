#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGPEN.lopnStyle", lopn_style, 0x0, 0x20, true, 0xa7f56423756edc3a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagLOGPEN.lopnWidth", lopn_width, 0x20, 0x40, true, 0xe29eec9eb22bd70c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGPEN.lopnColor", lopn_color, 0x60, 0x20, true, 0xaf1f9f24bf240708)
#else
#define _m00
#define _m01
#define _m02
#endif