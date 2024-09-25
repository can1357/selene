#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_LBA_STATUS.OperationCode", operation_code, 0x0, 0x8, true, 0x92b664666d47a5b8)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_GET_LBA_STATUS.ServiceAction", service_action, 0x8, 0x5, true, 0xc28fa88532789257, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_GET_LBA_STATUS.StartingLBA", starting_lba, 0x10, 0x40, true, 0xb502d78ebb6c38e1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_GET_LBA_STATUS.AllocationLength", allocation_length, 0x50, 0x20, true, 0x50da31af864c0a96)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_LBA_STATUS.Control", control, 0x78, 0x8, true, 0xc58208093e7a2db3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif