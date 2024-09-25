#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_BLOCK_LIMITS_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0x14d45f4d7ce5f9b3, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_BLOCK_LIMITS_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0x374021369f5eec6f, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_LIMITS_PAGE.PageCode", page_code, 0x8, 0x8, true, 0x2a2b4cbb7b51ae6c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_BLOCK_LIMITS_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x5e454d4fb66dd421)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_LIMITS_PAGE.MaximumCompareAndWriteLength", maximum_compare_and_write_length, 0x28, 0x8, true, 0x6c2872cc089762e8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_BLOCK_LIMITS_PAGE.OptimalTransferLengthGranularity", optimal_transfer_length_granularity, 0x30, 0x10, true, 0xaf869ebc55a76332)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_LIMITS_PAGE.MaximumTransferLength", maximum_transfer_length, 0x40, 0x20, true, 0xfce64af6c42c7491)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_LIMITS_PAGE.OptimalTransferLength", optimal_transfer_length, 0x60, 0x20, true, 0xf6f335ac20c61d96)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_LIMITS_PAGE.MaxPrefetchXDReadXDWriteTransferLength", max_prefetch_xd_read_xd_write_transfer_length, 0x80, 0x20, true, 0x653c8115bb061fe5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_LIMITS_PAGE.MaximumUnmapLBACount", maximum_unmap_lba_count, 0xa0, 0x20, true, 0x16ff359b7cf6a0d6)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_LIMITS_PAGE.MaximumUnmapBlockDescriptorCount", maximum_unmap_block_descriptor_count, 0xc0, 0x20, true, 0x37fa405657379fc6)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_LIMITS_PAGE.OptimalUnmapGranularity", optimal_unmap_granularity, 0xe0, 0x20, true, 0xf8dd91ab0c0df8b0)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_VPD_BLOCK_LIMITS_PAGE.UnmapGranularityAlignmentByte3", unmap_granularity_alignment_byte3, 0x100, 0x7, true, 0xc0b077aeb99f61b9, 7, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_BLOCK_LIMITS_PAGE.UGAValid", uga_valid, 0x107, 0x1, true, 0xcac82c79d6a6b3ad, 1, uint8_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_LIMITS_PAGE.UnmapGranularityAlignmentByte2", unmap_granularity_alignment_byte2, 0x108, 0x8, true, 0x4b124345448ad668)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_LIMITS_PAGE.UnmapGranularityAlignmentByte1", unmap_granularity_alignment_byte1, 0x110, 0x8, true, 0xacaeb6ce398a13b3)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_LIMITS_PAGE.UnmapGranularityAlignmentByte0", unmap_granularity_alignment_byte0, 0x118, 0x8, true, 0xf9bba5c5d834b9db)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_LIMITS_PAGE.UnmapGranularityAlignment", unmap_granularity_alignment, 0x100, 0x20, true, 0xbde5d03a0385958)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_VPD_BLOCK_LIMITS_PAGE.Descriptors", descriptors, 0x20, 0x0, true, 0xb80b247757ffa177)
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
#define _m17
#define _m18
#endif