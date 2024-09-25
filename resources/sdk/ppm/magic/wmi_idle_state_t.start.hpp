#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATE.Latency", latency, 0x0, 0x20, true, 0x76e5cd2403b753d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATE.Power", power, 0x20, 0x20, true, 0x36752ef70d44703c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATE.TimeCheck", time_check, 0x40, 0x20, true, 0xb76c8b72cd4c16a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_IDLE_STATE.PromotePercent", promote_percent, 0x60, 0x8, true, 0x304595a3b8f7e922)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_IDLE_STATE.DemotePercent", demote_percent, 0x68, 0x8, true, 0x20e9ddefcebc9842)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_IDLE_STATE.StateType", state_type, 0x70, 0x8, true, 0xcbeb2a907a61e8d2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATE.StateFlags", state_flags, 0x80, 0x20, true, 0xab94e69d8901fb59)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATE.Context", context, 0xa0, 0x20, true, 0xc17baf2d30f0f897)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATE.IdleHandler", idle_handler, 0xc0, 0x20, true, 0x756ad15950dfeb48)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif