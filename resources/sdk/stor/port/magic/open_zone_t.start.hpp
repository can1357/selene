#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OPEN_ZONE.OperationCode", operation_code, 0x0, 0x8, true, 0xeaca6fc21defd859)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_OPEN_ZONE.ServiceAction", service_action, 0x8, 0x5, true, 0xc1c6a1a8d80b9cf2, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_OPEN_ZONE.ZoneId", zone_id, 0x10, 0x40, true, 0x681ae0b69c795168)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OPEN_ZONE.All", all, 0x70, 0x1, true, 0xffd52ac2ef6f5f25, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OPEN_ZONE.Control", control, 0x78, 0x8, true, 0xdad2e9097e9285b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif