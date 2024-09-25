#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::soc_subsystem_type_t), "_SOC_SUBSYSTEM_FAILURE_DETAILS.SubsysType", subsys_type, 0x0, 0x20, true, 0xc897a879a1e6109b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SOC_SUBSYSTEM_FAILURE_DETAILS.FirmwareVersion", firmware_version, 0x40, 0x40, true, 0x714094a659f2db6a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SOC_SUBSYSTEM_FAILURE_DETAILS.HardwareVersion", hardware_version, 0x80, 0x40, true, 0xa41e350a3711eefe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SOC_SUBSYSTEM_FAILURE_DETAILS.UnifiedFailureRegionSize", unified_failure_region_size, 0xc0, 0x20, true, 0x6ca79cca99f905c9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_SOC_SUBSYSTEM_FAILURE_DETAILS.UnifiedFailureRegion", unified_failure_region, 0xe0, 0x8, true, 0xa452c6ec974642b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif