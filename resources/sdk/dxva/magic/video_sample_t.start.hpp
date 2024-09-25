#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_VideoSample.rtStart", rt_start, 0x0, 0x40, true, 0x8fc4df05d6ca6a27)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_VideoSample.rtEnd", rt_end, 0x40, 0x40, true, 0xa6bfc9b221cd42ea)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxva::sample_format_t), "_DXVA_VideoSample.SampleFormat", sample_format, 0x80, 0x20, true, 0xb34e8911cb608c77)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXVA_VideoSample.lpDDSSrcSurface", lp_dds_src_surface, 0xc0, 0x40, true, 0xc1ad90e96f49b97b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif