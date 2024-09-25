#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES_EX.Type", type, 0x0, 0x20, true, 0xeb8e0b1477fc3dce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES_EX.Count", count, 0x20, 0x20, true, 0x838d17838c1b7d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES_EX.TargetState", target_state, 0x40, 0x20, true, 0x7b29122285e3c0f0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES_EX.OldState", old_state, 0x60, 0x20, true, 0x1e33f4c6ea763ceb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "PPM_WMI_IDLE_STATES_EX.TargetProcessors", target_processors, 0x80, 0x40, true, 0x57cf3c968975e0d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::wmi_idle_state_t, 1>), "PPM_WMI_IDLE_STATES_EX.State", state, 0xc0, 0x0, true, 0xf54d620d14171d36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif