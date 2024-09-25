#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILO_USER_SHARED_DATA.ServiceSessionId", service_session_id, 0x0, 0x20, true, 0xb8ef367df2e423fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILO_USER_SHARED_DATA.ActiveConsoleId", active_console_id, 0x20, 0x20, true, 0xfd2b23b2dcb9e9f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SILO_USER_SHARED_DATA.ConsoleSessionForegroundProcessId", console_session_foreground_process_id, 0x40, 0x40, true, 0x2a6ef534aaaebc64)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::product_type_t), "_SILO_USER_SHARED_DATA.NtProductType", nt_product_type, 0x80, 0x20, true, 0xeb51c9f369f74958)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILO_USER_SHARED_DATA.SuiteMask", suite_mask, 0xa0, 0x20, true, 0xdc8e88a3e0a20f56)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SILO_USER_SHARED_DATA.IsMultiSessionSku", is_multi_session_sku, 0xe0, 0x8, true, 0xae83908a29ed1b0a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILO_USER_SHARED_DATA.SharedUserSessionId", shared_user_session_id, 0xc0, 0x20, true, 0x65e2c978639e7181)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_SILO_USER_SHARED_DATA.NtSystemRoot", nt_system_root, 0xf0, 0x40, true, 0x607066f9634c722b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 16>), "_SILO_USER_SHARED_DATA.UserModeGlobalLogger", user_mode_global_logger, 0x1130, 0x0, true, 0xfaec619374bdae00)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SILO_USER_SHARED_DATA.IsStateSeparationEnabled", is_state_separation_enabled, 0x0, 0x0, false, 0x6e60b546673803a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILO_USER_SHARED_DATA.TimeZoneId", time_zone_id, 0x0, 0x0, false, 0x1ab89d7a2f0f1421)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_SILO_USER_SHARED_DATA.TimeZoneBiasStamp", time_zone_bias_stamp, 0x0, 0x0, false, 0x1b546e6ff7ae318b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksystem_time_t), "_SILO_USER_SHARED_DATA.TimeZoneBias", time_zone_bias, 0x0, 0x0, false, 0x4dc23ec9cb326d2c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SILO_USER_SHARED_DATA.TimeZoneBiasEffectiveStart", time_zone_bias_effective_start, 0x0, 0x0, false, 0xe7696e1f1f008083)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SILO_USER_SHARED_DATA.TimeZoneBiasEffectiveEnd", time_zone_bias_effective_end, 0x0, 0x0, false, 0xddacce9eb0779f70)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif