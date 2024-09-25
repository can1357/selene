#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_DIRTY_THRESHOLDS.Version", version, 0x0, 0x20, true, 0x1b512f0eed6f91a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_DIRTY_THRESHOLDS.Size", size, 0x20, 0x20, true, 0x8c7cc6b5b84dc678)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_DIRTY_THRESHOLDS.DirtyLowThreshold", dirty_low_threshold, 0x40, 0x20, true, 0xf081a6737a6bb14d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_DIRTY_THRESHOLDS.DirtyHighThreshold", dirty_high_threshold, 0x60, 0x20, true, 0x54ab0e172bc120d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif