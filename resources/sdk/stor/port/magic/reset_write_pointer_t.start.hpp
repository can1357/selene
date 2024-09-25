#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RESET_WRITE_POINTER.OperationCode", operation_code, 0x0, 0x8, true, 0x59a3c1e10eceef5)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_RESET_WRITE_POINTER.ServiceAction", service_action, 0x8, 0x5, true, 0xfadea0e0d564ddd, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_RESET_WRITE_POINTER.ZoneId", zone_id, 0x10, 0x40, true, 0xf4cd810f71c49479)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RESET_WRITE_POINTER.All", all, 0x70, 0x1, true, 0x3eca29346e7ced9c, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RESET_WRITE_POINTER.Control", control, 0x78, 0x8, true, 0x2c160169d4bc59fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif