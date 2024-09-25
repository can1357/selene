#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SES_ENCLOSURE_DESCRIPTOR.NumberOfEnclosureServices", number_of_enclosure_services, 0x0, 0x3, true, 0x9a3e1fa41f1aa762, 3, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SES_ENCLOSURE_DESCRIPTOR.RelativeEnclosureServicesId", relative_enclosure_services_id, 0x4, 0x3, true, 0x3d2c541eea022992, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_ENCLOSURE_DESCRIPTOR.SubEnclosureId", sub_enclosure_id, 0x8, 0x8, true, 0x30076369c1e5bd91)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_ENCLOSURE_DESCRIPTOR.NumberOfTypeDescriptorHeaders", number_of_type_descriptor_headers, 0x10, 0x8, true, 0x68bd818dc4b4fb3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_ENCLOSURE_DESCRIPTOR.EnclosureDescriptorLength", enclosure_descriptor_length, 0x18, 0x8, true, 0xbd157190bf73b46)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SES_ENCLOSURE_DESCRIPTOR.Identifier", identifier, 0x20, 0x40, true, 0x5d9eca5a685fde85)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SES_ENCLOSURE_DESCRIPTOR.VendorId", vendor_id, 0x60, 0x40, true, 0x54f4be37eecdcf31)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SES_ENCLOSURE_DESCRIPTOR.ProductId", product_id, 0xa0, 0x80, true, 0x6a1b74db2710e65f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_ENCLOSURE_DESCRIPTOR.ProductRevisionLevel", product_revision_level, 0x120, 0x20, true, 0x501e9fb4526cbf14)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SES_ENCLOSURE_DESCRIPTOR.VendorSpecific", vendor_specific, 0x140, 0x8, true, 0x8f055e51d9ef6dd6)
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