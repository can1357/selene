#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_SETTINGS_ADDITIONAL.Version", version, 0x0, 0x0, false, 0x707d7959a7895853)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_SETTINGS_ADDITIONAL.Size", size, 0x0, 0x0, false, 0xc4e6d471741d3c76)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_SET_CHILD_PF_SETTINGS_ADDITIONAL.ChildControllerId", child_controller_id, 0x0, 0x0, false, 0x6757c7711f6600dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_SETTINGS_ADDITIONAL.Flags", flags, 0x0, 0x0, false, 0xb2984e8cf3b5eb9a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mfnd_physical_function_settings_t), "_MFND_SET_CHILD_PF_SETTINGS_ADDITIONAL.Settings", settings, 0x0, 0x0, false, 0x6643b10abfe5928d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif