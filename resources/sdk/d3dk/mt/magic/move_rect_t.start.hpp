#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_D3DKMT_MOVE_RECT.SourcePoint", source_point, 0x0, 0x40, true, 0xf3dcae889975e1d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MOVE_RECT.DestRect", dest_rect, 0x40, 0x80, true, 0x7de05dc47b5905d5)
#else
#define _m00
#define _m01
#endif