#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_MULTI_HOST_STATUS.MultiHostEvent", multi_host_event, 0x0, 0x4, true, 0x95e611a801ebd46b, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_MULTI_HOST_STATUS.MultiHostStatus", multi_host_status, 0x8, 0x4, true, 0x5f58b7fe4f11449e, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NOTIFICATION_MULTI_HOST_STATUS.PersistentPrevented", persistent_prevented, 0xf, 0x1, true, 0xc10bf7381341e7f2, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_NOTIFICATION_MULTI_HOST_STATUS.Priority", priority, 0x10, 0x10, true, 0x793cc77ea5fd263f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif