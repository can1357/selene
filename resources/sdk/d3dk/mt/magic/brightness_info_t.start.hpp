#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::brightness_info_type_t), "_D3DKMT_BRIGHTNESS_INFO.Type", type, 0x0, 0x20, true, 0xb4d3f0957b8011a5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_BRIGHTNESS_INFO.ChildUid", child_uid, 0x20, 0x20, true, 0x2f892f1712468848)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::brightness_possible_levels_t), "_D3DKMT_BRIGHTNESS_INFO.PossibleLevels", possible_levels, 0x40, 0x8, true, 0x5e40889130a5f343)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_BRIGHTNESS_INFO.Brightness", brightness, 0x40, 0x8, true, 0x859ed91891272e9c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::brightness_caps_t), "_D3DKMT_BRIGHTNESS_INFO.BrightnessCaps", brightness_caps, 0x40, 0x20, true, 0xe741a0ae36ebc6cc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::brightness_state_t), "_D3DKMT_BRIGHTNESS_INFO.BrightnessState", brightness_state, 0x40, 0x20, true, 0xc659c7b560c208c0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_optimization_level_t), "_D3DKMT_BRIGHTNESS_INFO.OptimizationLevel", optimization_level, 0x40, 0x20, true, 0x6402c02fbb0bc0a3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::backlight_info_t), "_D3DKMT_BRIGHTNESS_INFO.ReductionInfo", reduction_info, 0x40, 0x20, true, 0xb8bd5c748c1304ee)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_BRIGHTNESS_INFO.VerboseLogging", verbose_logging, 0x40, 0x8, true, 0x5d97a9dd2d659bf3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::brightness_get_nit_ranges_out_t), "_D3DKMT_BRIGHTNESS_INFO.NitRanges", nit_ranges, 0x40, 0x60, true, 0x507b844f5cfb3ef7)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::brightness_get_out_t), "_D3DKMT_BRIGHTNESS_INFO.GetBrightnessMillinits", get_brightness_millinits, 0x40, 0x40, true, 0xa8cd467a4527a7c7)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::brightness_set_in_t), "_D3DKMT_BRIGHTNESS_INFO.SetBrightnessMillinits", set_brightness_millinits, 0x40, 0x0, true, 0xe967886cedf5898e)
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
#endif