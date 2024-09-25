#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoSample2.Size", size, 0x0, 0x20, true, 0xf59667993e516bd4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_VideoSample2.rtStart", rt_start, 0x40, 0x40, true, 0x1d48dd9c2eb82fe1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_VideoSample2.rtEnd", rt_end, 0x80, 0x40, true, 0xb954f2185868923c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoSample2.SampleFormat", sample_format, 0xc0, 0x20, true, 0x70688a9624ab6c22)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoSample2.SampleFlags", sample_flags, 0xe0, 0x20, true, 0x67c8059b141000b8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXVA_VideoSample2.lpDDSSrcSurface", lp_dds_src_surface, 0x100, 0x40, true, 0x2e59af16c3b4cf1c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_VideoSample2.rcSrc", rc_src, 0x140, 0x80, true, 0x78e17c584065d50a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_VideoSample2.rcDst", rc_dst, 0x1c0, 0x80, true, 0x3aa6102d911a69ae)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::ayu_vsample2_t, 16>), "_DXVA_VideoSample2.Palette", palette, 0x240, 0x0, true, 0xdf8a9985dc53f383)
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
#endif