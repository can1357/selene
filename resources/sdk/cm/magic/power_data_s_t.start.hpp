#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "CM_Power_Data_s.PD_Size", pd_size, 0x0, 0x20, true, 0xc299a2e36b22fe5b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "CM_Power_Data_s.PD_MostRecentPowerState", pd_most_recent_power_state, 0x20, 0x20, true, 0x42f7b12b4aa61951)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "CM_Power_Data_s.PD_Capabilities", pd_capabilities, 0x40, 0x20, true, 0x8c486c79454cb032)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "CM_Power_Data_s.PD_D1Latency", pd_d1_latency, 0x60, 0x20, true, 0x44c2384a01de8bc8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "CM_Power_Data_s.PD_D2Latency", pd_d2_latency, 0x80, 0x20, true, 0x3f6bd61ac647d98b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "CM_Power_Data_s.PD_D3Latency", pd_d3_latency, 0xa0, 0x20, true, 0xab95dec0642608b6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "CM_Power_Data_s.PD_PowerStateMapping", pd_power_state_mapping, 0xc0, 0xe0, true, 0x807b4164fa745682)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "CM_Power_Data_s.PD_DeepestSystemWake", pd_deepest_system_wake, 0x1a0, 0x20, true, 0x1d23a8d9d73ab570)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif