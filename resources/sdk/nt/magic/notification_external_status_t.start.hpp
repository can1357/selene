#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_EXTERNAL_STATUS.ExternalEvent", external_event, 0x0, 0x4, true, 0x1c5630bbe462327f, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_EXTERNAL_STATUS.ExternalStatus", external_status, 0x8, 0x4, true, 0xb042f723ebba3ff2, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NOTIFICATION_EXTERNAL_STATUS.PersistentPrevented", persistent_prevented, 0xf, 0x1, true, 0xd86f23483705cb14, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_NOTIFICATION_EXTERNAL_STATUS.Request", request, 0x10, 0x10, true, 0x9a6439e4edeff73f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif