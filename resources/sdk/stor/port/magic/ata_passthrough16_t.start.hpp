#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.OperationCode", operation_code, 0x0, 0x8, true, 0x765c3552f3971394)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ATA_PASSTHROUGH16.Extend", extend, 0x8, 0x1, true, 0x874d359e66c68a18, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_ATA_PASSTHROUGH16.Protocol", protocol, 0x9, 0x4, true, 0x6690905a10b85419, 4, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_ATA_PASSTHROUGH16.MultipleCount", multiple_count, 0xd, 0x3, true, 0xe0be84c21dc1a649, 3, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ATA_PASSTHROUGH16.TLength", t_length, 0x10, 0x2, true, 0xc26a303e51a4f492, 2, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ATA_PASSTHROUGH16.ByteBlock", byte_block, 0x12, 0x1, true, 0x9e80266e2df09f3d, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ATA_PASSTHROUGH16.TDir", t_dir, 0x13, 0x1, true, 0x66dcc0bf763a49ad, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ATA_PASSTHROUGH16.CkCond", ck_cond, 0x15, 0x1, true, 0x43a486aa6ee62589, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ATA_PASSTHROUGH16.Offline", offline, 0x16, 0x2, true, 0xb1241dd067fd5c7f, 2, uint8_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.Features15_8", features15_8, 0x18, 0x8, true, 0xcc65832128b76686)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.Features7_0", features7_0, 0x20, 0x8, true, 0x1a14241ee2754ffb)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.SectorCount15_8", sector_count15_8, 0x28, 0x8, true, 0xd84693ae650ec0c6)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.SectorCount7_0", sector_count7_0, 0x30, 0x8, true, 0x3ff6fc7fe41d0750)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.LbaLow15_8", lba_low15_8, 0x38, 0x8, true, 0xb888273ded7a1d6c)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.LbaLow7_0", lba_low7_0, 0x40, 0x8, true, 0x3c0b74c12a0f9773)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.LbaMid15_8", lba_mid15_8, 0x48, 0x8, true, 0x293fc2a6f35b05d8)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.LbaMid7_0", lba_mid7_0, 0x50, 0x8, true, 0xed373d119f687868)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.LbaHigh15_8", lba_high15_8, 0x58, 0x8, true, 0x61204b8603356059)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.LbaHigh7_0", lba_high7_0, 0x60, 0x8, true, 0x5b7b5ca01bb8aea4)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.Device", device, 0x68, 0x8, true, 0x4a6d6a0594e93858)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.Command", command, 0x70, 0x8, true, 0x98e8c82f8cbfc9a)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASSTHROUGH16.Control", control, 0x78, 0x8, true, 0x734ea5432d706f8f)
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
#define _m19
#define _m20
#define _m21
#endif