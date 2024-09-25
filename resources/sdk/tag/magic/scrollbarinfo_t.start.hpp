#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSCROLLBARINFO.cbSize", cb_size, 0x0, 0x20, true, 0xaf2d9f86e743b3b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagSCROLLBARINFO.rcScrollBar", rc_scroll_bar, 0x20, 0x80, true, 0xbbab19ed6295460f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSCROLLBARINFO.dxyLineButton", dxy_line_button, 0xa0, 0x20, true, 0x5830789f3f9e8518)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSCROLLBARINFO.xyThumbTop", xy_thumb_top, 0xc0, 0x20, true, 0x470c6b53353415aa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSCROLLBARINFO.xyThumbBottom", xy_thumb_bottom, 0xe0, 0x20, true, 0xaeb9f1e220ca9918)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "tagSCROLLBARINFO.rgstate", rgstate, 0x120, 0xc0, true, 0x948f957b6c606d55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif