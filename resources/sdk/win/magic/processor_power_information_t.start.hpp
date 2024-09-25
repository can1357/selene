#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_INFORMATION.Number", number, 0x0, 0x20, true, 0x95b0225c023321f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_INFORMATION.MaxMhz", max_mhz, 0x20, 0x20, true, 0x3879cd813ef38fb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_INFORMATION.CurrentMhz", current_mhz, 0x40, 0x20, true, 0xfaf54706959e9100)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_INFORMATION.MhzLimit", mhz_limit, 0x60, 0x20, true, 0x2cead88e6836f14e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_INFORMATION.MaxIdleState", max_idle_state, 0x80, 0x20, true, 0x38acf9e8e11a2f10)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_INFORMATION.CurrentIdleState", current_idle_state, 0xa0, 0x20, true, 0x39280971632b333e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif