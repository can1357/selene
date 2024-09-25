#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_view_object_t*), "_PARAM_STRUCT.This", _this, 0x0, 0x40, true, 0xfa545c1c70db5d85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PARAM_STRUCT.dwDrawAspect", dw_draw_aspect, 0x40, 0x20, true, 0x20d3a43419e2db5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PARAM_STRUCT.lindex", lindex, 0x80, 0x20, true, 0xdf3568cd1336ffd3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PARAM_STRUCT.pvAspect", pv_aspect, 0xc0, 0x40, true, 0x51570bfeaa9d65a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dvtargetdevice_t*), "_PARAM_STRUCT.ptd", ptd, 0x100, 0x40, true, 0xba3b0f22c60a5502)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_PARAM_STRUCT.hdcTargetDev", hdc_target_dev, 0x140, 0x40, true, 0xb13fa9233e3d284f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_PARAM_STRUCT.hdcDraw", hdc_draw, 0x180, 0x40, true, 0xdef2667c80c394a2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::rectl_t*), "_PARAM_STRUCT.lprcBounds", lprc_bounds, 0x1c0, 0x40, true, 0x722c13cdaf5221e0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::rectl_t*), "_PARAM_STRUCT.lprcWBounds", lprc_w_bounds, 0x200, 0x40, true, 0xb5e2d7d6ee59139c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_continue_t*), "_PARAM_STRUCT.pContinue", p_continue, 0x240, 0x40, true, 0x57f2f4299da799b2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_PARAM_STRUCT._RetVal", ret_val, 0x280, 0x20, true, 0x6d1c1c0e11726692)
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
#endif