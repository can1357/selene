#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD.OperationCode", operation_code, 0x0, 0x8, true, 0x46eac8a6dddc8fa)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD.RelativeAddress", relative_address, 0x8, 0x1, true, 0x65495678c1d10f60, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_CD.ExpectedSectorType", expected_sector_type, 0xa, 0x3, true, 0xea25502fe315249b, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_CD.Lun", lun, 0xd, 0x3, true, 0x17e0c3c13d907cb8, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_CD.StartingLBA", starting_lba, 0x10, 0x20, true, 0xf3becf3b65bcae87)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_READ_CD.TransferBlocks", transfer_blocks, 0x30, 0x18, true, 0x2d1bc436b99b2168)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_CD.ErrorFlags", error_flags, 0x49, 0x2, true, 0x84af761826953b39, 2, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD.IncludeEDC", include_edc, 0x4b, 0x1, true, 0x9381aa60e8ccf15e, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD.IncludeUserData", include_user_data, 0x4c, 0x1, true, 0x878e0db04a313f6b, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_CD.HeaderCode", header_code, 0x4d, 0x2, true, 0xf809cca4ce37e1d7, 2, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CD.IncludeSyncData", include_sync_data, 0x4f, 0x1, true, 0xa767c2192365616f, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_CD.SubChannelSelection", sub_channel_selection, 0x50, 0x3, true, 0xc5227febbc6494c8, 3, uint8_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CD.Control", control, 0x58, 0x8, true, 0x73e2ddfaf46de47b)
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
#endif