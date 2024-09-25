#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ClearProblem.ProblemCodeToClear", problem_code_to_clear, 0x0, 0x0, false, 0xffe63cb5d6cdcb8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_clear_problem_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ClearProblem", clear_problem, 0x0, 0x0, false, 0x5bc59eb3435a535b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pnp::rebalance_flags_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.Rebalance", rebalance, 0x0, 0x0, false, 0x3929e98bc4b78431)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ReenumerateDeviceOnly.ClearWaitingForFdo", clear_waiting_for_fdo, 0x0, 0x0, false, 0x7245cd04150d961d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_reenumerate_device_only_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ReenumerateDeviceOnly", reenumerate_device_only, 0x0, 0x0, false, 0xa9fe93c9f39120cb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ResourceRequirementsChanged.StopRequired", stop_required, 0x0, 0x0, false, 0x84ae654ede1eb23a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_resource_requirements_changed_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ResourceRequirementsChanged", resource_requirements_changed, 0x0, 0x0, false, 0x32cb5282576433c6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.RequestDeviceReset.Flags", flags, 0x0, 0x0, false, 0x300f993062d4f0c5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_request_device_reset_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.RequestDeviceReset", request_device_reset, 0x0, 0x0, false, 0xdc3addfe3c6dacea)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::plugplay_control_status_data_t*), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.SetDeviceProblem.ControlStatusData", control_status_data, 0x0, 0x0, false, 0x13d1fe3df0e8cc04)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_set_device_problem_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.SetDeviceProblem", set_device_problem, 0x0, 0x0, false, 0x87fba86fb971ec3f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::device_iommu_domain_policy_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.UpdateConsoleLockState.DomainPolicy", domain_policy, 0x0, 0x0, false, 0x320ba90e15013c24)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_update_console_lock_state_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.UpdateConsoleLockState", update_console_lock_state, 0x0, 0x0, false, 0x9a08692c698ec591)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.AsUlong64", as_ulong64, 0x0, 0x0, false, 0x9abb2aa7173c532c)
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
#endif