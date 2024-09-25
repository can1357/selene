#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_TIMESTAMP.OperationCode", operation_code, 0x0, 0x8, true, 0x272e177793658eff)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_REPORT_TIMESTAMP.ServiceAction", service_action, 0x8, 0x5, true, 0xc222a70c427ac041, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_REPORT_TIMESTAMP.AllocationLength", allocation_length, 0x30, 0x20, true, 0xc25e3e25aea1310f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_TIMESTAMP.Control", control, 0x58, 0x8, true, 0x44e855959f7c33af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif