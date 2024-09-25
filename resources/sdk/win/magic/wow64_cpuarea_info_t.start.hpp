#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WOW64_CPUAREA_INFO.Context", context, 0x0, 0x40, true, 0x4deee557d7a7e4fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct win::x86_context_t*, struct win::x86_nt5_context_t*>), "_WOW64_CPUAREA_INFO.ContextX86", context_x86, 0x0, 0x40, true, 0xc29398d2dcda4320)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::amd64_context_t*), "_WOW64_CPUAREA_INFO.ContextAmd64", context_amd64, 0x0, 0x40, true, 0xfcd3c8495e68ab8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::arm_context_t*), "_WOW64_CPUAREA_INFO.ContextArm", context_arm, 0x0, 0x40, true, 0xd803c473a2857244)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::arm64_context_t*), "_WOW64_CPUAREA_INFO.ContextArm64", context_arm64, 0x0, 0x40, true, 0x11bf4e97b4e07ce6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_WOW64_CPUAREA_INFO.PerThreadDataLocation", per_thread_data_location, 0x40, 0x40, true, 0x1fd22909148b74)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WOW64_CPUAREA_INFO.ContextFlagsLocation", context_flags_location, 0x80, 0x40, true, 0xa09654b8ae532115)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WOW64_CPUAREA_INFO.CpuAreaFlagsLocation", cpu_area_flags_location, 0xc0, 0x40, true, 0xd72b2064d41dd06d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CPUAREA_INFO.ArchContextFlag", arch_context_flag, 0x100, 0x20, true, 0x874719be5107a2d4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WOW64_CPUAREA_INFO.Machine", machine, 0x120, 0x10, true, 0xef3be9b9f6bf41f9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t*), "_WOW64_CPUAREA_INFO.KernelWriteToExecutableSignaledLocation", kernel_write_to_executable_signaled_location, 0x140, 0x40, true, 0x7c8f0960b41c57c9)
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