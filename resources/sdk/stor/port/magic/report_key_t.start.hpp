#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_KEY.OperationCode", operation_code, 0x0, 0x8, true, 0x4bb751040b099f30)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_REPORT_KEY.Lun", lun, 0xd, 0x3, true, 0x2961710112a75d5d, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_REPORT_KEY.LogicalBlockAddress", logical_block_address, 0x10, 0x20, true, 0x8db30e9267861230)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_REPORT_KEY.AllocationLength", allocation_length, 0x40, 0x10, true, 0x3a6fd4c036cab49f)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_REPORT_KEY.KeyFormat", key_format, 0x50, 0x6, true, 0xac31e3147ea6be10, 6, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_REPORT_KEY.AGID", agid, 0x56, 0x2, true, 0x5d5403469dfaa574, 2, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_KEY.Control", control, 0x58, 0x8, true, 0xf0c3059e6b62da67)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif