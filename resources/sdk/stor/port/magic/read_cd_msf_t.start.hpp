#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.OperationCode", operation_code, 0x0, 0x8, true, 0xb0c0c3e464eacd3a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD_MSF.RelativeAddress", relative_address, 0x8, 0x1, true, 0x880e8cd4bf2dba1f, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_CD_MSF.ExpectedSectorType", expected_sector_type, 0xa, 0x3, true, 0x323c4c4c50718e0d, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_CD_MSF.Lun", lun, 0xd, 0x3, true, 0x1d741424541cf569, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.StartingM", starting_m, 0x18, 0x8, true, 0xa01f2e02366d7327)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.StartingS", starting_s, 0x20, 0x8, true, 0x73a3264809561d13)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.StartingF", starting_f, 0x28, 0x8, true, 0x56b4fe378f99c0cd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.EndingM", ending_m, 0x30, 0x8, true, 0xff9efeb0d0b09e5f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.EndingS", ending_s, 0x38, 0x8, true, 0xd4c92074ade0ec8b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.EndingF", ending_f, 0x40, 0x8, true, 0x819c9bba629dbda8)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_CD_MSF.ErrorFlags", error_flags, 0x49, 0x2, true, 0xd8b018aaf98f031c, 2, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD_MSF.IncludeEDC", include_edc, 0x4b, 0x1, true, 0x46f025f36b4a46a, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD_MSF.IncludeUserData", include_user_data, 0x4c, 0x1, true, 0x50e2bb41d9f93277, 1, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_CD_MSF.HeaderCode", header_code, 0x4d, 0x2, true, 0x9cfbe7c345e43446, 2, uint8_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD_MSF.IncludeSyncData", include_sync_data, 0x4f, 0x1, true, 0x6bfa359b34761e5f, 1, uint8_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_CD_MSF.SubChannelSelection", sub_channel_selection, 0x50, 0x3, true, 0xce70fadbad0a8c, 3, uint8_t)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD_MSF.Control", control, 0x58, 0x8, true, 0xf5e58b95e7800b3e)
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
#define _m14
#define _m15
#define _m16
#endif