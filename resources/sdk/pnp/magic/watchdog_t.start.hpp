#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PNP_WATCHDOG.WatchdogStart", watchdog_start, 0x0, 0x40, true, 0xcf8291a1f2c621e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::wdt_handle_t*), "_PNP_WATCHDOG.WatchdogTimer", watchdog_timer, 0x40, 0x40, true, 0xb50a5353f8eeec71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::watchdog_type_t), "_PNP_WATCHDOG.WatchdogContextType", watchdog_context_type, 0x80, 0x20, true, 0x67b6c4466955ec0a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PNP_WATCHDOG.WatchdogContext", watchdog_context, 0xc0, 0x40, true, 0xa050a1d311fb713e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_WATCHDOG.TriggerEventLogged", trigger_event_logged, 0x100, 0x8, true, 0x9bd7c41ebff7df13)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_WATCHDOG.FirstChanceTriggered", first_chance_triggered, 0x0, 0x0, false, 0x7e1c7d259396bed8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_WATCHDOG.TelemetryGenerated", telemetry_generated, 0x0, 0x0, false, 0x9042e28c33b251c2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PNP_WATCHDOG.DriverToBlame", driver_to_blame, 0x0, 0x0, false, 0x31b5c7fa5416e17c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PNP_WATCHDOG.DriverToBlameBuffer", driver_to_blame_buffer, 0x0, 0x0, false, 0x9ff7ba65151d1b99)
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