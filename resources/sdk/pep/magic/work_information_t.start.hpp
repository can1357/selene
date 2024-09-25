#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pep::work_type_t), "_PEP_WORK_INFORMATION.WorkType", work_type, 0x0, 0x20, true, 0x7d9ead4e9c73616c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_active_complete_t), "_PEP_WORK_INFORMATION.ActiveComplete", active_complete, 0x40, 0x80, true, 0x26f9e80385e09e5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_idle_state_t), "_PEP_WORK_INFORMATION.IdleState", idle_state, 0x40, 0x80, true, 0xa8dc7b92fb8752ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_device_power_t), "_PEP_WORK_INFORMATION.DevicePower", device_power, 0x40, 0x80, true, 0xd1a0089ee814bf6c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_power_control_t), "_PEP_WORK_INFORMATION.PowerControl", power_control, 0x40, 0xc0, true, 0x9d25258cc27284d4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_device_idle_t), "_PEP_WORK_INFORMATION.DeviceIdle", device_idle, 0x40, 0x80, true, 0x7e2b55e0a7bf18e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_complete_idle_state_t), "_PEP_WORK_INFORMATION.CompleteIdleState", complete_idle_state, 0x40, 0x80, true, 0x17d67d07789476e6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_complete_perf_state_t), "_PEP_WORK_INFORMATION.CompletePerfState", complete_perf_state, 0x40, 0x80, true, 0x65635f955290f660)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_acpi_notify_t), "_PEP_WORK_INFORMATION.AcpiNotify", acpi_notify, 0x40, 0x80, true, 0x1b64bf85504008fb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_acpi_evaluate_control_method_complete_t), "_PEP_WORK_INFORMATION.ControlMethodComplete", control_method_complete, 0x40, 0x40, true, 0xbc88865b48974f5a)
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
#endif