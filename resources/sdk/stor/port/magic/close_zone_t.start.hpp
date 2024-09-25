#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLOSE_ZONE.OperationCode", operation_code, 0x0, 0x8, true, 0x3772ce5deb70bc82)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_CLOSE_ZONE.ServiceAction", service_action, 0x8, 0x5, true, 0x7e76934d5f56cad3, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CLOSE_ZONE.ZoneId", zone_id, 0x10, 0x40, true, 0x505faa106d398b0b)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLOSE_ZONE.All", all, 0x70, 0x1, true, 0xdbbe79bc5661da96, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLOSE_ZONE.Control", control, 0x78, 0x8, true, 0xe578b91cde86b2d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif