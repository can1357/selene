#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.InitialHypervisorCrashdumpAreaPageCount", initial_hypervisor_crashdump_area_page_count, 0x0, 0x20, true, 0x82e5028392e90c3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.HypervisorCrashdumpAreaPageCount", hypervisor_crashdump_area_page_count, 0x20, 0x20, true, 0xf4707babe9b8d6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.InitialHypervisorCrashdumpAreaSpa", initial_hypervisor_crashdump_area_spa, 0x40, 0x40, true, 0x7117b4b7e1be6f94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.HypervisorCrashdumpAreaSpa", hypervisor_crashdump_area_spa, 0x80, 0x40, true, 0x7d22071b4c5ea87a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.HypervisorLaunchStatus", hypervisor_launch_status, 0xc0, 0x40, true, 0x69ee9ca052e033b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.HypervisorLaunchStatusArg1", hypervisor_launch_status_arg1, 0x100, 0x40, true, 0x33526e479f6c0a2b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.HypervisorLaunchStatusArg2", hypervisor_launch_status_arg2, 0x140, 0x40, true, 0xce19bea922d41a1c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.HypervisorLaunchStatusArg3", hypervisor_launch_status_arg3, 0x180, 0x40, true, 0xa0687d4bf522b218)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.HypervisorLaunchStatusArg4", hypervisor_launch_status_arg4, 0x1c0, 0x40, true, 0x3a0e18dc65c7b9c5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.RangeArray", range_array, 0x0, 0x0, false, 0xc7ec77b9df74c374)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.RangeCount", range_count, 0x0, 0x0, false, 0xd638cf626b878be5)
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
#endif