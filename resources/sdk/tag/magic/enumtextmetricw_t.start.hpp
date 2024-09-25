#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::newtextmetricexw_t), "tagENUMTEXTMETRICW.etmNewTextMetricEx", etm_new_text_metric_ex, 0x0, 0x20, true, 0x5aac3cc20d6785c2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::axeslistw_t), "tagENUMTEXTMETRICW.etmAxesList", etm_axes_list, 0x320, 0x40, true, 0x1af71335a5401547)
#else
#define _m00
#define _m01
#endif