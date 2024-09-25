#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 2>), "_D3DDDI_HDR_METADATA_HDR10.RedPrimary", red_primary, 0x0, 0x20, true, 0xe79328d810388119)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 2>), "_D3DDDI_HDR_METADATA_HDR10.GreenPrimary", green_primary, 0x20, 0x20, true, 0xd43b77fbd8c38993)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 2>), "_D3DDDI_HDR_METADATA_HDR10.BluePrimary", blue_primary, 0x40, 0x20, true, 0x24bb73bf4d24fbe4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 2>), "_D3DDDI_HDR_METADATA_HDR10.WhitePoint", white_point, 0x60, 0x20, true, 0x8cf97e0eb3db5382)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_HDR_METADATA_HDR10.MaxMasteringLuminance", max_mastering_luminance, 0x80, 0x20, true, 0x8d051a83ec925c50)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_HDR_METADATA_HDR10.MinMasteringLuminance", min_mastering_luminance, 0xa0, 0x20, true, 0x4beab5ca31ceaf4b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_D3DDDI_HDR_METADATA_HDR10.MaxContentLightLevel", max_content_light_level, 0xc0, 0x10, true, 0xfae20f418ce373fd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_D3DDDI_HDR_METADATA_HDR10.MaxFrameAverageLightLevel", max_frame_average_light_level, 0xd0, 0x10, true, 0xe09a654de2dc3d81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif