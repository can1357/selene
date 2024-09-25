#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::pointerflags_t), "_DXGKARG_SETPOINTERSHAPE.Flags", flags, 0x0, 0x20, true, 0x37351fe2dbe326e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPOINTERSHAPE.Width", width, 0x20, 0x20, true, 0xc1cb05fb02b37277)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPOINTERSHAPE.Height", height, 0x40, 0x20, true, 0x35cd7c209950484c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPOINTERSHAPE.Pitch", pitch, 0x60, 0x20, true, 0xb6210a0ed713fe60)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPOINTERSHAPE.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0xe7963da75e0485a3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_DXGKARG_SETPOINTERSHAPE.pPixels", p_pixels, 0xc0, 0x40, true, 0xcf8575e5f634817c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPOINTERSHAPE.XHot", x_hot, 0x100, 0x20, true, 0x7ea509f10762825e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPOINTERSHAPE.YHot", y_hot, 0x120, 0x20, true, 0x5e60d26347efc5b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif