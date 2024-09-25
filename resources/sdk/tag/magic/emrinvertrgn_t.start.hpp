#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRINVERTRGN.emr", emr, 0x0, 0x40, true, 0xae82972671441108)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRINVERTRGN.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x922458a65e9c120c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRINVERTRGN.cbRgnData", cb_rgn_data, 0xc0, 0x20, true, 0xe4a5ca3add36ead6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRINVERTRGN.RgnData", rgn_data, 0xe0, 0x8, true, 0x296f550510b45006)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif