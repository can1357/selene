#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_RGNS.DirtyRectCount", dirty_rect_count, 0x0, 0x20, true, 0xaf673532ce533538)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct tag::rect_t*), "_D3DKMT_PRESENT_RGNS.pDirtyRects", p_dirty_rects, 0x40, 0x40, true, 0x237c65e57d1d4fcd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_RGNS.MoveRectCount", move_rect_count, 0x80, 0x20, true, 0xbd225c66511a4a5f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct d3dk::mt::move_rect_t*), "_D3DKMT_PRESENT_RGNS.pMoveRects", p_move_rects, 0xc0, 0x40, true, 0x63d39447282d47d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif