#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "PolicySettings.DxState", dx_state, 0x0, 0x20, true, 0xe95d01ff8cbf70c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_instance_internal_t*), "PolicySettings.WmiInstance", wmi_instance, 0x40, 0x40, true, 0x39c29e086abc8084)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PolicySettings.Enabled", enabled, 0x80, 0x8, true, 0x89bb695b9d855c43)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PolicySettings.Overridable", overridable, 0x88, 0x8, true, 0x6d51d714d720dbe9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PolicySettings.Set", set, 0x90, 0x8, true, 0x918c7a9b0cc9c94)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PolicySettings.Dirty", dirty, 0x98, 0x8, true, 0x99bfa25764d827c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif