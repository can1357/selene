#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_SYSPOWER_NOTIFY.Header", header, 0x0, 0x20, true, 0x2de646a96aa7e6d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_NDIS_MINIPORT_SYSPOWER_NOTIFY.TargetSystemState", target_system_state, 0x20, 0x20, true, 0x49a9bab4f3c0d99f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_NDIS_MINIPORT_SYSPOWER_NOTIFY.EffectiveSystemState", effective_system_state, 0x40, 0x20, true, 0x5c6d18071054f229)
#else
#define _m00
#define _m01
#define _m02
#endif