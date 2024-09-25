#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MECH_STATUS.OperationCode", operation_code, 0x0, 0x8, true, 0x5242cbe1ae498fda)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MECH_STATUS.Lun", lun, 0xd, 0x3, true, 0xcf7987271c217cb8, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MECH_STATUS.AllocationLength", allocation_length, 0x40, 0x10, true, 0x2685e189718788d5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MECH_STATUS.Control", control, 0x58, 0x8, true, 0xc4d0b5747d1c6aab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif