#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVM_RESERVATION_CAPABILITIES.PersistThroughPowerLoss", persist_through_power_loss, 0x0, 0x0, false, 0xa2bfc1e68440603d, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVM_RESERVATION_CAPABILITIES.WriteExclusiveReservation", write_exclusive_reservation, 0x0, 0x0, false, 0xd824745dae53fdb1, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVM_RESERVATION_CAPABILITIES.ExclusiveAccessReservation", exclusive_access_reservation, 0x0, 0x0, false, 0xa515f05a80c9bb4d, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVM_RESERVATION_CAPABILITIES.WriteExclusiveRegistrantsOnlyReservation", write_exclusive_registrants_only_reservation, 0x0, 0x0, false, 0x2aca445333ff4651, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVM_RESERVATION_CAPABILITIES.ExclusiveAccessRegistrantsOnlyReservation", exclusive_access_registrants_only_reservation, 0x0, 0x0, false, 0x76a7c334f6d33340, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVM_RESERVATION_CAPABILITIES.WriteExclusiveAllRegistrantsReservation", write_exclusive_all_registrants_reservation, 0x0, 0x0, false, 0x7dfdb353195e4c47, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVM_RESERVATION_CAPABILITIES.ExclusiveAccessAllRegistrantsReservation", exclusive_access_all_registrants_reservation, 0x0, 0x0, false, 0x9debd66d279342e9, 1, uint8_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVM_RESERVATION_CAPABILITIES.AsUchar", as_uchar, 0x0, 0x0, false, 0x7bdc1c8a3de39ee3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif