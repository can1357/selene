#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SILO_MONITOR_REGISTRATION.Version", version, 0x0, 0x8, true, 0xe2c59979ed77cb49)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SILO_MONITOR_REGISTRATION.MonitorHost", monitor_host, 0x8, 0x8, true, 0xa7ba874fde2e1bda)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SILO_MONITOR_REGISTRATION.MonitorExistingSilos", monitor_existing_silos, 0x10, 0x8, true, 0x20d89df62addb027)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_SILO_MONITOR_REGISTRATION.DriverObjectName", driver_object_name, 0x40, 0x40, true, 0xae0a402da510bb08)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_SILO_MONITOR_REGISTRATION.ComponentName", component_name, 0x40, 0x40, true, 0x4fc0c62226925974)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::ejob_t*)>*), "_SILO_MONITOR_REGISTRATION.CreateCallback", create_callback, 0x80, 0x40, true, 0xe73e5fa1a7dfbf7d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::ejob_t*)>*), "_SILO_MONITOR_REGISTRATION.TerminateCallback", terminate_callback, 0xc0, 0x40, true, 0x6323765aebec161)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif