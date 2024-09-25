#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETPOSTCOMPOSITIONCAPS.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x57fea74a29a92fae)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGKARG_GETPOSTCOMPOSITIONCAPS.MaxStretchFactor", max_stretch_factor, 0x20, 0x20, true, 0x8bae29a4a0d6e9a6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGKARG_GETPOSTCOMPOSITIONCAPS.MaxShrinkFactor", max_shrink_factor, 0x40, 0x20, true, 0x392a5c291f319611)
#else
#define _m00
#define _m01
#define _m02
#endif