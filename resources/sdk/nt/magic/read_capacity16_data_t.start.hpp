#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_READ_CAPACITY16_DATA.LogicalBlockAddress", logical_block_address, 0x0, 0x40, true, 0x8a34e04d6e6764cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_CAPACITY16_DATA.BytesPerBlock", bytes_per_block, 0x40, 0x20, true, 0x4bf1a0d6d4bae016)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CAPACITY16_DATA.ProtectionEnable", protection_enable, 0x60, 0x1, true, 0xe1ae652c528878f8, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_CAPACITY16_DATA.ProtectionType", protection_type, 0x61, 0x3, true, 0x135d059eb4f28e65, 3, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_CAPACITY16_DATA.RcBasis", rc_basis, 0x64, 0x2, true, 0xb852ae171d7af82f, 2, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_READ_CAPACITY16_DATA.LogicalPerPhysicalExponent", logical_per_physical_exponent, 0x68, 0x4, true, 0xf0daae298b36cb48, 4, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_READ_CAPACITY16_DATA.ProtectionInfoExponent", protection_info_exponent, 0x6c, 0x4, true, 0x953d5a56fc5185d0, 4, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_READ_CAPACITY16_DATA.LowestAlignedBlock_MSB", lowest_aligned_block_msb, 0x70, 0x6, true, 0x79bde5b406460afa, 6, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CAPACITY16_DATA.LBPRZ", lbprz, 0x76, 0x1, true, 0x4c399e4bf03c3cfa, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CAPACITY16_DATA.LBPME", lbpme, 0x77, 0x1, true, 0xf57162cda33a333c, 1, uint8_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CAPACITY16_DATA.LowestAlignedBlock_LSB", lowest_aligned_block_lsb, 0x78, 0x8, true, 0xababec144818db7e)
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
#endif