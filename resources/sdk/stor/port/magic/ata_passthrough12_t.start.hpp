#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.OperationCode", operation_code, 0x0, 0x8, true, 0xf35a1feb1d6e0ec6)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_ATA_PASSTHROUGH12.Protocol", protocol, 0x9, 0x4, true, 0xd1588219fbe2442d, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_ATA_PASSTHROUGH12.MultipleCount", multiple_count, 0xd, 0x3, true, 0x5bd903ac2a09cf65, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ATA_PASSTHROUGH12.TLength", t_length, 0x10, 0x2, true, 0x54c066e19e2413f7, 2, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ATA_PASSTHROUGH12.ByteBlock", byte_block, 0x12, 0x1, true, 0xea07930312546355, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ATA_PASSTHROUGH12.TDir", t_dir, 0x13, 0x1, true, 0x32bbe014ef5f6eed, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ATA_PASSTHROUGH12.CkCond", ck_cond, 0x15, 0x1, true, 0xd613359c6e5f8af7, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ATA_PASSTHROUGH12.Offline", offline, 0x16, 0x2, true, 0x180515e7a885293e, 2, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.Features", features, 0x18, 0x8, true, 0x1b2e46ee2b2e9aaa)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.SectorCount", sector_count, 0x20, 0x8, true, 0x25a939fff56bb482)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.LbaLow", lba_low, 0x28, 0x8, true, 0xc13a714b7fa2b5b3)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.LbaMid", lba_mid, 0x30, 0x8, true, 0xe81369585cb1b5f3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.LbaHigh", lba_high, 0x38, 0x8, true, 0xfde8819217414606)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.Device", device, 0x40, 0x8, true, 0xb16b940eb9dfdae2)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.Command", command, 0x48, 0x8, true, 0x326ead4609588125)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH12.Control", control, 0x58, 0x8, true, 0xf4b05a20394b5442)
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
#endif