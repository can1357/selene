#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_APPLICATIONLAUNCH_SETTING_VALUE.ActivationTime", activation_time, 0x0, 0x40, true, 0x4373958bf419ce0e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPLICATIONLAUNCH_SETTING_VALUE.Flags", flags, 0x40, 0x20, true, 0x2d135defefd27898)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPLICATIONLAUNCH_SETTING_VALUE.ButtonInstanceID", button_instance_id, 0x60, 0x20, true, 0xf2420b97354eec21)
#else
#define _m00
#define _m01
#define _m02
#endif