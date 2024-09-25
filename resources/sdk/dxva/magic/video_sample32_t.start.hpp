#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_VideoSample32.rtStart", rt_start, 0x0, 0x40, true, 0x4e6e096bbe6b7432)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_VideoSample32.rtEnd", rt_end, 0x40, 0x40, true, 0x82d027e80b9bdc32)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoSample32.SampleFormat", sample_format, 0x80, 0x20, true, 0x47eff5b4655d2626)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoSample32.SampleFlags", sample_flags, 0xa0, 0x20, true, 0x4e0cd6c3b87484c4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoSample32.lpDDSSrcSurface", lp_dds_src_surface, 0xc0, 0x20, true, 0xed26fb1743c7b0c5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_VideoSample32.rcSrc", rc_src, 0xe0, 0x80, true, 0xac87adda3c65250f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_VideoSample32.rcDst", rc_dst, 0x160, 0x80, true, 0x2b5d90d580fbc420)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::ayu_vsample2_t, 16>), "_DXVA_VideoSample32.Palette", palette, 0x1e0, 0x0, true, 0x456e892ca70f4773)
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