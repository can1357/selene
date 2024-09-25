#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_OPERATIONAL_STATUS.OperationalEvent", operational_event, 0x0, 0x4, true, 0xaaa2f027b881225a, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_OPERATIONAL_STATUS.OperationalStatus", operational_status, 0x8, 0x4, true, 0x529d1521b832543b, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NOTIFICATION_OPERATIONAL_STATUS.PersistentPrevented", persistent_prevented, 0xf, 0x1, true, 0x2e1c24a891216d93, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_NOTIFICATION_OPERATIONAL_STATUS.Operation", operation, 0x10, 0x10, true, 0x555de369f10b5535)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif