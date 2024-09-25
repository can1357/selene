#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DIRTYREGIONS.NumRects", num_rects, 0x0, 0x20, true, 0x4048b006aa5d7f62)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::rect_t, 16>), "_D3DKMT_DIRTYREGIONS.Rects", rects, 0x20, 0x0, true, 0x920a90802ddb5432)
#else
#define _m00
#define _m01
#endif