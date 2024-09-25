#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_DVD_STRUCTURE.OperationCode", operation_code, 0x0, 0x8, true, 0x20bb77c430aa07b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_DVD_STRUCTURE.Lun", lun, 0xd, 0x3, true, 0x4b50a27c8e1f15c, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_DVD_STRUCTURE.RMDBlockNumber", rmd_block_number, 0x10, 0x20, true, 0x1046290f2adacb34)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_DVD_STRUCTURE.LayerNumber", layer_number, 0x30, 0x8, true, 0x67234352b6b938d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_DVD_STRUCTURE.Format", format, 0x38, 0x8, true, 0x31e9b8214cf6f23d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_DVD_STRUCTURE.AllocationLength", allocation_length, 0x40, 0x10, true, 0x9fce8911c3aefb57)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_DVD_STRUCTURE.AGID", agid, 0x56, 0x2, true, 0x91f1e46b95ee395e, 2, uint8_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_DVD_STRUCTURE.Control", control, 0x58, 0x8, true, 0x94a99c027ff02952)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif