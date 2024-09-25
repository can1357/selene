#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_HYPERVISOR_QUERY_INFORMATION.HypervisorConnected", hypervisor_connected, 0x0, 0x8, true, 0xc7265f8fa6e4f445)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_HYPERVISOR_QUERY_INFORMATION.HypervisorDebuggingEnabled", hypervisor_debugging_enabled, 0x8, 0x8, true, 0x144ab6457ec124b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_HYPERVISOR_QUERY_INFORMATION.HypervisorPresent", hypervisor_present, 0x10, 0x8, true, 0x21f91d2a5ac7afdc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_HYPERVISOR_QUERY_INFORMATION.EnabledEnlightenments", enabled_enlightenments, 0x40, 0x40, true, 0xf00fd00181112d6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_HYPERVISOR_QUERY_INFORMATION.HypervisorSchedulerType", hypervisor_scheduler_type, 0x18, 0x8, true, 0x39cfbe4bbdcbb1af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif