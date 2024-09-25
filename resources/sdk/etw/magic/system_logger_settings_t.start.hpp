#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::system_logger_t, 8>), "_ETW_SYSTEM_LOGGER_SETTINGS.EtwpSystemLogger", etwp_system_logger, 0x0, 0x80, true, 0xb9a330455295ead3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_ETW_SYSTEM_LOGGER_SETTINGS.EtwpActiveSystemLoggers", etwp_active_system_loggers, 0x80, 0x20, true, 0xb99c039f4f1fe26d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::perfinfo_groupmask_t), "_ETW_SYSTEM_LOGGER_SETTINGS.SiloGlobalGroupMask", silo_global_group_mask, 0xa0, 0x0, true, 0x83ad35195de86d0d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::perfinfo_groupmask_t, 10>), "_ETW_SYSTEM_LOGGER_SETTINGS.EtwpGroupMasks", etwp_group_masks, 0x1a0, 0x0, true, 0x1a59da9db6adbfe4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif