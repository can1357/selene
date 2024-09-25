#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRFRAMERGN.emr", emr, 0x0, 0x40, true, 0xef115e463f8f67d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRFRAMERGN.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x5154a515f2d18db4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFRAMERGN.cbRgnData", cb_rgn_data, 0xc0, 0x20, true, 0x553c7a542702fc49)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFRAMERGN.ihBrush", ih_brush, 0xe0, 0x20, true, 0x52de601fb73a1342)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::size_t), "tagEMRFRAMERGN.szlStroke", szl_stroke, 0x100, 0x40, true, 0x3998ed0b65572b9c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRFRAMERGN.RgnData", rgn_data, 0x140, 0x8, true, 0xef13afa7e84723df)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif