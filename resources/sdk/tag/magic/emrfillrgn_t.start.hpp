#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRFILLRGN.emr", emr, 0x0, 0x40, true, 0xfc4d460fb6dcb945)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRFILLRGN.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xa5b084166407eaf5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFILLRGN.cbRgnData", cb_rgn_data, 0xc0, 0x20, true, 0x9c7c7afc5e34cc8a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFILLRGN.ihBrush", ih_brush, 0xe0, 0x20, true, 0x4c25778b31205d5e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRFILLRGN.RgnData", rgn_data, 0x100, 0x8, true, 0x6a344cbdb9dec11f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif