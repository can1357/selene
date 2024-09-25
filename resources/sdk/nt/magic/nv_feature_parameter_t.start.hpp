#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVPowerModeEnabled", nv_power_mode_enabled, 0x0, 0x10, true, 0x845c949294edf769)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVParameterReserv1", nv_parameter_reserv1, 0x10, 0x10, true, 0x4a7d40be8525f562)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVCmdEnabled", nv_cmd_enabled, 0x20, 0x10, true, 0x9ae0c05b901916ac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVParameterReserv2", nv_parameter_reserv2, 0x30, 0x10, true, 0x49ce3a39847c5672)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVPowerModeVer", nv_power_mode_ver, 0x40, 0x10, true, 0x8c3fa7814daa1954)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVCmdVer", nv_cmd_ver, 0x50, 0x10, true, 0x5f81b28044930bbf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NV_FEATURE_PARAMETER.NVSize", nv_size, 0x60, 0x20, true, 0xa1dd7e10b1c2c6e8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVReadSpeed", nv_read_speed, 0x80, 0x10, true, 0xb9747e3b89ffaeb0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NV_FEATURE_PARAMETER.NVWrtSpeed", nv_wrt_speed, 0x90, 0x10, true, 0x824f6d3e203afa2b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NV_FEATURE_PARAMETER.DeviceSpinUpTime", device_spin_up_time, 0xa0, 0x20, true, 0x96e021201caa413)
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