#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_ADMINISTRATOR_POWER_POLICY.MinSleep", min_sleep, 0x0, 0x20, true, 0x1ef5ce3f4c09cc18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_ADMINISTRATOR_POWER_POLICY.MaxSleep", max_sleep, 0x20, 0x20, true, 0x74844dceb2132062)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADMINISTRATOR_POWER_POLICY.MinVideoTimeout", min_video_timeout, 0x40, 0x20, true, 0x1fde712129d833a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADMINISTRATOR_POWER_POLICY.MaxVideoTimeout", max_video_timeout, 0x60, 0x20, true, 0xb0d1abb4b0c76a2b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADMINISTRATOR_POWER_POLICY.MinSpindownTimeout", min_spindown_timeout, 0x80, 0x20, true, 0xc7bf431f7ebb4ef5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADMINISTRATOR_POWER_POLICY.MaxSpindownTimeout", max_spindown_timeout, 0xa0, 0x20, true, 0xdf142f08a932c074)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif