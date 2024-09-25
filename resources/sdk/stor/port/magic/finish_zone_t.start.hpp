#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FINISH_ZONE.OperationCode", operation_code, 0x0, 0x8, true, 0xf777a6950251562b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_FINISH_ZONE.ServiceAction", service_action, 0x8, 0x5, true, 0x3287573fcb84bf42, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_FINISH_ZONE.ZoneId", zone_id, 0x10, 0x40, true, 0xd465dd4cdcd5bfc)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FINISH_ZONE.All", all, 0x70, 0x1, true, 0xbee0c11e53f9da79, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FINISH_ZONE.Control", control, 0x78, 0x8, true, 0xfe2bd6aa674fc43)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif