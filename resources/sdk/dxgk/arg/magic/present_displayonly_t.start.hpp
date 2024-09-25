#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT_DISPLAYONLY.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x6535527ecf2a909e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PRESENT_DISPLAYONLY.pSource", p_source, 0x40, 0x40, true, 0x16bb832e4c7b66c1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT_DISPLAYONLY.BytesPerPixel", bytes_per_pixel, 0x80, 0x20, true, 0x6960ffdbf69229a4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_PRESENT_DISPLAYONLY.Pitch", pitch, 0xa0, 0x20, true, 0x724f39e47237768f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_display_only_flags_t), "_DXGKARG_PRESENT_DISPLAYONLY.Flags", flags, 0xc0, 0x20, true, 0xe665d7221ea45bc1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT_DISPLAYONLY.NumMoves", num_moves, 0xe0, 0x20, true, 0xed1cdd61f84168c0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::move_rect_t*), "_DXGKARG_PRESENT_DISPLAYONLY.pMoves", p_moves, 0x100, 0x40, true, 0xa63bb375a973a9df)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT_DISPLAYONLY.NumDirtyRects", num_dirty_rects, 0x140, 0x20, true, 0x918e65dc99c02c68)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_DXGKARG_PRESENT_DISPLAYONLY.pDirtyRect", p_dirty_rect, 0x180, 0x40, true, 0x72c2a7e0f93e43f2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_present_displayonly_progress_t ), "_DXGKARG_PRESENT_DISPLAYONLY.pfnPresentDisplayOnlyProgress", pfn_present_display_only_progress, 0x1c0, 0x40, true, 0x5059b515bc24e53d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif