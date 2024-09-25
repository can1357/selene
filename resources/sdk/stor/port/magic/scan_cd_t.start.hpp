#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCAN_CD.OperationCode", operation_code, 0x0, 0x8, true, 0xa0292f84be8d015a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SCAN_CD.RelativeAddress", relative_address, 0x8, 0x1, true, 0x35db66f579150e06, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SCAN_CD.Direct", direct, 0xc, 0x1, true, 0x6ae475c6cac29417, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SCAN_CD.Lun", lun, 0xd, 0x3, true, 0x4e50600ba9705965, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SCAN_CD.StartingAddress", starting_address, 0x10, 0x20, true, 0x73de728e935f858e)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SCAN_CD.Type", type, 0x4e, 0x2, true, 0x537a4dcdc7e42c66, 2, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCAN_CD.Control", control, 0x58, 0x8, true, 0x6f826e7765a08cac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif