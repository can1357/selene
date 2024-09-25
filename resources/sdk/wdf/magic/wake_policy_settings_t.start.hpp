#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "WakePolicySettings.DxState", dx_state, 0x0, 0x20, true, 0xcb6ed1d37d61cab2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_instance_internal_t*), "WakePolicySettings.WmiInstance", wmi_instance, 0x40, 0x40, true, 0x6157b57261a69a76)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WakePolicySettings.Enabled", enabled, 0x80, 0x8, true, 0xb2381efd2a4e37c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WakePolicySettings.Overridable", overridable, 0x88, 0x8, true, 0x5d64d9d4728867bf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WakePolicySettings.Set", set, 0x90, 0x8, true, 0xa400d545bd8fe0fc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WakePolicySettings.Dirty", dirty, 0x98, 0x8, true, 0xdb8b83fa53b72b8b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WakePolicySettings.ArmForWakeIfChildrenAreArmedForWake", arm_for_wake_if_children_are_armed_for_wake, 0xc0, 0x8, true, 0xe5d2a917fc819777)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WakePolicySettings.IndicateChildWakeOnParentWake", indicate_child_wake_on_parent_wake, 0xc8, 0x8, true, 0x6d0e8b6371bb1674)
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