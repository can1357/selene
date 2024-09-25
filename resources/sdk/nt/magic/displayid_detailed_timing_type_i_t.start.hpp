#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.PixelClock", pixel_clock, 0x0, 0x18, true, 0x61daa710032154e, 24, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.AspectRatio", aspect_ratio, 0x18, 0x3, true, 0x2076049058c7c9b, 3, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.ScanningType", scanning_type, 0x1c, 0x1, true, 0xb221a681098e51ac, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.StereoMode", stereo_mode, 0x1d, 0x2, true, 0x72df7d0fe1da1c9d, 2, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.PreferredTiming", preferred_timing, 0x1f, 0x1, true, 0x12d0c359f49cd43c, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.HorizontalActivePixels", horizontal_active_pixels, 0x20, 0x10, true, 0x7a9b212b4c333aab)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.HorizontalBlankPixels", horizontal_blank_pixels, 0x30, 0x10, true, 0x6c1d1d96e1530715)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.HorizontalFrontPorch", horizontal_front_porch, 0x40, 0xf, true, 0x34ecdb7b8e40caf3, 15, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.HorizontalSyncPolarity", horizontal_sync_polarity, 0x4f, 0x1, true, 0x4afa7ea3d4e33c1f, 1, uint16_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.HorizontalSyncWidth", horizontal_sync_width, 0x50, 0x10, true, 0x1aa56e92190d6225)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.VerticalActiveLines", vertical_active_lines, 0x60, 0x10, true, 0x5da8d72c1a5f576)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.VerticalBlankLines", vertical_blank_lines, 0x70, 0x10, true, 0x3bfb6c48019dfba6)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.VerticalFrontPorch", vertical_front_porch, 0x80, 0xf, true, 0xab6893f106b3d3, 15, uint16_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.VerticalSyncPolarity", vertical_sync_polarity, 0x8f, 0x1, true, 0x6229d1e956416373, 1, uint16_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISPLAYID_DETAILED_TIMING_TYPE_I.VerticalSyncWidth", vertical_sync_width, 0x90, 0x10, true, 0x4034c98508adeaff)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif