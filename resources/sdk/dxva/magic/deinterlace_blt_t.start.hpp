#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBlt.Size", size, 0x0, 0x20, true, 0xb20e81c15fab3a7b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_DeinterlaceBlt.rtTarget", rt_target, 0x40, 0x40, true, 0xb9a4dabd9746901e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_DeinterlaceBlt.DstRect", dst_rect, 0x80, 0x80, true, 0xe7aca2912f84a515)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_DeinterlaceBlt.SrcRect", src_rect, 0x100, 0x80, true, 0x2442827990b0e60e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBlt.NumSourceSurfaces", num_source_surfaces, 0x180, 0x20, true, 0x686a997202caa9c5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_DeinterlaceBlt.Alpha", alpha, 0x1a0, 0x20, true, 0xb1c32764f5f9f0c2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::video_sample_t, 32>), "_DXVA_DeinterlaceBlt.Source", source, 0x1c0, 0x0, true, 0x6dd95fe10c1d5106)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif