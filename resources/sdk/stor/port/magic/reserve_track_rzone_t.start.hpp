#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RESERVE_TRACK_RZONE.OperationCode", operation_code, 0x0, 0x8, true, 0x7f45e4a12877e7a8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_RESERVE_TRACK_RZONE.ReservationSize", reservation_size, 0x28, 0x20, true, 0x5d0b59e9c08232d4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RESERVE_TRACK_RZONE.Control", control, 0x48, 0x8, true, 0xe8348a436acebf41)
#else
#define _m00
#define _m01
#define _m02
#endif