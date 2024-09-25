#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_COLORFILL.DstRect", dst_rect, 0x0, 0x80, true, 0x75ac6dee4eda8ec5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_COLORFILL.DstAllocationIndex", dst_allocation_index, 0x80, 0x20, true, 0x35506c604cb95a57)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_COLORFILL.NumSubRects", num_sub_rects, 0xa0, 0x20, true, 0xe4d13e4874d2dae4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_DXGK_GDIARG_COLORFILL.pSubRects", p_sub_rects, 0xc0, 0x40, true, 0xb9e87036177ce6ac)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_COLORFILL.Color", color, 0x100, 0x20, true, 0xb7fcf1055795620a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_GDIARG_COLORFILL.Rop", rop, 0x120, 0x10, true, 0x5c3255d21f486a3f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_GDIARG_COLORFILL.Rop3", rop3, 0x130, 0x10, true, 0xc0118833fd14c326)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif