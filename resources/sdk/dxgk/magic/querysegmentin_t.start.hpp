#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_QUERYSEGMENTIN.AgpApertureBase", agp_aperture_base, 0x0, 0x40, true, 0xb0251d9b74ba4d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_QUERYSEGMENTIN.AgpApertureSize", agp_aperture_size, 0x40, 0x40, true, 0x543ee7002cc3feb0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentflags_t), "_DXGK_QUERYSEGMENTIN.AgpFlags", agp_flags, 0x80, 0x20, true, 0xa48ef4e8c9289383)
#else
#define _m00
#define _m01
#define _m02
#endif