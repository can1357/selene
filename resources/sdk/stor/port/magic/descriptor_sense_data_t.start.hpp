#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DESCRIPTOR_SENSE_DATA.ErrorCode", error_code, 0x0, 0x7, true, 0x739aff956789bca5, 7, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DESCRIPTOR_SENSE_DATA.SenseKey", sense_key, 0x8, 0x4, true, 0x3ceb56a721c40a87, 4, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DESCRIPTOR_SENSE_DATA.AdditionalSenseCode", additional_sense_code, 0x10, 0x8, true, 0xc12124cdc0eac93c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DESCRIPTOR_SENSE_DATA.AdditionalSenseCodeQualifier", additional_sense_code_qualifier, 0x18, 0x8, true, 0xe3081d4410463d22)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DESCRIPTOR_SENSE_DATA.AdditionalSenseLength", additional_sense_length, 0x38, 0x8, true, 0x4c981e40ddd9c284)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DESCRIPTOR_SENSE_DATA.DescriptorBuffer", descriptor_buffer, 0x40, 0x8, true, 0xe08dbfa397b0bff7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif