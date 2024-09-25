#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CLASS_VPD_B0_DATA.CommandStatus", command_status, 0x0, 0x20, true, 0x6ea26602cec539b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B0_DATA.MaxUnmapLbaCount", max_unmap_lba_count, 0x20, 0x20, true, 0x156e4e269091ad52)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B0_DATA.MaxUnmapBlockDescrCount", max_unmap_block_descr_count, 0x40, 0x20, true, 0xaa1b220a441b9f64)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B0_DATA.OptimalUnmapGranularity", optimal_unmap_granularity, 0x60, 0x20, true, 0xcf3d8ef825de6651)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B0_DATA.UnmapGranularityAlignment", unmap_granularity_alignment, 0x80, 0x20, true, 0x4e4f727edcd7da84)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_VPD_B0_DATA.UGAVALID", ugavalid, 0xa0, 0x8, true, 0xef3ffbd4f7408605)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLASS_VPD_B0_DATA.OptimalTransferLengthGranularity", optimal_transfer_length_granularity, 0xb0, 0x10, true, 0xce7412af662dcde3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B0_DATA.MaximumTransferLength", maximum_transfer_length, 0xc0, 0x20, true, 0x451ba3facab34c86)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B0_DATA.OptimalTransferLength", optimal_transfer_length, 0xe0, 0x20, true, 0xa34d9e2c4b09e4e5)
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
#endif