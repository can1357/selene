#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREXTSELECTCLIPRGN.emr", emr, 0x0, 0x40, true, 0x18bef034d1fc0b02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTSELECTCLIPRGN.cbRgnData", cb_rgn_data, 0x40, 0x20, true, 0xc2aaa49479d52add)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTSELECTCLIPRGN.iMode", i_mode, 0x60, 0x20, true, 0x87c65e8fa9decabb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMREXTSELECTCLIPRGN.RgnData", rgn_data, 0x80, 0x8, true, 0xc105ae8879ee4dba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif