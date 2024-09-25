#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTARGETADJUSTEDCOLORIMETRY2.TargetId", target_id, 0x0, 0x20, true, 0x96e842aa1b27cc12)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::colorimetry_t), "_DXGKARG_SETTARGETADJUSTEDCOLORIMETRY2.AdjustedColorimetry", adjusted_colorimetry, 0x20, 0xa0, true, 0xefe7ffe34834184b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTARGETADJUSTEDCOLORIMETRY2.SdrWhiteLevel", sdr_white_level, 0x1c0, 0x20, true, 0xd32350ad628df210)
#else
#define _m00
#define _m01
#define _m02
#endif