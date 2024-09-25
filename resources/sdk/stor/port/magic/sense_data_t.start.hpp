#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_SENSE_DATA.ErrorCode", error_code, 0x0, 0x7, true, 0xd16e51107170cf23, 7, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SENSE_DATA.Valid", valid, 0x7, 0x1, true, 0x70cccb82ece39d0d, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SENSE_DATA.SegmentNumber", segment_number, 0x8, 0x8, true, 0x602f82a15c3ff8e6)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SENSE_DATA.SenseKey", sense_key, 0x10, 0x4, true, 0xe623c99c710fc441, 4, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SENSE_DATA.IncorrectLength", incorrect_length, 0x15, 0x1, true, 0x6a00bf8248a1c1e6, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SENSE_DATA.EndOfMedia", end_of_media, 0x16, 0x1, true, 0x5610428d3c05df5, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SENSE_DATA.FileMark", file_mark, 0x17, 0x1, true, 0x73a4b95c0b951db5, 1, uint8_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SENSE_DATA.Information", information, 0x18, 0x20, true, 0x14bf0166aff63416)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SENSE_DATA.AdditionalSenseLength", additional_sense_length, 0x38, 0x8, true, 0x5419c8d89e698250)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SENSE_DATA.CommandSpecificInformation", command_specific_information, 0x40, 0x20, true, 0xd12a5de5149cb44e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SENSE_DATA.AdditionalSenseCode", additional_sense_code, 0x60, 0x8, true, 0x5d7225b8e3fbee46)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SENSE_DATA.AdditionalSenseCodeQualifier", additional_sense_code_qualifier, 0x68, 0x8, true, 0xce98cc7dbc515b00)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SENSE_DATA.FieldReplaceableUnitCode", field_replaceable_unit_code, 0x70, 0x8, true, 0xfef3e54af153be16)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_SENSE_DATA.SenseKeySpecific", sense_key_specific, 0x78, 0x18, true, 0xaf19b2a94acca3f)
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
#define _m11
#define _m12
#define _m13
#endif