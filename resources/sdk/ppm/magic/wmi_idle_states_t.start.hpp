#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES.Type", type, 0x0, 0x20, true, 0x4f9afcf03ab5e55a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES.Count", count, 0x20, 0x20, true, 0xede0fe4f981ff5c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES.TargetState", target_state, 0x40, 0x20, true, 0xcfa29fa031977f4e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_IDLE_STATES.OldState", old_state, 0x60, 0x20, true, 0x77101a1c131d26a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_WMI_IDLE_STATES.TargetProcessors", target_processors, 0x80, 0x40, true, 0x976a765ba3ae62ff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::wmi_idle_state_t, 1>), "PPM_WMI_IDLE_STATES.State", state, 0xc0, 0x0, true, 0x26a968428b676173)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif