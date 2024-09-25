#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_DISK_INFORMATION.OperationCode", operation_code, 0x0, 0x8, true, 0xeb800551f67474dd)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_DISK_INFORMATION.Lun", lun, 0xd, 0x3, true, 0x4b75f317f9f9634, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_DISK_INFORMATION.AllocationLength", allocation_length, 0x38, 0x10, true, 0x4bbeb06f9c32a64e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_DISK_INFORMATION.Control", control, 0x48, 0x8, true, 0x94c810b8e187dd0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif