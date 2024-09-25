#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_LUNS.OperationCode", operation_code, 0x0, 0x8, true, 0x54c3d013becbdb0e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_REPORT_LUNS.AllocationLength", allocation_length, 0x30, 0x20, true, 0x3c22a16683e2d006)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_LUNS.Control", control, 0x58, 0x8, true, 0xc80ae35cb3d82cf)
#else
#define _m00
#define _m01
#define _m02
#endif