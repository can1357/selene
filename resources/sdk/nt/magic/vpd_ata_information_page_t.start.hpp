#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_ATA_INFORMATION_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0xedf1ef9a6b5116a7, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_ATA_INFORMATION_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0x76d5255dff086b52, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_ATA_INFORMATION_PAGE.PageCode", page_code, 0x8, 0x8, true, 0xc47d0dce938073db)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_ATA_INFORMATION_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x21f09530600f1070)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_VPD_ATA_INFORMATION_PAGE.VendorId", vendor_id, 0x40, 0x40, true, 0xe0170d1a79475959)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_VPD_ATA_INFORMATION_PAGE.ProductId", product_id, 0x80, 0x80, true, 0x486c955405f3edb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_ATA_INFORMATION_PAGE.ProductRevisionLevel", product_revision_level, 0x100, 0x20, true, 0x6af246bf80cbb694)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_VPD_ATA_INFORMATION_PAGE.DeviceSignature", device_signature, 0x120, 0xa0, true, 0xba3dfe56ecb4ca8d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_ATA_INFORMATION_PAGE.CommandCode", command_code, 0x1c0, 0x8, true, 0x40336a1a2eafca54)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 512>), "_VPD_ATA_INFORMATION_PAGE.IdentifyDeviceData", identify_device_data, 0x1e0, 0x0, true, 0x84cf69faf375f62f)
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
#endif